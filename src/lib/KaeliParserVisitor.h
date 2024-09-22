
// Generated from KaeliParser.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "KaeliParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by KaeliParser.
 */
class  KaeliParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by KaeliParser.
   */
    virtual std::any visitProgram(KaeliParser::ProgramContext *context) = 0;

    virtual std::any visitStat(KaeliParser::StatContext *context) = 0;

    virtual std::any visitExpr(KaeliParser::ExprContext *context) = 0;

    virtual std::any visitAddsub(KaeliParser::AddsubContext *context) = 0;

    virtual std::any visitMultdiv(KaeliParser::MultdivContext *context) = 0;

    virtual std::any visitArray(KaeliParser::ArrayContext *context) = 0;

    virtual std::any visitVariable(KaeliParser::VariableContext *context) = 0;

    virtual std::any visitFuncParams(KaeliParser::FuncParamsContext *context) = 0;

    virtual std::any visitFuncDef(KaeliParser::FuncDefContext *context) = 0;

    virtual std::any visitFuncArgs(KaeliParser::FuncArgsContext *context) = 0;

    virtual std::any visitFuncCall(KaeliParser::FuncCallContext *context) = 0;

    virtual std::any visitFor(KaeliParser::ForContext *context) = 0;

    virtual std::any visitIf(KaeliParser::IfContext *context) = 0;


};

