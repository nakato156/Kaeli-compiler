#ifndef __KC_VISITOR_IMPL__
#define __KC_VISITOR_IMPL__

#include <map>
#include <memory>
#include <any>
#include <string>
#include <system_error>

#include "KaeliParser.h"
#include "KaeliParserBaseVisitor.h"

#include "antlr4-runtime.h"
#include <llvm/Support/raw_ostream.h>
#include <llvm/IR/LLVMContext.h>
#include <llvm/IR/Module.h>
#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/Value.h>
#include <llvm/IR/Type.h>
#include <llvm/IR/Function.h>
#include <llvm/IR/BasicBlock.h>
#include <llvm/IR/Verifier.h>
#include <llvm/Support/raw_ostream.h>

class KCVisitor : KaeliParserBaseVisitor {
private:
    std::map<std::string, std::any> memory;
    std::unique_ptr<llvm::LLVMContext> context;
    std::unique_ptr<llvm::Module> module;
    std::unique_ptr<llvm::IRBuilder<>> builder;

    llvm::Function *F;
    llvm::AllocaInst *CreateEntryBlockAlloca(llvm::StringRef varName) {
        llvm::IRBuilder<> TmpB(&F->getEntryBlock(), F->getEntryBlock().begin());
        return TmpB.CreateAlloca(llvm::Type::getDoubleTy(*context), nullptr, varName);
    }

public:
    KCVisitor() : 
        context(std::make_unique<llvm::LLVMContext>()),
        module(std::make_unique<llvm::Module>("KcModule", *context)),
        builder(std::make_unique<llvm::IRBuilder<>>(*context)) {}

    void compile() {
        std::error_code error;
        llvm::raw_fd_stream outLL("main.ll", error);
        module->print(outLL, nullptr);
    }

    virtual std::any visitProgram(KaeliParser::ProgramContext *ctx) override; 
    
    virtual std::any visitStat(KaeliParser::StatContext *ctx) override;

    virtual std::any visitExpr(KaeliParser::ExprContext *ctx) override;

    virtual std::any visitAddsub(KaeliParser::AddsubContext *ctx) override;
    
    virtual std::any visitArray(KaeliParser::ArrayContext *ctx) override;

    virtual std::any visitVariable(KaeliParser::VariableContext *ctx) override;

    virtual std::any visitFuncParams(KaeliParser::FuncParamsContext *ctx) override;

    virtual std::any visitFuncDef(KaeliParser::FuncDefContext *ctx) override;

    virtual std::any visitFuncArgs(KaeliParser::FuncArgsContext *ctx) override;

    virtual std::any visitFuncCall(KaeliParser::FuncCallContext *ctx) override;

    virtual std::any visitFor(KaeliParser::ForContext *ctx) override;

    virtual std::any visitIf(KaeliParser::IfContext *ctx) override;

};

#endif