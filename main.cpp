#include <string>
#include <sstream>
#include <iostream>
#include <vector>
#include "db_engine.h"

using namespace std;

int main() {
	
	db_engine Engine;
	
	// Engine.show_cmd(t4);
	/************************************************************************/
	//
	//						COMMAND Testing
	//
	/************************************************************************/
	cout << "######################TESTING COMMANDS########################\n";
	//----------------------OPEN------------------------------------------------
	Engine.open_cmd("test");
	cout << "Now printing out opened table\n";
	
	Engine.current->print();
	//Engine.show_cmd()
		
	//----------------------SHOW------------------------------------------------
	cout << "\nNow testing show command: \n";
	//Engine.current->print();
	Engine.show_cmd(Engine.find_table_by_name("test"));
	
	
	//----------------------CLOSE-----------------------------------------------
	cout << "\nNow closing table,\nBefore closing #open tables : " << Engine.open_tables.size() << endl;
	Engine.close_name(Engine.current->name);
	cout << "#open tables after closing: " << Engine.open_tables.size() << endl;



	//----------------------CREATE----------------------------------------------
	cout << "\nCreating a new table\n";
	Engine.create_cmd("name1",{"col1","col2","col3","col4"},{"INTEGER","VARCHAR(10)","VARCHAR(20)","INTEGER"},{"col1"});
	Engine.current->print();
	//Engine.show_cmd(find_table_by_name("name"))
	
	//----------------------INSERT----------------------------------------------
	cout << "\nInserting values into created table\n";
	Engine.insert_cmd(Engine.current, {"10","t","tt","100"});
	Engine.insert_cmd(Engine.current, {"2","b","bb","200"});
	Engine.insert_cmd(Engine.current, {"3","c","ee","300"});
	Engine.insert_cmd(Engine.current, {"4","d","ee","400"});
	Engine.insert_cmd(Engine.current, {"5","e","ee","500"});
	Engine.insert_cmd(Engine.current, {"6","f","ff","600"});
	Engine.current->print();
	
	//----------------------WRITE-----------------------------------------------
	cout << "\nNow writing table to file.\n";
    Engine.current->save();							//<-- saves by table
    //Engine.write_cmd(find_table_by_name("name"))		//<-- actual command: saves by passed table
    
	//----------------------UPDATE----------------------------------------------	
	cout << "\n********** UPDATING TABLE *************" << endl;
	Table up;
	up.data.push_back({"4","d","ee","400"});
	up.data.push_back({"5","e","ee","500"});
	//insert (col2 = bbbbbb) into test, if condition was satisfied. 
	//up is representing the table of data that satisfies the condition
	Engine.update_cmd(Engine.current,{"col2","col3"}, {"ddddd","e"}, up);
	cout << "after:\n";
	Engine.show_cmd(Engine.current);

	//----------------------DELETE----------------------------------------------
	//One is the data that will be deleted from our earlier created table.
	cout << "\nDeleting info from table\n";
	Table one("name",{"col1","col2","col3","col4"},{"INTEGER","VARCHAR(10)","VARCHAR(20)","INTEGER"},{"col1"});
	one.data.push_back({"1","a","aa","100"});
	one.data.push_back({"2","b","bb","200"});
	one.data.push_back({"3","c","ee","300"});
	one.data.push_back({"4","d","ee","400"});
	
	Engine.delete_cmd(Engine.current, &one);
	cout << "After Deletion: \n";
	Engine.current->print();
	
	//----------------------EXIT------------------------------------------------
	// 

	/************************************************************************/
	//
	//						Querie Testing
	//
	/************************************************************************/
	cout << "\n#########################TESTING QUERIES######################\n\n";
	Table test;
	Engine.open_cmd("name4");
	Table *t4 = Engine.current;
	Table *t1 = Engine.find_table_by_name("name1");
	cout << "\nTABLES USED\n";
	t4->print();
	t1->print();
	cout << "\n***********SELECTION**********" << endl;
	test = Engine.selection(t1, t4);
	Engine.show_cmd(&test);
	cout << endl << endl;
 	cout << "***********PROJECTION**********" << endl;
 	test = Engine.projection({"col1","col4"}, t1);
	Engine.show_cmd(&test);
 	cout << endl << endl;
	cout << "***********RENAMING**********" << endl;
	test = Engine.renaming({"newcol1","newcol2","newcol3","newcol4"}, t4);
	Engine.show_cmd(&test);
	cout << endl << endl;
	cout << "***********SET UNION**********" << endl;
	test = Engine.set_union(t1, t4);
	Engine.show_cmd(&test);
	cout << endl << endl;
	cout << "***********SET DIFFERENCE**********" << endl;
	test = Engine.set_difference(t1, t4);
	Engine.show_cmd(&test);
	cout << endl << endl;
	cout << "***********CROSS PRODUCT**********" << endl;
	test = Engine.cross_product(t1, t4);
	Engine.show_cmd(&test);
	cout << endl << endl;
	cout << "***********NATURAL JOIN**********" << endl;
	Table n1 = Engine.projection({"col1","col2"}, t1);
	Table n2 = Engine.projection({"col2","col4"}, t1);
	cout << "---NJ: TABLE 1---" << endl;
	Engine.show_cmd(&n1);
	cout << "---NJ: TABLE 2---" << endl;
	Engine.show_cmd(&n2);
	cout << "===Natrual Join===\n";
	test = Engine.natural_join(&n1, &n2);
	Engine.show_cmd(&test);
	cout << endl << endl;
	
	
	/************************************************************************/
	//
	//						Condition Testing
	//
	/************************************************************************/
	/*eval is used by the tree for solving CONDITIONS. eval solves the 
	2 operands with the given operator, and returns a table with the data that 
	satisfies the condition. there are 4 possible combinations to evaluate:
	(attribute-attribute) | (attribute-literal) | (lit.-attribute) | (lit.-lit.)
	the tree will change the function call to satisfy every combination at once*/
	
	Engine.insert_cmd(t1, {"2","b","ee","200"});
	Engine.insert_cmd(t1, {"2","b","dd","200"});
	Engine.insert_cmd(t1, {"2","b","ee","100"});
	cout << "\n###################TESTING CONDITIONS###################\n\n";
	cout << "***********EVAL INT******************" << endl;
	cout << "col4, 200\n\n";
	cout << "!=\n";
	test = Engine.eval(*t1,"col4","200","!=");
	Engine.show_cmd(&test);
	cout << endl << endl;
	
	cout << "==\n";
	test = Engine.eval(*t1,"col4","200","==");
	Engine.show_cmd(&test);
	cout << endl << endl;
	
	cout << "<\n";
	test = Engine.eval(*t1,"col4","200","<");
	Engine.show_cmd(&test);
	cout << endl << endl;
	
	cout << "***********EVAL VARCHAR******************" << endl;
	cout << "col3, ee\n\n";
	cout << "!=\n";
	test = Engine.eval(*t1,"col3","ee","!=");
	Engine.show_cmd(&test);
	cout << endl << endl;
	
	cout << "==\n";
	test = Engine.eval(*t1,"col3","ee","==");
	Engine.show_cmd(&test);
	cout << endl << endl;
	
	cout << "<\n";
	test = Engine.eval(*t1,"col3","ee","<");
	Engine.show_cmd(&test);
	cout << endl << endl;
}