#include "ZenithTargetInfo.h"
using namespace llvm;

Target& llvm::getZenithTarget()
{
  static Target target;
  return target;
}

extern "C" LLVM_EXTERNAL_VISIBILITY void LLVMInitializeZenithTargetInfo()
{
  RegisterTarget<Triple::zenith, false> X(getZenithTarget(), "Zenith",
                                          "Zenith", "Zenith");
}
