//
// Created by user on 9/19/2023.
//

#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "myStack.hpp"

TEST_CASE("A new stack is empty", "testTag1")
{
    MyStack tester;

    REQUIRE(tester.empty() == true);
    REQUIRE(tester.full() == false);
}

TEST_CASE("A new stack is not full", "testTag2")
{
    MyStack tester;

    REQUIRE(tester.empty() == true);
    tester.push(1);
    tester.push(2);
    tester.push(3);
    tester.push(4);
    tester.push(5);
    tester.push(6);
    tester.push(7);
    tester.push(8);
    tester.push(9);
    REQUIRE(tester.full() == false);
}

TEST_CASE("print function", "testTag3")
{
    MyStack tester;

    REQUIRE(tester.empty() == true);
    tester.push(1);
    tester.push(2);
    tester.push(3);
    tester.push(4);
    tester.push(5);
    tester.push(6);
    tester.push(7);
    tester.push(8);
    tester.push(9);
    tester.push(10);
    REQUIRE(tester.print() == "1 2 3 4 5 6 7 8 9 10 ");
}

TEST_CASE("Pop an empty stack", "testTag4")
{
    MyStack tester;

    REQUIRE(tester.empty() == true);
    tester.pop();
    REQUIRE(tester.empty() == true);
}

TEST_CASE("Pop empty stack then add values", "testTag5")
{
    MyStack tester;

    REQUIRE(tester.empty() == true);
    tester.pop();
    REQUIRE(tester.empty() == true);
    tester.push(1);
    tester.push(2);
    REQUIRE(tester.empty() == false);
    REQUIRE(tester.print() == "1 2 ");
}

TEST_CASE("Push more than maximum stack amount", "testTag6")
{
    MyStack tester;

    REQUIRE(tester.empty() == true);
    tester.push(1);
    tester.push(2);
    tester.push(3);
    tester.push(4);
    tester.push(5);
    tester.push(6);
    tester.push(7);
    tester.push(8);
    tester.push(9);
    tester.push(10);
    tester.push(11);
    REQUIRE(tester.top() == 10 );
}

TEST_CASE("Check top value on empty stack", "testTag7")
{
    MyStack tester;

    REQUIRE(tester.empty() == true);
    REQUIRE(tester.top() == -1 );
}

TEST_CASE("Push X values pop Y values", "testTag8")
{
    MyStack tester;

    REQUIRE(tester.empty() == true);
    tester.push(1);
    tester.push(2);
    tester.push(3);
    tester.push(4);
    tester.push(5);
    tester.push(6);
    tester.push(7);
    tester.push(8);
    tester.push(9);
    tester.push(10);
    tester.pop();
    tester.pop();
    tester.pop();
    tester.pop();
    tester.pop();
    REQUIRE(tester.top() == 5);
}

TEST_CASE("Push exactly 10 values, check if stack is full and top value is expected value", "testTag9")
{
    MyStack tester;

    REQUIRE(tester.empty() == true);
    REQUIRE(tester.push(1));
    REQUIRE(tester.push(2));
    REQUIRE(tester.push(3));
    REQUIRE(tester.push(4));
    REQUIRE(tester.push(5));
    REQUIRE(tester.push(6));
    REQUIRE(tester.push(7));
    REQUIRE(tester.push(8) );
    REQUIRE(tester.push(9));
    REQUIRE(tester.push(10));
    REQUIRE(tester.full() == true);
    REQUIRE(tester.top() == 10);
}