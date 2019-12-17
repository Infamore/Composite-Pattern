#include "pow.hpp"
#include "base.hpp"
#include "gtest/gtest.h"


TEST(classtesting, powclass) {
        op* op1 = new op(2);
        op* op2 = new op(5);
        Pow* temp = new Pow(op1, op2);
        EXPECT_EQ(32, temp->evaluate());
        EXPECT_EQ("2 ** 5", temp->stringify());
}


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
