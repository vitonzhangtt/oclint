# How to Build


## oclint

The cmake file for oclint is `oclint/oclint-driver/CMakeLists.txt`.
The dependencies of oclint are as the following:

```cmake
# oclint/oclint-driver/CMakeLists.txt
TARGET_LINK_LIBRARIES(oclint-${OCLINT_VERSION_RELEASE}
    OCLintDriver
    OCLintRuleSet
    OCLintCore
    clangStaticAnalyzerFrontend
    clangStaticAnalyzerCheckers
    clangStaticAnalyzerCore
    clangRewriteFrontend
    clangRewrite
    clangCrossTU
    clangIndex
    ${CLANG_LIBRARIES}
    ${REQ_LLVM_LIBRARIES}
    ${CMAKE_DL_LIBS}
    )
```



## oclint-xcodebuild

