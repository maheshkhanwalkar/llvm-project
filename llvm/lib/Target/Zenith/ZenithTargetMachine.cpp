#include "ZenithTargetMachine.h"
#include "llvm/Support/TargetRegistry.h"
#include "TargetInfo/ZenithTargetInfo.h"

using namespace llvm;

extern "C" LLVM_EXTERNAL_VISIBILITY void LLVMInitializeZenithTarget()
{
  // Register the target
  RegisterTargetMachine<ZenithTargetMachine> X(getZenithTarget());
}

/* FIXME: need to specify a layout description... */
ZenithTargetMachine::ZenithTargetMachine(const Target &T, const Triple& TT,
    StringRef CPU, StringRef FS, const TargetOptions& Options,
    CodeGenOpt::Level OL)
    : LLVMTargetMachine(T, "", TT, CPU, FS, Options, Reloc::Static,
                        CodeModel::Small, OL),

      Layout("") { }
