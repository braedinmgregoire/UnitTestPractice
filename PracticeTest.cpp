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

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("Not a palindrome");
    ASSERT_FALSE(actual);

		actual = obj.isPalindrome("banaanab");
		ASSERT_TRUE(actual);

		actual = obj.isPalindrome("baNAnab");
		ASSERT_TRUE(actual);

		actual = obj.isPalindrome("xbac    ");
		ASSERT_FALSE(actual);

		actual = obj.isPalindrome("");
		ASSERT_FALSE(actual);
}

TEST(PracticeTest, sortDescending)
{
    Practice obj;
		int first = 2;
		int second = 3;
		int third = 4;
    obj.sortDescending(first, second, third);
    ASSERT_GE(first, second);
		ASSERT_GE(second, third);

		first = 4;
		second = 3;
		third = 2;
		obj.sortDescending(first, second, third);
		ASSERT_GE(first, second);
		ASSERT_GE(second, third);

		first = 0;
		second = 0;
		third = 2;
		obj.sortDescending(first, second, third);
		ASSERT_GE(first, second);
		ASSERT_GE(second, third);

		first = 0;
		second = 4;
		third = 0;
		obj.sortDescending(first, second, third);
		ASSERT_GE(first, second);
		ASSERT_GE(second, third);
}
