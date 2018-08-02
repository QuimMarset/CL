
#include "antlr4-runtime.h"
#include "ExprLexer.h"
#include "ExprParser.h"
#include "ExprBaseListener.h"
#include "tree/ParseTreeWalker.h"
#include "tree/ParseTreeProperty.h"

#include <iostream>
#include <fstream>
#include <stack>
#include <cstdio>    // fopen

// using namespace std;
// using namespace antlr4;


//////////////////////////////////////////////////////////////////////
// Sample "calculator" (special case of collector)
class Evaluator : public ExprBaseListener {
public:

  std::stack<int> stack;
  std::stack<bool> stackBool;
  bool isBoolean = false;

  void exitProdOrDiv(ExprParser::ProdOrDivContext *ctx) {
    int right = stack.top();
    stack.pop();
    int left = stack.top();
    stack.pop();
    if (ctx->op->getType() == ExprParser::MULT)
        stack.push(left*right);
    else
        stack.push(left/right);
  }

  void exitPlusOrSub(ExprParser::PlusOrSubContext *ctx) {
    int right = stack.top();
    stack.pop();
    int left = stack.top();
    stack.pop();
    if (ctx->op->getType() == ExprParser::ADD) {
        stack.push(left+right);      
    }
    else {
        stack.push(left-right);
      }
  }

  void exitNegate(ExprParser::NegateContext *ctx) {
    int left = stack.top();
    stack.pop();
    stack.push(-left);
  }
    
  void exitAnd(ExprParser::AndContext *ctx) {
    isBoolean = true;
    bool right = stackBool.top();
    stackBool.pop();
    bool left = stackBool.top();
    stackBool.pop();
    stackBool.push(left and right);
  }
  
  void exitOr(ExprParser::OrContext *ctx) {
    isBoolean = true;
    bool right = stackBool.top();
    stackBool.pop();
    bool left = stackBool.top();
    stackBool.pop();
    stackBool.push(left or right);
  }
  
  void exitNot(ExprParser::NotContext *ctx) {
    isBoolean = true;
    bool left = stackBool.top();
    stackBool.pop();
    stackBool.push(not left);
  }
  
  void exitTermeBool(ExprParser::TermeBoolContext *ctx) {
    isBoolean = true;
    int right = stack.top();
    stack.pop();
    int left = stack.top();
    stack.pop();
    if (ctx->op->getType() == ExprParser::EQ) {
        stackBool.push(left == right);
    }
    else if (ctx->op->getType() == ExprParser::NEQ) {
        stackBool.push(left != right);
    }
    else if (ctx->op->getType() == ExprParser::GT) {
        stackBool.push(left > right);
    }
    else if (ctx->op->getType() == ExprParser::LT) {
        stackBool.push(left < right);
    }
    else if (ctx->op->getType() == ExprParser::GET) {
        stackBool.push(left >= right);
    }
    else if (ctx->op->getType() == ExprParser::LET) {
        stackBool.push(left <= right);
    }
  }

  void exitValue(ExprParser::ValueContext *ctx) {
    int val = std::stoi(ctx->getText()); 
    stack.push(val);
  }

};
// Sample "calculator" (special case of collector)
//////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////
// Sample "calculator" using tree properties not stack
class EvaluatorWithProps : public ExprBaseListener {
public:

  antlr4::tree::ParseTreeProperty<int> values;
  antlr4::tree::ParseTreeProperty<bool> valuesBool;
  bool isBoolean = false;

  void exitS(ExprParser::SContext *ctx) {
    if (ctx->exprBool()) {
        std::cout << ctx->e() << std::endl;
        valuesBool.put(ctx, valuesBool.get(ctx->exprBool()));
    }
    else {
        std::cout << ctx->e() << std::endl;
        values.put(ctx, values.get(ctx->e()));
    }
  }

  void exitProdOrDiv(ExprParser::ProdOrDivContext *ctx) {
    int left = values.get(ctx->e(0));
    int right = values.get(ctx->e(1));
    if (ctx->op->getType() == ExprParser::MULT)
        values.put(ctx, left*right);
    else
        values.put(ctx, left/right);
  }

