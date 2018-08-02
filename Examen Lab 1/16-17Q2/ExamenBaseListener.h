
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

  virtual void enterDeclaration(ExamenParser::DeclarationContext * /*ctx*/) override { }
  virtual void exitDeclaration(ExamenParser::DeclarationContext * /*ctx*/) override { }

  virtual void enterUnionType(ExamenParser::UnionTypeContext * /*ctx*/) override { }
  virtual void exitUnionType(ExamenParser::UnionTypeContext * /*ctx*/) override { }

  virtual void enterStructType(ExamenParser::StructTypeContext * /*ctx*/) override { }
  virtual void exitStructType(ExamenParser::StructTypeContext * /*ctx*/) override { }

  virtual void enterBasicType(ExamenParser::BasicTypeContext * /*ctx*/) override { }
  virtual void exitBasicType(ExamenParser::BasicTypeContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

