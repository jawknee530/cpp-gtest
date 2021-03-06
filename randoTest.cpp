/**
 * Unit Tests for Rando Test
**/

#include <gtest/gtest.h>
#include "rando.h"

/*  
	FUNCTIONS WE NEED TO TEST:

	bool shouldWorry(bool,bool,bool);
	bool isDivisbleBy(int,int);
	bool isPrime(int);
	int nearestToZero(int,int);
*/
 
class RandoTest : public ::testing::Test
{
	protected:
		RandoTest(){} //constructor runs before each test
		virtual ~RandoTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

TEST(RandoTest, allChildrenSmile)
{
	Rando rando;
	ASSERT_TRUE( rando.shouldWorry(true,true,true) );
}

TEST(RandoTest, fiveTen)
{
  Rando rando;
  ASSERT_EQ(5, rando.nearestToZero(5, 10) );
}

TEST(RandoTest, negativeTwoOne)
{
  Rando rando;
  ASSERT_EQ(1, rando.nearestToZero(-2, 1) );
}

TEST(RandoTest, negativeFiveTen)
{
  Rando rando;
  ASSERT_EQ(-5, rando.nearestToZero(-5, 10) );
}

TEST(RandoTest, hundredFifty)
{
  Rando rando;
  ASSERT_EQ(50, rando.nearestToZero(100, 50) );
}

