#include "ZenithTargetMachine.h"
#include "llvm/Support/TargetRegistry.h"
#include "TargetInfo/ZenithTargetInfo.h"

using namespace llvm;

extern "C" LLVM_EXTERNAL_VISIBILITY void LLVMInitializeZenithTarget()
{
  // Register the target
  RegisterTargetMachine<ZenithTargetMachine> X(getZenithTarget());
}

static StringRef makeLayout()
{
  /**
   * E - Big Endian architecture
   * p:32:32 - 32 bit (pointer, ABI, and preferred alignment)
   */
  return "E-p:32:32";
}

/* FIXME: need to specify a layout description... */
ZenithTargetMachine::ZenithTargetMachine(const Target &T, const Triple& TT,
    StringRef CPU, StringRef FS, const TargetOptions& Options,
    Optional<Reloc::Model> RM, Optional<CodeModel::Model> CM,
                                         CodeGenOpt::Level OL, bool JIT)
    : LLVMTargetMachine(T, makeLayout(), TT, CPU, FS, Options, Reloc::Static,
                        CodeModel::Small, OL),

      Layout(makeLayout()) { }
