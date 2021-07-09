#include "TestRuleOnCode.h"
#include "rules/cocoa/ObjCVerifyPropertyIsNotAssignForReferenceTypeRule.cpp"

TEST(ObjCVerifyPropertyIsNotAssignForReferenceTypeRuleTest, PropertyTest)
{
    ObjCVerifyPropertyIsNotAssignForReferenceTypeRule rule;
    EXPECT_EQ(3, rule.priority());
    EXPECT_EQ("obj c verify property is not assign for reference type", rule.name());
    EXPECT_EQ("cocoa", rule.category());
}

TEST(ObjCVerifyPropertyIsNotAssignForReferenceTypeRuleTest, FirstFailingTest)
{
    EXPECT_FALSE("Start writing a new test");
}
