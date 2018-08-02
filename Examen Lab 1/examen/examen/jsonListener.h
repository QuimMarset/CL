
// Generated from json.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "jsonParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by jsonParser.
 */
class  jsonListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterJson(jsonParser::JsonContext *ctx) = 0;
  virtual void exitJson(jsonParser::JsonContext *ctx) = 0;

  virtual void enterString(jsonParser::StringContext *ctx) = 0;
  virtual void exitString(jsonParser::StringContext *ctx) = 0;

  virtual void enterDict(jsonParser::DictContext *ctx) = 0;
  virtual void exitDict(jsonParser::DictContext *ctx) = 0;

  virtual void enterList(jsonParser::ListContext *ctx) = 0;
  virtual void exitList(jsonParser::ListContext *ctx) = 0;

  virtual void enterPair(jsonParser::PairContext *ctx) = 0;
  virtual void exitPair(jsonParser::PairContext *ctx) = 0;


};

