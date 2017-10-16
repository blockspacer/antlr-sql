#include <iostream>
#include <string>
#include <antlr4-runtime.h>
#include <vector>
#include "dmlParser.h"
#include "dmlLexer.h"
#include "dmlBaseVisitor.h"
#include "db_engine.h"
#include <unistd.h>
using namespace antlrcpptest;
using namespace antlr4;

class parseTreeVisitor : public dmlBaseVisitor {
  public :
    db_engine Engine;
  private :

  virtual antlrcpp::Any visitQuery(dmlParser::QueryContext *ctx) override {
      Table t = visit(ctx->expr()).as<Table>();
      string name = ctx->relation_name()->getText();
      Table* result = new Table(name, t.attributes, t.types, t.keys);     //allocate a spot on the heap
      result->data = t.data;
      result->veiw = true;
      Table* check =  Engine.find_table_by_name(name);      //check to see if the table by that name has already been declared
      if(check != NULL){
        *check = *result;   //If it does save it over that spot
      }else{
        Engine.open_tables.push_back(result);   //store it
      }
        
  }

  virtual antlrcpp::Any visitExpr(dmlParser::ExprContext *ctx) override {
      if(ctx->selection() != NULL){                     //for expression to be returned correctly...
         return visit(ctx->selection()).as<Table>();    // we must go through every possible child...
      }else if(ctx->projection() != NULL){              // and return it as a table
         return visit(ctx->projection()).as<Table>();
      }else if(ctx->renaming() != NULL){
         return visit(ctx->renaming()).as<Table>();
      }else if(ctx->union1() != NULL){
         return visit(ctx->union1()).as<Table>();
      }else if(ctx->difference() != NULL){
         return visit(ctx->difference()).as<Table>();
      }else if(ctx->product() != NULL){
         return visit(ctx->product()).as<Table>();
      }else if(ctx->natural_join() != NULL){
         return visit(ctx->natural_join()).as<Table>();
      }else{
         return visit(ctx->atomic_expr()).as<Table>();  //if it doesn't match a query action assume its an atomic expr
      }
  }

  virtual antlrcpp::Any visitAtomicRelationName(dmlParser::AtomicRelationNameContext *ctx) override {
      return *(Engine.find_table_by_name(ctx->relation_name()->getText()));    //find the table in the list of open tables
  }

  virtual antlrcpp::Any visitAtomicParens(dmlParser::AtomicParensContext *ctx) override {
      return visit(ctx->expr()).as<Table>();      //Parenthesis means there's an expression 
  }

  virtual antlrcpp::Any visitSelection(dmlParser::SelectionContext *ctx) override {
      Table evaluand = visit(ctx->atomic_expr()).as<Table>();          //find the two tables and run selection on them
      Table condition = visit(ctx->condition()).as<Table>();
      return Engine.selection(&condition, &evaluand);
  }

  virtual antlrcpp::Any visitCondition(dmlParser::ConditionContext *ctx) override {
     Table result = visit(ctx->conjunction()[0]).as<Table>(); //start with the first table output by the conjunction
     for(int i =1 ; i < ctx->conjunction().size(); ++i){ //for every other conjunction in the conjuction...
       Table compare = visit(ctx->conjunction()[i]).as<Table>();//evaluate the group of ands(&&) to achieve output
       result = Engine.set_union(&result, &compare); //selection is equivalent to and
     }
     return result;
  }

  virtual antlrcpp::Any visitConjunction(dmlParser::ConjunctionContext *ctx) override {
     Table result = visit(ctx->comparison()[0]).as<Table>();   //start with the first table output by the comparison
     for(int i =1 ; i < ctx->comparison().size(); ++i){    //for every other comparison in the conjuction...
       Table compare = visit(ctx->comparison()[i]).as<Table>(); //evaluate the group of ands(&&) to achieve output
       result = Engine.selection(&result, &compare); //selection is equivalent to and
     }
     return result;
  }
  
