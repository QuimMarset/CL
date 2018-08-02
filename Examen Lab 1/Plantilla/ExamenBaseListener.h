
// Generated from Examen.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "ExamenListener.h"


/**
 * This class provides an empty implementation of ExamenListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  ExamenBaseListener : public ExamenListener {
public:

  virtual void enterUnaryArithmeticExpr(ExamenParser::UnaryArithmeticExprContext * /*ctx*/) override { }
  virtual void exitUnaryArithmeticExpr(ExamenParser::UnaryArithmeticExprContext * /*ctx*/) override { }

  virtual void enterFloatExpr(ExamenParser::FloatExprContext * /*ctx*/) override { }
  virtual void exitFloatExpr(ExamenParser::FloatExprContext * /*ctx*/) override { }

  virtual void enterCharExpr(ExamenParser::CharExprContext * /*ctx*/) override { }
  virtual void exitCharExpr(ExamenParser::CharExprContext * /*ctx*/) override { }

  virtual void enterIntExpr(ExamenParser::IntExprContext * /*ctx*/) override { }
  virtual void exitIntExpr(ExamenParser::IntExprContext * /*ctx*/) override { }

  virtual void enterBooleanExpr(ExamenParser::BooleanExprContext * /*ctx*/) override { }
  virtual void exitBooleanExpr(ExamenParser::BooleanExprContext * /*ctx*/) override { }

  virtual void enterArithmeticExpr(ExamenParser::ArithmeticExprContext * /*ctx*/) override { }
  virtual void exitArithmeticExpr(ExamenParser::ArithmeticExprContext * /*ctx*/) override { }

  virtual void enterSubExpr(ExamenParser::SubExprContext * /*ctx*/) override { }
  virtual void exitSubExpr(ExamenParser::SubExprContext * /*ctx*/) override { }

  virtual void enterRelationalExpr(ExamenParser::RelationalExprContext * /*ctx*/) override { }
  virtual void exitRelationalExpr(ExamenParser::RelationalExprContext * /*ctx*/) override { }

  virtual void enterIdExpr(ExamenParser::IdExprContext * /*ctx*/) override { }
  virtual void exitIdExpr(ExamenParser::IdExprContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

