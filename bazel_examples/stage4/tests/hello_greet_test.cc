#include "main/hello_greet.h"
#include <gtest/gtest.h>
#include <iostream>
#include <string>

std::string INPUT_STR1 = "Dhan";
std::string INPUT_STR2 = "Raju";

TEST(get_greetTest, INPUT_STR1) {
    ASSERT_EQ("Hello Dhan", get_greet(INPUT_STR1));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}