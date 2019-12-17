#include "div.hpp"
#include "base.hpp"
#include "gtest/gtest.h"


TEST(classtesting, divclass) {
        op* op1 = new op(15);
        op* op2 = new op(3);
        Div* temp = new Div(op1, op2);
        EXPECT_EQ(5, temp->evaluate());
        EXPECT_EQ("15 / 3"), temp->stringify());


}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
