//
// Created by user on 9/19/2023.
//

#pragma once
using namespace std;
constexpr int MAXSIZE = 10;  // Maximum size of the stack

class MyStack
{
private:
    int arr[MAXSIZE]{};
    int index;
public:
    // Default constructor: Initializes an empty stack
    MyStack();

    // Pushes an integer onto the stack.
    // Returns false if the stack is full, true otherwise.
    bool push(int a);

    // Pops the top element off the stack.
    // Does nothing if the stack is empty.
    void pop();

    // Returns the top element of the stack.
    // Returns -1 if the stack is empty.
    int top();

    // Checks if the stack is empty.
    // Returns true if empty, false otherwise.
    bool empty() const;

    // Checks if the stack is full.
    // Returns true if full, false otherwise.
    bool full() const;

    // Returns the contents of the stack as a string.
    // If the stack is empty, returns "the stack is empty".
    string print() const;
};
