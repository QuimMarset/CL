
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

  virtual void enterProgram(ExamenParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(ExamenParser::ProgramContext * /*ctx*/) override { }

  virtual void enterAssignInst(ExamenParser::AssignInstContext * /*ctx*/) override { }
  virtual void exitAssignInst(ExamenParser::AssignInstContext * /*ctx*/) override { }

  virtual void enterPushInst(ExamenParser::PushInstContext * /*ctx*/) override { }
  virtual void exitPushInst(ExamenParser::PushInstContext * /*ctx*/) override { }

  virtual void enterPopInst(ExamenParser::PopInstContext * /*ctx*/) override { }
  virtual void exitPopInst(ExamenParser::PopInstContext * /*ctx*/) override { }

  virtual void enterIdentExpr(ExamenParser::IdentExprContext * /*ctx*/) override { }
  virtual void exitIdentExpr(ExamenParser::IdentExprContext * /*ctx*/) override { }

  virtual void enterStringExpr(ExamenParser::StringExprContext * /*ctx*/) override { }
  virtual void exitStringExpr(ExamenParser::StringExprContext * /*ctx*/) override { }

  virtual void enterIntExpr(ExamenParser::IntExprContext * /*ctx*/) override { }
  virtual void exitIntExpr(ExamenParser::IntExprContext * /*ctx*/) override { }

  virtual void enterStackTopExpr(ExamenParser::StackTopExprContext * /*ctx*/) override { }
  virtual void exitStackTopExpr(ExamenParser::StackTopExprContext * /*ctx*/) override { }

  virtual void enterAddExpr(ExamenParser::AddExprContext * /*ctx*/) override { }
  virtual void exitAddExpr(ExamenParser::AddExprContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

