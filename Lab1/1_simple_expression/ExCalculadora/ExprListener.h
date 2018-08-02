
// Generated from Expr.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "ExprParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by ExprParser.
 */
class  ExprListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterS(ExprParser::SContext *ctx) = 0;
  virtual void exitS(ExprParser::SContext *ctx) = 0;

  virtual void enterNegate(ExprParser::NegateContext *ctx) = 0;
  virtual void exitNegate(ExprParser::NegateContext *ctx) = 0;

  virtual void enterPlusOrSub(ExprParser::PlusOrSubContext *ctx) = 0;
  virtual void exitPlusOrSub(ExprParser::PlusOrSubContext *ctx) = 0;

  virtual void enterProdOrDiv(ExprParser::ProdOrDivContext *ctx) = 0;
  virtual void exitProdOrDiv(ExprParser::ProdOrDivContext *ctx) = 0;

  virtual void enterSubExpr(ExprParser::SubExprContext *ctx) = 0;
  virtual void exitSubExpr(ExprParser::SubExprContext *ctx) = 0;

  virtual void enterValue(ExprParser::ValueContext *ctx) = 0;
  virtual void exitValue(ExprParser::ValueContext *ctx) = 0;

  virtual void enterNot(ExprParser::NotContext *ctx) = 0;
  virtual void exitNot(ExprParser::NotContext *ctx) = 0;

  virtual void enterOr(ExprParser::OrContext *ctx) = 0;
  virtual void exitOr(ExprParser::OrContext *ctx) = 0;

  virtual void enterAnd(ExprParser::AndContext *ctx) = 0;
  virtual void exitAnd(ExprParser::AndContext *ctx) = 0;

  virtual void enterTermeBool(ExprParser::TermeBoolContext *ctx) = 0;
  virtual void exitTermeBool(ExprParser::TermeBoolContext *ctx) = 0;


};

