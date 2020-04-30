set(LLVM_TARGET_DEFINITIONS Zenith.td)

# tablegen(LLVM ZenithGenAsmMatcher.inc -gen-asm-matcher)
# tablegen(LLVM ZenithGenAsmWriter.inc -gen-asm-writer)
# tablegen(LLVM ZenithGenCallingConv.inc -gen-callingconv)
# tablegen(LLVM ZenithGenDAGISel.inc -gen-dag-isel)
# tablegen(LLVM ZenithGenDisassemblerTables.inc -gen-disassembler)
# tablegen(LLVM ZenithGenInstrInfo.inc -gen-instr-info)
# tablegen(LLVM ZenithGenMCCodeEmitter.inc -gen-emitter)
# tablegen(LLVM ZenithGenRegisterInfo.inc -gen-register-info)
# tablegen(LLVM ZenithGenSubtargetInfo.inc -gen-subtarget)

# add_public_tablegen_target(ZenithCommonTableGen)

add_llvm_target(ZenithCodeGen
    ZenithTargetMachine.cpp
  )

# add_subdirectory(AsmParser)
# add_subdirectory(Disassembler)
# add_subdirectory(MCTargetDesc)
add_subdirectory(TargetInfo)
