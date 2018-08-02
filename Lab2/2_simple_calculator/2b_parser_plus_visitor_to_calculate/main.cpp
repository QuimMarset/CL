
#include "antlr4-runtime.h"
#include "CalcLexer.h"
#include "CalcParser.h"
#include "CalcBaseVisitor.h"
#include "tree/ParseTreeWalker.h"

#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <cstdio>    // fopen

// using namespace std;
// using namespace antlr4;
// using namespace antlrcpp;


//////////////////////////////////////////////////////////////////////
// Sample "calculator" (implemented with a visitor)
class EvalVisitor : public CalcBaseVisitor {
private:
  // "memory" for the calculator; variable/value pairs go here
  std::map<std::string, int> memory;

public:
  /** ID '=' expr NEWLINE */
  antlrcpp::Any visitAssign(CalcParser::AssignContext *ctx) {
    std::string id = ctx->ID()->getText();  // id is left-hand side of '='
    int value = visit(ctx->expr());         // compute value of expression on right
    memory[id] = value;                     // store it in the memory
    return 0;                               // return dummy value
  }

  /** expr NEWLINE */
  antlrcpp::Any visitPrintExpr(CalcParser::PrintExprContext *ctx) {
    int value = visit(ctx->expr());         // evaluate the expr child
    std::cout << value << std::endl;        // print the result
    return 0;                               // return dummy value
  }

  /** expr op=MUL expr */
  antlrcpp::Any visitProd(CalcParser::ProdContext *ctx) {
    int left = visit(ctx->expr(0));         // get value of left subexpression
    int right = visit(ctx->expr(1));        // get value of right subexpression
    if (ctx->op->getType() == CalcParser::MUL) return left*right;
    return left*right; // CURRENTLY is always MUL!!
  }
  
  /** expr op=ADD expr */
  antlrcpp::Any visitPlus(CalcParser::PlusContext *ctx) {
    int left = visit(ctx->expr(0));         // get value of left subexpression
    int right = visit(ctx->expr(1));        // get value of right subexpression
    if (ctx->op->getType() == CalcParser::ADD) return left+right;
    return left+right; // CURRENTLY is always ADD!!
  }
  
  /** INT */
  antlrcpp::Any visitInt(CalcParser::IntContext *ctx) {
    return std::stoi(ctx->getText());       // or: ctx->INT()->getText()
  }
  
  /** ID */
  antlrcpp::Any visitId(CalcParser::IdContext *ctx) {
    std::string id = ctx->getText();        // or: ctx->ID()->getText()
    if (memory.find(id) != memory.end()) return memory[id];
    return 0;
  }
  
};
// Sample "calculator" (implemented with a visitor)
//////////////////////////////////////////////////////////////////////


int main(int argc, const char* argv[]) {
  // check the correct use of the program
  if (argc != 2) {
    std::cout << "Usage: ./main <file>" << std::endl;
    return EXIT_FAILURE;
  }
  if (not std::fopen(argv[1], "r")) {
    std::cout << "No such file: " << argv[1] << std::endl;
    return EXIT_FAILURE;
  }

  // open input file and create a character stream
  std::ifstream stream;
  stream.open(argv[1]);
  antlr4::ANTLRInputStream input(stream);

  // create a lexer that consumes the character stream and produce a token stream
  CalcLexer lexer(&input);
  antlr4::CommonTokenStream tokens(&lexer);
  
  // create a parser that consumes the token stream, and parses it.
  CalcParser parser(&tokens);

  // call the parser and get the parse tree
  antlr4::tree::ParseTree *tree = parser.prog();

  // print the parse tree (for debugging purposes)
  std::cout << tree->toStringTree(&parser) << std::endl;

  ////////////////////////////////////////////////////////////////////

  // Create a visitor that will evaluate the expression
  EvalVisitor eval;

  // Traverse the tree using this EvalVisitor
  eval.visit(tree);

  return EXIT_SUCCESS;
}
