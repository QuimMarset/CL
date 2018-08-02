
// Generated from Examen.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "ExamenParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by ExamenParser.
 */
class  ExamenListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterUnaryArithmeticExpr(ExamenParser::UnaryArithmeticExprContext *ctx) = 0;
  virtual void exitUnaryArithmeticExpr(ExamenParser::UnaryArithmeticExprContext *ctx) = 0;

  virtual void enterFloatExpr(ExamenParser::FloatExprContext *ctx) = 0;
  virtual void exitFloatExpr(ExamenParser::FloatExprContext *ctx) = 0;

  virtual void enterCharExpr(ExamenParser::CharExprContext *ctx) = 0;
  virtual void exitCharExpr(ExamenParser::CharExprContext *ctx) = 0;

  virtual void enterIntExpr(ExamenParser::IntExprContext *ctx) = 0;
  virtual void exitIntExpr(ExamenParser::IntExprContext *ctx) = 0;

  virtual void enterBooleanExpr(ExamenParser::BooleanExprContext *ctx) = 0;
  virtual void exitBooleanExpr(ExamenParser::BooleanExprContext *ctx) = 0;

  virtual void enterArithmeticExpr(ExamenParser::ArithmeticExprContext *ctx) = 0;
  virtual void exitArithmeticExpr(ExamenParser::ArithmeticExprContext *ctx) = 0;

  virtual void enterSubExpr(ExamenParser::SubExprContext *ctx) = 0;
  virtual void exitSubExpr(ExamenParser::SubExprContext *ctx) = 0;

  virtual void enterRelationalExpr(ExamenParser::RelationalExprContext *ctx) = 0;
  virtual void exitRelationalExpr(ExamenParser::RelationalExprContext *ctx) = 0;

  virtual void enterIdExpr(ExamenParser::IdExprContext *ctx) = 0;
  virtual void exitIdExpr(ExamenParser::IdExprContext *ctx) = 0;


};

