#include <gmock/gmock.h>
#include <library/Hello.h>

using library::hello;
using testing::Eq;

TEST(HelloShould, ReturnTheClassicLine)
{
    EXPECT_THAT(hello(), Eq("Hello World!"));
}