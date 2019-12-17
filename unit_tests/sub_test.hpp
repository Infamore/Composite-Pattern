#include "sub.hpp"
#include "base.hpp"
#include "gtest/gtest.h"

TEST(classtesting, subclass) {
        op* op1 = new op(17);
        op* op2 = new op(14);
        sub* temp = new sub(op1, op2);
        EXPECT_EQ(3, temp->evaluate());
        EXPECT_EQ("17 - 14", temp->stringify());

}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