  //operand op operand
  virtual antlrcpp::Any visitComparisonOperation(dmlParser::ComparisonOperationContext *ctx) override {
     //get the parent context at highest level necessary to find what table eval must be run on
     //loop up AST till context with table needed is found
    Table evaluand; //the table that needs to evaluated on
    bool caughtFlag = true;
    ParserRuleContext* ancestor = static_cast<ParserRuleContext*>(ctx->parent);//our current parent in the tree
   
    while(caughtFlag){
       //dynamic cast to the three possible rules that could give us the needed class        
       if(dynamic_cast<dmlParser::SelectionContext*>(ancestor) != NULL){//if its not null we know it is a selection context
         caughtFlag = false; //we need to get out of the loop
         dmlParser::SelectionContext* selector = dynamic_cast<dmlParser::SelectionContext*>(ancestor);
         evaluand = visit(selector->atomic_expr()).as<Table>();
       }else if(dynamic_cast<dmlParser::Update_cmdContext*>(ancestor) != NULL){//see above
         caughtFlag = false; //we need to get out of the loop
         dmlParser::Update_cmdContext* selector = dynamic_cast<dmlParser::Update_cmdContext*>(ancestor);
         evaluand = *(Engine.find_table_by_name(selector->relation_name()->getText()));
       }else if(dynamic_cast<dmlParser::Delete_cmdContext*>(ancestor) != NULL){//see above 
         caughtFlag = false; //we need to get out of the loop
         dmlParser::Delete_cmdContext* selector = dynamic_cast<dmlParser::Delete_cmdContext*>(ancestor);
         evaluand = *(Engine.find_table_by_name(selector->relation_name()->getText()));
       }
       ancestor =  static_cast<ParserRuleContext*>(ancestor->parent);         //if none are appropriate context go onestep higher
    }

     Table result;//return 
     //check to see whether operand are of two similar types or two different types
    if(ctx->operand()[0]->literal() != NULL && ctx->operand()[1]->literal() != NULL){ //literal and literal
      if(ctx->operand()[0]->literal()->getText() == ctx->operand()[1]->literal()->getText()){//if they are the same or true
        result = evaluand; //return a full list
      }//if not do nothing, result will be empty
    }
    else if(ctx->operand()[0]->attribute_name() != NULL && ctx->operand()[1]->attribute_name() != NULL){  //attribute_name and attribute_name
      if(ctx->operand()[0]->attribute_name()->getText() == ctx->operand()[1]->attribute_name()->getText()){ //if they are the same or true
        result = evaluand;   //return a full list                                           
      }//if not do nothing, result will be empty
    }
    else if(ctx->operand()[0]->literal() != NULL && ctx->operand()[1]->attribute_name() != NULL){//attribute_name and literal
      //run eval on that table and return result
      result = Engine.eval(evaluand,
                ctx->operand()[1]->attribute_name()->getText()
                ,ctx->operand()[0]->literal()->getText()
                ,ctx->op()->getText());
    }
    else if(ctx->operand()[0]->attribute_name() != NULL && ctx->operand()[1]->literal() != NULL){//literal and attribute_name
      result = Engine.eval(evaluand,                                            //run eval on that table and return result 
                          ctx->operand()[0]->attribute_name()->getText()
                          ,ctx->operand()[1]->literal()->getText()
                          ,ctx->op()->getText());
    }  
     return result; 
  }
  
  virtual antlrcpp::Any visitComparisonParens(dmlParser::ComparisonParensContext *ctx) override {
      Table result = visit(ctx->condition());
      return result;
  }

  virtual antlrcpp::Any visitProjection(dmlParser::ProjectionContext *ctx) override {
    Table evaluand = visit(ctx->atomic_expr()).as<Table>();           //find the table and attribute names, run project on them
    return Engine.projection(visit(ctx->attribute_list()), &evaluand);
  }

  virtual antlrcpp::Any visitAttribute_list(dmlParser::Attribute_listContext *ctx) override {
    std::vector<std::string> attributes;                           //build a vector of strings out of each atrrubute name the context contains
    
    for(int i = 0; i < ctx->attribute_name().size(); ++i){
      attributes.push_back(ctx->attribute_name()[i]->getText());
    }
      
    return attributes;  
  }

