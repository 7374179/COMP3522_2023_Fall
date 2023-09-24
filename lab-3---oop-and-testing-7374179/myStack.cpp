//
// Created by user on 9/19/2023.
//

#include <iostream>
#include "myStack.hpp"
using namespace std;

// Constructor: Initializes the stack
MyStack::MyStack(){
    index = -1;
}

// Pushes an integer value onto the stack
// POST: Returns false if the stack is full, otherwise true
bool MyStack::push(int a){
    if(index==MAXSIZE-1){
        return false;
    }
    arr[++index]=a;
    return true;
}

// Pops the top value off the stack
// POST: Does nothing if the stack is empty
void MyStack::pop(){
    if(index==-1){
        index=-1;
    } else {
        index--;
    }
}

// Returns the top value of the stack
// POST: Returns -1 if the stack is empty
int MyStack::top(){
    if(index==-1){
        return -1;
    }
    return arr[index];
}

// Checks if the stack is empty
// POST: Returns true if empty, otherwise false
bool MyStack::empty() const{
    if(index==-1){
        return true;
    }else{
        return false;
    }
}

// Checks if the stack is full
// POST: Returns true if full, otherwise false
bool MyStack::full() const{
    if(index==MAXSIZE-1){
        return true;
    }else{
        return false;
    }
}

// Prints the contents of the stack as a string
// POST: Returns "the stack is empty" if empty, otherwise returns the stack content as a string
string MyStack::print() const{
    if(index==-1){
        return "the stack is empty";
    }

    string str;
    for(int i=0;i<=index;i++){
        str = str + to_string(arr[i]) + " ";
    }
    return str;
}


