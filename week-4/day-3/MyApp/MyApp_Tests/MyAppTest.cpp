#include <gtest/gtest.h>
#include "Apple.h"
Apples apples;
class AppleTest : public ::testing::Test
{
    void SetUp() override
    {

    }
    void TearDown()override {}
};
  std::vector<int> vectorApple = {5, 1, 9, 6, 4};
std::vector<int> vectorEmpty;
std::vector<int> vectorOne = {5};
std::vector<int> vectorNegative = {-9};

    TEST(apple_check, test_apple)
    {
        EXPECT_EQ(apples.getApple(), "apple");
    }
    TEST(sum_check, test_sum)
    {
        ASSERT_EQ(apples.sum(vectorApple), 25);
    }
TEST(empty_check, test_empty)
{
    ASSERT_EQ(apples.sum(vectorEmpty), 0);
}
TEST(one_check, test_one)
{
    ASSERT_EQ(apples.sum(vectorOne), 5);
}
TEST(negative_check, test_negative)
{
    ASSERT_EQ(apples.sum(vectorNegative), -9);
}