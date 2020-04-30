#pragma once
#include "llvm/Target/TargetMachine.h"

namespace llvm {

class ZenithTargetMachine : public LLVMTargetMachine {
public:
  const DataLayout Layout;

  ZenithTargetMachine(const Target &T, const Triple& TT, StringRef CPU,
                      StringRef FS, const TargetOptions& Options,
                      CodeGenOpt::Level OL);

  ~ZenithTargetMachine() = default;
};

} // end namespace llvm
