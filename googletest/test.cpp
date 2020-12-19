#include <gtest/gtest.h>
#include "sample.cpp"

TEST(Add, case1) {
  EXPECT_LT(-2, Add(1, 2));
  EXPECT_EQ(-1, Add(1, 2));
  ASSERT_LT(-2, Add(1, 2));
  ASSERT_EQ(-1, Add(1, 2));
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}