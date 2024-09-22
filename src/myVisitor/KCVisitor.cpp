#include "KCVisitor.h"
#include "KaeliParser.h"
#include <any>
#include <llvm/ADT/APFloat.h>
#include <llvm/IR/BasicBlock.h>
#include <llvm/IR/Constants.h>
#include <llvm/IR/DerivedTypes.h>
#include <llvm/IR/Function.h>
#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/Instructions.h>
#include <llvm/IR/LLVMContext.h>
#include <llvm/IR/Module.h>
#include <llvm/IR/Type.h>
#include <llvm/IR/Value.h>
#include <memory>
#include <string>

std::any KCVisitor::visitProgram(KaeliParser::ProgramContext *ctx)
{
    std::cout << "visitProg\n";

    this->F = llvm::Function::Create(
        llvm::FunctionType::get(llvm::Type::getVoidTy(*(this->context)), false),
        llvm::Function::ExternalLinkage,
        "main",
        module.get());

    // Crear un bloque básico de entrada para 'main'
    llvm::BasicBlock *BB = llvm::BasicBlock::Create(*(this->context), "entry", F);
    (this->builder)->SetInsertPoint(BB);

    visitChildren(ctx);

    // Finalizar la función main
    builder->CreateRetVoid();

    return nullptr;
}

std::any KCVisitor::visitStat(KaeliParser::StatContext *ctx)
{
    std::cout << "visitStatement\n";
    return visitChildren(ctx);
}

std::any KCVisitor::visitExpr(KaeliParser::ExprContext *ctx)
{
    if(ctx->ADD() || ctx->RESTA()){
        // Asumimos que ctx->ADD() indica que hay una expresión de suma
        std::cout << "visitExpr: ADD\n";

        // Evaluamos los operandos izquierdo y derecho
        llvm::Value *left = std::any_cast<llvm::Value*>(visit(ctx->expr(0)));
        llvm::Value *right = std::any_cast<llvm::Value*>(visit(ctx->expr(1)));

        // Creamos una instrucción de adición en LLVM IR
        std::cout << "fin ADD " << left->getValueName() << " " << right->getType()->getTypeID() << std::endl;
        llvm::Value *result = builder->CreateFAdd(left, right, "addtmp");
        return result;
    }
    if (ctx->STRING()) {
        // return builder->CreateGlobalStringPtr(ctx->STRING()->getText().substr(1, ctx->STRING()->getText().size() - 2));
        std::string str = ctx->STRING()->getText();
        str = str.substr(1, str.size() - 2);  // Quitar comillas

        // Crear una cadena global
        llvm::Constant *stringConstant = llvm::ConstantDataArray::getString(*context, str);
        llvm::GlobalVariable *stringGlobal = new llvm::GlobalVariable(
            *module,
            stringConstant->getType(),
            true, // Es constante
            llvm::GlobalValue::PrivateLinkage, // Tipo de enlace
            stringConstant, // Valor de la variable global
            "" // Nombre de la variable global
        );

        // Crear un puntero a la cadena global
        llvm::Value *stringPtr = builder->CreatePointerCast(stringGlobal, llvm::Type::getInt8Ty(*context));
        return stringPtr;
    }
    if (ctx->NUM())
    {
        double numVal = std::stod(ctx->NUM()->getText());
        llvm::Value *val = llvm::ConstantFP::get(*context, llvm::APFloat(numVal));
        return val;
    }

    if (ctx->ID())
    {
        std::string varName = ctx->getText();
        // bool vars
        if(varName == "verdadero") {
            llvm::Value *val = llvm::ConstantInt::get(*context, llvm::APInt(1, 1));
            return val;
        }
        if(varName == "falso") {
            llvm::Value *val = llvm::ConstantInt::get(*context, llvm::APInt(1, 0));
            return val;
        }

        // Busca la variable en la memoria
        if (memory.find(varName) != memory.end()) {
            return memory[varName];  // Ahora memory almacena llvm::Value*
        } else {
            std::cerr << "Variable no encontrada: " << varName << std::endl;
            return nullptr;
        }
    }
    return visitChildren(ctx);
}

std::any KCVisitor::visitAddsub(KaeliParser::AddsubContext *ctx)
{
    std::cout << "visitAddSub\n";
    return visitChildren(ctx);
}

std::any KCVisitor::visitArray(KaeliParser::ArrayContext *ctx)
{
    return visitChildren(ctx);
}

std::any KCVisitor::visitVariable(KaeliParser::VariableContext *ctx)
{
    std::string idName = ctx->ID()->getText();
    std::cout << "idName: " << idName << std::endl;

    llvm::AllocaInst *Alloca = CreateEntryBlockAlloca(idName);
    auto value = std::any_cast<llvm::Value*>(visit(ctx->expr()));
    
    if (value) {
        builder->CreateStore(value, Alloca);
    }
    
    memory[idName] = Alloca;
    return Alloca;
}

std::any KCVisitor::visitFuncParams(KaeliParser::FuncParamsContext *ctx) {
    return visitChildren(ctx);
}

std::any KCVisitor::visitFuncDef(KaeliParser::FuncDefContext *ctx) {
    return visitChildren(ctx);
}

std::any KCVisitor::visitFuncArgs(KaeliParser::FuncArgsContext *ctx) {
    return visitChildren(ctx);
}

std::any KCVisitor::visitFuncCall(KaeliParser::FuncCallContext *ctx) {
    // if func is imprimir
    std::string funcName = ctx->ID()->getText();

    if (funcName == "imprimir") {
        llvm::Value *value = std::any_cast<llvm::Value*>(visit(ctx->funcArgs()->expr(0)));
        if (value) {
            // builder->CreateCall(printFunc, value);
        }
    }
    return visitChildren(ctx);

}

std::any KCVisitor::visitFor(KaeliParser::ForContext *ctx) {
    return visitChildren(ctx);
}

std::any KCVisitor::visitIf(KaeliParser::IfContext *ctx) {
    // evaluate expr
    llvm::Value *cond = std::any_cast<llvm::Value*>(visit(ctx->expr()));
    if (!cond) {
        return nullptr;
    }

    // create blocks
    return visitChildren(ctx);
}

/*
std::any pcdosVisitorImpl::visitAddSub(pcdosParser::AddSubContext *ctx) {
  std::cout << "visitAddSub\n";
  llvm::Value *L = std::any_cast<llvm::Value *>(visit(ctx->expr(0)));
  llvm::Value *R = std::any_cast<llvm::Value *>(visit(ctx->expr(1)));
  if (ctx->op->getType() == pcdosParser::ADD) {
    return std::any(builder->CreateFAdd(L, R, "addTemp"));
  } else {
    return std::any(builder->CreateFSub(L, R, "subTemp"));
  }
  // return visitChildren(ctx);
}

// vim: set ts=2:sw=2:et:sts=2:
*/