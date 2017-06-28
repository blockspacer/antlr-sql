#include <iostream>
#include <string>
#include <antlr4-runtime.h>
#include "dmlParser.h"
#include "dmlLexer.h"


using namespace antlrcpptest;
using namespace antlr4;
int main() {
  
  std::cout << "Please enter statement to be parsed.\n";
  std::string statement = "";
  
  // Example: INSERT INTO animals VALUES FROM ("Joe", "cat", 4);
  std::getline(std::cin, statement);
  
  ANTLRInputStream input(statement);
  dmlLexer lex(&input);

  CommonTokenStream tokens(&lex);

  tokens.fill();
  //for (auto token : tokens.getTokens()) {
  //  std::cout << token->toString() << std::endl;
  //}

  dmlParser parser(&tokens);
  tree::ParseTree* tree = parser.program();
  std::cout << "Generated tree:\n";
  std::cout << tree->toStringTree(&parser) << std::endl << std::endl;
  return 0;
}
