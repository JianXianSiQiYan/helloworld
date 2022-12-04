#include <gtest/gtest.h>
#include <mockcpp/mockcpp.hpp>
#include <iostream>
int func()
{
    return 10;
}

int func1()
{
    return 100;
}

TEST(mockercpp, helloworld) {
    std::cout << func() << std::endl;
    MOCKER(func)
        .stubs()
        .will(invoke(func1));
    std::cout << func() << std::endl;
    EXPECT_TRUE(true);
}