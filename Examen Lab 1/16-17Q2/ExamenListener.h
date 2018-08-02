
// Generated from Examen.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "ExamenParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by ExamenParser.
 */
class  ExamenListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(ExamenParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(ExamenParser::ProgramContext *ctx) = 0;

  virtual void enterDeclaration(ExamenParser::DeclarationContext *ctx) = 0;
  virtual void exitDeclaration(ExamenParser::DeclarationContext *ctx) = 0;

  virtual void enterUnionType(ExamenParser::UnionTypeContext *ctx) = 0;
  virtual void exitUnionType(ExamenParser::UnionTypeContext *ctx) = 0;

  virtual void enterStructType(ExamenParser::StructTypeContext *ctx) = 0;
  virtual void exitStructType(ExamenParser::StructTypeContext *ctx) = 0;

  virtual void enterBasicType(ExamenParser::BasicTypeContext *ctx) = 0;
  virtual void exitBasicType(ExamenParser::BasicTypeContext *ctx) = 0;


};

