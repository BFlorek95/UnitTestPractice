/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, is_not_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("Not a palindrome");
    ASSERT_FALSE(actual);
}
TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("civic");
    ASSERT_TRUE(actual);
}
TEST(PracticeTest, is_not_symbol_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome(";[]");
    ASSERT_FALSE(actual);
}
TEST(PracticeTest, is_symbol_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("[;[");
    ASSERT_TRUE(actual);
}
TEST(PracticeTest, is_empty_symbol_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("");
    ASSERT_TRUE(actual);
}
TEST(PracticeTest, is_sort_decending_1)
{
    Practice obj;
    int val1 = 1;
    int val2 = 2;
    int val3 = 3;
    obj.sortDescending(val1, val2, val3);
    ASSERT_GT(val1, val2);
    ASSERT_GT(val2, val3);
    ASSERT_GT(val1, val3);
}

TEST(PracticeTest, is_sort_decending_2)
{
    Practice obj;
    int val1 = 3;
    int val2 = 2;
    int val3 = 1;
    obj.sortDescending(val1, val2, val3);
    ASSERT_GT(val1, val2);
    ASSERT_GT(val2, val3);
    ASSERT_GT(val1, val3);
}

TEST(PracticeTest, is_sort_decending_3)
{
    Practice obj;
    int val1 = 2;
    int val2 = 3;
    int val3 = 1;
    obj.sortDescending(val1, val2, val3);
    ASSERT_GT(val1, val2);
    ASSERT_GT(val2, val3);
    ASSERT_GT(val1, val3);
}
TEST(PracticeTest, is_sort_decending_4)
{
    Practice obj;
    int val1 = 2;
    int val2 = 3;
    int val3 = 2;
    obj.sortDescending(val1, val2, val3);
    ASSERT_GE(val1, val2);
    ASSERT_GE(val2, val3);
    ASSERT_GE(val1, val3);
}
