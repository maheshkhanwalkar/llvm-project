#pragma once
#include "llvm/Target/TargetMachine.h"

namespace llvm {

class ZenithTargetMachine : public LLVMTargetMachine {
public:
  const DataLayout Layout;

  ZenithTargetMachine(const llvm::Target &t, StringRef dataLayoutString,
                      const llvm::Triple &tt, StringRef cpu, StringRef fs,
                      const llvm::TargetOptions &options, Reloc::Model rm,
                      CodeModel::Model cm, CodeGenOpt::Level ol,
                      const Module &M, const std::string &FS);
};

} // end namespace llvm
