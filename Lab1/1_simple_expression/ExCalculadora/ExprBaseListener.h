
// Generated from Expr.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "ExprListener.h"


/**
 * This class provides an empty implementation of ExprListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  ExprBaseListener : public ExprListener {
public:

  virtual void enterS(ExprParser::SContext * /*ctx*/) override { }
  virtual void exitS(ExprParser::SContext * /*ctx*/) override { }

  virtual void enterNegate(ExprParser::NegateContext * /*ctx*/) override { }
  virtual void exitNegate(ExprParser::NegateContext * /*ctx*/) override { }

  virtual void enterPlusOrSub(ExprParser::PlusOrSubContext * /*ctx*/) override { }
  virtual void exitPlusOrSub(ExprParser::PlusOrSubContext * /*ctx*/) override { }

  virtual void enterProdOrDiv(ExprParser::ProdOrDivContext * /*ctx*/) override { }
  virtual void exitProdOrDiv(ExprParser::ProdOrDivContext * /*ctx*/) override { }

  virtual void enterSubExpr(ExprParser::SubExprContext * /*ctx*/) override { }
  virtual void exitSubExpr(ExprParser::SubExprContext * /*ctx*/) override { }

  virtual void enterValue(ExprParser::ValueContext * /*ctx*/) override { }
  virtual void exitValue(ExprParser::ValueContext * /*ctx*/) override { }

  virtual void enterNot(ExprParser::NotContext * /*ctx*/) override { }
  virtual void exitNot(ExprParser::NotContext * /*ctx*/) override { }

  virtual void enterOr(ExprParser::OrContext * /*ctx*/) override { }
  virtual void exitOr(ExprParser::OrContext * /*ctx*/) override { }

  virtual void enterAnd(ExprParser::AndContext * /*ctx*/) override { }
  virtual void exitAnd(ExprParser::AndContext * /*ctx*/) override { }

  virtual void enterTermeBool(ExprParser::TermeBoolContext * /*ctx*/) override { }
  virtual void exitTermeBool(ExprParser::TermeBoolContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