  virtual antlrcpp::Any visitRenaming(dmlParser::RenamingContext *ctx) override {
    Table evaluand = visit(ctx->atomic_expr()).as<Table>();        //find the table and attribute names, run renaming on them
    return Engine.renaming(visit(ctx->attribute_list()), &evaluand);
  }

  virtual antlrcpp::Any visitUnion1(dmlParser::Union1Context *ctx) override {
    Table t1 = visit(ctx->atomic_expr()[0]).as<Table>();           //find the two tables and run union on them
    Table t2 = visit(ctx->atomic_expr()[1]).as<Table>();
    return Engine.set_union(&t1, &t2);
  }

  virtual antlrcpp::Any visitDifference(dmlParser::DifferenceContext *ctx) override {
    Table t1 = visit(ctx->atomic_expr()[0]).as<Table>();          //find the two tables and run difference on them
    Table t2 = visit(ctx->atomic_expr()[1]).as<Table>();
    return Engine.set_difference(&t1, &t2);
  }

  virtual antlrcpp::Any visitProduct(dmlParser::ProductContext *ctx) override {
    Table t1 = visit(ctx->atomic_expr()[0]).as<Table>();         //find the two tables and run product on them
    Table t2 = visit(ctx->atomic_expr()[1]).as<Table>();
    return Engine.cross_product(&t1, &t2);
  }

  virtual antlrcpp::Any visitNatural_join(dmlParser::Natural_joinContext *ctx) override {
    Table t1 = visit(ctx->atomic_expr()[0]).as<Table>();         //find the two tables and run natural join on them
    Table t2 = visit(ctx->atomic_expr()[1]).as<Table>();
    return Engine.natural_join(&t1, &t2);
  }

  virtual antlrcpp::Any visitOpen_cmd(dmlParser::Open_cmdContext *ctx) override {
      Engine.open_cmd(ctx->relation_name()->getText());         //find the table with the corret name and open it
  }

  virtual antlrcpp::Any visitClose_cmd(dmlParser::Close_cmdContext *ctx) override {
      Table* closer = Engine.find_table_by_name(ctx->relation_name()->getText());         //find the table with the correct name
      Engine.close_cmd(*closer);                                                          //close it
  }

  virtual antlrcpp::Any visitWrite_cmd(dmlParser::Write_cmdContext *ctx) override {
      Table* writer = Engine.find_table_by_name(ctx->relation_name()->getText());         //find the table with the correct name
      Engine.write_cmd(*writer);                                                          //write it
  }

  virtual antlrcpp::Any visitExit_cmd(dmlParser::Exit_cmdContext *ctx) override {
      Engine.exit_cmd();
  }

  virtual antlrcpp::Any visitShow_cmd(dmlParser::Show_cmdContext *ctx) override {
    Engine.show_cmd(ctx->atomic_expr()->getText());                                       //find the table and show it
    return nullptr;
  }

  virtual antlrcpp::Any visitCreate_cmd(dmlParser::Create_cmdContext *ctx) override {
		Table t;
		t.name = ctx->relation_name()->getText();
		
    dmlParser::Typed_attribute_listContext *typed_attribute_listContext = ctx->typed_attribute_list();

    //Adding attribute names & data types.
    std::vector<std::vector<std::string>> types_and_attributes = visit(ctx->typed_attribute_list()).as<std::vector<std::vector<std::string>>>();
    t.attributes = types_and_attributes[0];
    t.types = types_and_attributes[1];
    
    //Adding keys
    t.keys = visit(ctx->attribute_list()).as<std::vector<std::string>>();
    
    Engine.create_cmd(t.name, t.attributes, t.types, t.keys);
    return t;
  }
  
