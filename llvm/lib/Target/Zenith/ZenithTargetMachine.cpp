#include "ZenithTargetMachine.h"

using namespace llvm;

ZenithTargetMachine::ZenithTargetMachine(
    const Target &T, StringRef DataLayoutString, const Triple &Tt,
    StringRef Cpu, StringRef Fs, const TargetOptions& Options,
    Reloc::Model Rm, CodeModel::Model Cm, CodeGenOpt::Level Ol, const Module &M,
    const std::string &FS)
    : LLVMTargetMachine(T, DataLayoutString, Tt, Cpu, Fs, Options, Rm, Cm, Ol),
      Layout(DataLayout(""))

{

}
