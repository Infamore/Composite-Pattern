#include "gtest/gtest.h"
#include "op.hpp"
#include "base.hpp"

TEST(classtesting, opclass) {
        op* temp = new op(12);
        EXPECT_EQ(12, temp->evaluate());
        EXPECT_EQ("12", temp->stringify());

}


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
