#include "../Example.hpp"
#include <gtest/gtest.h>

struct ExampleTests
    : public ::testing::Test
{ 
    int* x;

    int GetX(){ return *x;}

    virtual void SetUp ()override {
        fprintf(stderr,"Hello World!\n");
        x = new int(42);
     }
    virtual void TearDown ()override { 
        delete x;
    }
};

TEST_F(ExampleTests, MAC){
    int y = 16;
    int sum = 100;
    int oldSum = sum;
    int expectednewSum = oldSum + GetX() * y;
    EXPECT_EQ(
        expectednewSum,
        MAC(GetX(),y,sum)
    );

    EXPECT_EQ(
        expectednewSum,
        sum
    );
}


TEST(ExampleTests2, Square)
{
    int x = 5;
    int expectedSquare = x * x;
    EXPECT_EQ(
        expectedSquare,
        Square(x)   
     );
}