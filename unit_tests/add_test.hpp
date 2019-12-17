#include "add.hpp"
#include "base.hpp"
#include "gtest/gtest.h"


TEST(classtesting, addclass) {
        op* op1 = new op(9);
        op* op2 = new op(5);
        add* temp = new add(op1, op2);
        EXPECT_EQ(14, temp->evaluate());
  			EXPECT_EQ("9 + 5", temp->stringify());
}


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