  void exitPlusOrSub(ExprParser::PlusOrSubContext *ctx) {
    int left = values.get(ctx->e(0));
    int right = values.get(ctx->e(1));
    if (ctx->op->getType() == ExprParser::ADD)
        values.put(ctx, left+right);
    else
        values.put(ctx, left-right);
  }

  void exitSubExpr(ExprParser::SubExprContext *ctx) {
    int val = values.get(ctx->e());
    values.put(ctx, val);
  }

  void exitNegate(ExprParser::NegateContext *ctx) {
    int val = values.get(ctx->e());
    values.put(ctx, -val);
  }
    
  void exitAnd(ExprParser::AndContext *ctx) {
    isBoolean = true;
    bool val1 = valuesBool.get(ctx->exprBool(0));
    bool val2 = valuesBool.get(ctx->exprBool(1));
    valuesBool.put(ctx, val1 and val2);
  }
  
  void exitOr(ExprParser::OrContext *ctx) {
    isBoolean = true;
    bool val1 = valuesBool.get(ctx->exprBool(0));
    bool val2 = valuesBool.get(ctx->exprBool(1));
    valuesBool.put(ctx, val1 or val2);
  }
  
  void exitNot(ExprParser::NotContext *ctx) {
    isBoolean = true;
    bool val1 = valuesBool.get(ctx->exprBool());
    valuesBool.put(ctx, not val1);
  }
  
  void exitTermeBool(ExprParser::TermeBoolContext *ctx) {
    isBoolean = true;
    int val1 = values.get(ctx->e(0));
    int val2 = values.get(ctx->e(1));
    if (ctx->op->getType() == ExprParser::EQ) {
        valuesBool.put(ctx, val1 == val2);
    }
    else if (ctx->op->getType() == ExprParser::NEQ) {
        valuesBool.put(ctx, val1 != val2);
    }
    else if (ctx->op->getType() == ExprParser::GT) {
        valuesBool.put(ctx, val1 > val2);
    }
    else if (ctx->op->getType() == ExprParser::LT) {
        valuesBool.put(ctx, val1 < val2);
    }
    else if (ctx->op->getType() == ExprParser::GET) {
        valuesBool.put(ctx, val1 >= val2);
    }
    else if (ctx->op->getType() == ExprParser::LET) {
        valuesBool.put(ctx, val1 <= val2);
    }
  }

  void exitValue(ExprParser::ValueContext *ctx) {
    int val = std::stoi(ctx->getText());
    values.put(ctx, val); // an INT
  }

};
// Sample "calculator" using tree properties not stack
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
  ExprLexer lexer(&input);
  antlr4::CommonTokenStream tokens(&lexer);

  // create a parser that consumes the token stream, and parses it.
  ExprParser parser(&tokens);

  // call the parser and get the parse tree
  antlr4::tree::ParseTree *tree = parser.s();

  // print the parse tree (for debugging purposes)
  std::cout << tree->toStringTree(&parser) << std::endl;

  ////////////////////////////////////////////////////////////////////
  
  // create a walker that will traverse the tree
  antlr4::tree::ParseTreeWalker walker;
  
  // Create a first listener (with stack) that will evaluate the expression
   Evaluator eval;

  // Traverse the tree using this Evaluator  
  walker.walk(&eval, tree);

  // Dump the result (on top of the stack)
  if (eval.isBoolean) {
    std::cout << "result (Bool) = " << eval.stackBool.top() << std::endl;
  }
  else {
    std::cout << "result = " << eval.stack.top() << std::endl;
  }
  
  // Create a second listener (with Properties) that will evaluate the expression
  EvaluatorWithProps eval2;

  // Traverse the tree using this EvaluatorWithProps
  walker.walk(&eval2, tree);

  // Dump the result (accessing the root node property)
  if (eval2.isBoolean) {

    std::cout << "result with tree props (Bool) = " << eval2.valuesBool.get(tree) << std::endl;
  }
  else {
    std::cout << "result with tree props = " << eval2.values.get(tree) << std::endl;
  }
  

  return EXIT_SUCCESS;
}
