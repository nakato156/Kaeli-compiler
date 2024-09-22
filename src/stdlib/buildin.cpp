#include <llvm/IR/Function.h>
#include <llvm/IR/Module.h>
#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/LLVMContext.h>
#include <llvm/Support/raw_ostream.h>

namespace KaeliBuildin {
    using namespace llvm;
    
    Function* createPrintFunction(Module &module, llvm::LLVMContext &context) {
    }

} // namespace KaeliBuildin
