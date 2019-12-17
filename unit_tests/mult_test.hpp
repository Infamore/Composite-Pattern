#include "mult.hpp"
#include "base.hpp"
#include "gtest/gtest.h"

TEST(classtesting, multclass) {
        op* op1 = new op(7);
        op* op2 = new op(3);
        mult* temp = new mult(op1, op2);
        EXPECT_EQ(21, temp->evaluate());
        EXPECT_EQ("7 * 3", temp->stringify());


}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
