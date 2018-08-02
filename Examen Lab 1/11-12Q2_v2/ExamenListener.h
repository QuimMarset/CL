
// Generated from Examen.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "ExamenParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by ExamenParser.
 */
class  ExamenListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterIdentificador(ExamenParser::IdentificadorContext *ctx) = 0;
  virtual void exitIdentificador(ExamenParser::IdentificadorContext *ctx) = 0;

  virtual void enterIntIndex(ExamenParser::IntIndexContext *ctx) = 0;
  virtual void exitIntIndex(ExamenParser::IntIndexContext *ctx) = 0;

  virtual void enterIdentIndex(ExamenParser::IdentIndexContext *ctx) = 0;
  virtual void exitIdentIndex(ExamenParser::IdentIndexContext *ctx) = 0;

  virtual void enterIdent(ExamenParser::IdentContext *ctx) = 0;
  virtual void exitIdent(ExamenParser::IdentContext *ctx) = 0;


};

