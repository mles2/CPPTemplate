#include <gtest/gtest.h>
#include "Class.hpp"

TEST(classTest, testSimpleAssertion)
{
    auto c = Class();
    ASSERT_TRUE(true);
}

class ClassTestFixture : public ::testing::Test
{
public:
    ClassTestFixture() {}

private:
    Class c;
};


TEST_F(ClassTestFixture, emptyTest)
{
    
}