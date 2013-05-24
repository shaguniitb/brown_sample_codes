#include "llvm/Module.h"
#include "llvm/Support/IRBuilder.h"
#include "llvm/LLVMContext.h"

int main()
{
  llvm::LLVMContext& context = llvm::getGlobalContext();
  llvm::Module* module = new llvm::Module("top", context);
  llvm::IRBuilder<> builder(context); 

  module->dump( );
}
