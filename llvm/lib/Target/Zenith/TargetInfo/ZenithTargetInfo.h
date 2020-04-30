#pragma once
#include "llvm/Support/TargetRegistry.h"

namespace llvm {

class Target;
Target& getZenithTarget();

} // end namespace llvm
