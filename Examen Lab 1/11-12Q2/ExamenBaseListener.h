
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

  virtual void enterIdentificador(ExamenParser::IdentificadorContext * /*ctx*/) override { }
  virtual void exitIdentificador(ExamenParser::IdentificadorContext * /*ctx*/) override { }

  virtual void enterIntIndex(ExamenParser::IntIndexContext * /*ctx*/) override { }
  virtual void exitIntIndex(ExamenParser::IntIndexContext * /*ctx*/) override { }

  virtual void enterIdentIndex(ExamenParser::IdentIndexContext * /*ctx*/) override { }
  virtual void exitIdentIndex(ExamenParser::IdentIndexContext * /*ctx*/) override { }

  virtual void enterIdent(ExamenParser::IdentContext * /*ctx*/) override { }
  virtual void exitIdent(ExamenParser::IdentContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

