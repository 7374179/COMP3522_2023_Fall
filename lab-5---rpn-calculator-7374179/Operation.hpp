//
// Created by user on 10/2/2023.
//

#pragma once

#include <iostream>

using namespace std;

/**
 * This class provides a blueprint for all derived operation classes. It defines
 * the basic functionalities that any specific operation (e.g., addition, subtraction)
 * must implement.
 */
class Operation {
public:
    /**
     * This function should return a character that represents the specific operation.
     * @return char representing the operation.
     */
    virtual char get_code() = 0;

    /**
     * Implement the actual mathematical operation for the derived class.
     * @param a The first operand.
     * @param b The second operand.
     * @return Result of the operation on the operands.
     */
    virtual int perform(int a, int b) = 0;

    /**
     * Ensures that objects of derived classes are destroyed properly.
     */
    virtual ~Operation() {};
};
