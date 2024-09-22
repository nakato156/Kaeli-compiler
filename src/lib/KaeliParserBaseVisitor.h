
// Generated from KaeliParser.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "KaeliParserVisitor.h"


/**
 * This class provides an empty implementation of KaeliParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  KaeliParserBaseVisitor : public KaeliParserVisitor {
public:

  virtual std::any visitProgram(KaeliParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStat(KaeliParser::StatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr(KaeliParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddsub(KaeliParser::AddsubContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultdiv(KaeliParser::MultdivContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArray(KaeliParser::ArrayContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariable(KaeliParser::VariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncParams(KaeliParser::FuncParamsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncDef(KaeliParser::FuncDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncArgs(KaeliParser::FuncArgsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncCall(KaeliParser::FuncCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFor(KaeliParser::ForContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIf(KaeliParser::IfContext *ctx) override {
    return visitChildren(ctx);
  }


};

