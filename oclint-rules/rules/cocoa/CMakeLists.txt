SET(LIST_OF_RULES
    ObjCVerifyIsEqualHash
    ObjCVerifyMustCallSuper
    ObjCVerifySubclassMustImplement
    ObjCVerifyProhibitedCall
    ObjCVerifyProtectedMethod
    )

BUILD_DYNAMIC_RULES("${LIST_OF_RULES}")

SET(BuildObjCVerifyPropertyIsNotAssignForReferenceTypeRule ObjCVerifyPropertyIsNotAssignForReferenceType)
BUILD_DYNAMIC_RULES("${BuildObjCVerifyPropertyIsNotAssignForReferenceTypeRule}")