  virtual antlrcpp::Any visitUpdate_cmd(dmlParser::Update_cmdContext *ctx) override {
   
    Table *t = Engine.find_table_by_name(ctx->relation_name()->getText());      //find the table
    std::vector<std::string> att_name;                                          //set attribute_name
    for(int i = 0; i < ctx->attribute_name().size(); ++i) {
      att_name.push_back(ctx->attribute_name()[i]->getText());                  //set the attribute names
    }
    std::vector<std::string> lit;
    for(int i = 0; i < ctx->literal().size(); ++i) {
      lit.push_back(ctx->literal()[i]->getText());                              //set the literals
    }
    Table r = (visit(ctx->condition())).as<Table>();                            //evaluate the condition
    Engine.update_cmd(t, att_name, lit, r);                                     //update table using three created pieces from above

    return nullptr;
  }

  virtual antlrcpp::Any visitInsert_cmd(dmlParser::Insert_cmdContext *ctx) override {
    Table *t = Engine.find_table_by_name(ctx->relation_name()->getText());      //find the table
    if(ctx->expr() != NULL){                                                    //if they're is an expression in the statement
      Table result = visit(ctx->expr()).as<Table>();                            //evaluate expression as table
      Engine.insert_cmd(t, &result);                                            //inser it
    }else{
      std::vector<std::string> lit;                                             //...otherwise its a literal list
      for(int i = 0; i < ctx->literal().size(); ++i) 
        lit.push_back(ctx->literal()[i]->getText());                            //build list
      Engine.insert_cmd(t, lit);                                                //insert literals into table
    }
    return nullptr;
  }

  virtual antlrcpp::Any visitDelete_cmd(dmlParser::Delete_cmdContext *ctx) override {
    Table *t = Engine.find_table_by_name(ctx->relation_name()->getText());      //find table
    Table r = visit(ctx->condition()).as<Table>();                              //evaluate expression as table
    Engine.delete_cmd(t, &r);                                                   //delete expressions from table
  }

  virtual antlrcpp::Any visitTyped_attribute_list(dmlParser::Typed_attribute_listContext *ctx) override {
   std::vector<std::vector<std::string>> types_and_attributes;                  //vectors of vectors
   std::vector<std::string> types;
   std::vector<std::string> attributes;
   
   for(int i = 0; i < ctx->attribute_name().size(); ++i) {
      attributes.push_back(ctx->attribute_name()[i]->getText());                //buld attribute names and types simultaneously
      types.push_back(ctx->type()[i]->getText());
    }
    
    types_and_attributes.push_back(attributes);                                 //add each to vetctor of vectors
    types_and_attributes.push_back(types);
    
    return types_and_attributes;
  }

};

int main(int argc, char * argv[]) {

  parseTreeVisitor ptv;
  std::string statement = "";          
  int opt = 0;
  if((opt = getopt(argc, argv, "f:F:")) != -1){                                 //Read commands from file. Specified by -f filname.txt or -F filname.txt
    std::string nameFileIn;
    if(opt == 'f' || opt == 'F') {
		  nameFileIn = optarg;
    } else return -1;
		ifstream fileIn(nameFileIn);
		if (!fileIn.is_open()) {                                 
		  cerr << "Failed to open file: " << nameFileIn << endl;
		  return -1;
		}
		else {
		  while(getline(fileIn, statement)) {
		    if(statement == "")
		      continue;
		    std::cout << statement << std::endl;
				ANTLRInputStream input(statement);    
        dmlLexer lex(&input);            
        CommonTokenStream tokens(&lex);  
        dmlParser parser(&tokens);      
        tree::ParseTree *tree = parser.program();  
        ptv.tree::AbstractParseTreeVisitor::visit(tree);
        statement = "";
			}
			fileIn.close();
		}
	}
	else {
	  std::cout << "Please enter statement to be parsed.\n";
    while(getline(std::cin, statement)) {
        if(statement == "")
		      continue;
        ANTLRInputStream input(statement);                                      // create a CharStream that reads from standard input
        dmlLexer lex(&input);                                                   // create a lexer that feeds off of input CharStream
        CommonTokenStream tokens(&lex);                                         // create a buffer of tokens pulled from the lexer
        dmlParser parser(&tokens);                                              // create a parser that feeds off the tokens buffer
        tree::ParseTree *tree = parser.program();                               // begin parsing at rule 'statement' (my root rule)
        ptv.tree::AbstractParseTreeVisitor::visit(tree);
        statement = "";
    }
	}
}