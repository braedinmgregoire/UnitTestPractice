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
}

TEST(PracticeTest, actually_pal)
{
	Practice obj;
	bool actual = obj.isPalindrome("banaanab");
	ASSERT_TRUE(actual);
	}

TEST(PracticeTest, mixedCasePal)
{
	Practice obj;
	bool actual = obj.isPalindrome("baNAnab");
	ASSERT_TRUE(actual);
	}

TEST(PracticeTest, hangingEnd)
{
	Practice obj;
	bool actual = obj.isPalindrome("xbac    ");
	ASSERT_FALSE(actual);
	}

TEST(PracticeTest, nothing)
{
	Practice obj;
	bool actual = obj.isPalindrome("");
	ASSERT_TRUE(actual);
}

TEST(PracticeTest, ascending)
{
  Practice obj;
	int first = 2;
	int second = 3;
	int third = 4;
  bool actual = obj.sortDescending(first, second, third);
  ASSERT_TRUE(actual);
}

TEST(PracticeTest, alreadyDESC)
{
	Practice obj;
	int first = 4;
	int second = 3;
	int third = 2;
	bool actual = obj.sortDescending(first, second, third);
	ASSERT_TRUE(actual);
}

TEST(PracticeTest, outOfOrder)
{
	Practice obj;
	int first = -2;
	int second = 0;
	int third = 2;
	bool actual = obj.sortDescending(first, second, third);
	ASSERT_TRUE(actual);
}

TEST(PracticeTest,mixed)
{
	Practice obj;
	int first = -3;
	int second = 4;
	int third = 0;
	bool actual = obj.sortDescending(first, second, third);
	ASSERT_TRUE(actual);
}
