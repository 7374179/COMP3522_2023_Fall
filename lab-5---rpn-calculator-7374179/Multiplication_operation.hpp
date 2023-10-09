//
// Created by user on 10/2/2023.
//

#pragma once

#include <iostream>
#include "Abstract_operation.hpp"

using namespace std;

/**
 * This class represents the multiplication operation in a calculator.
 * It inherits from the Abstract_operation class and implements the perform method
 * to execute the multiplication operation.
 */
class Multiplication_operation : public Abstract_operation {
public:
    // Static constant to represent the operation code for multiplication.
    static const char MULTIPLICATION_CODE = '*';

    /**
     * Default constructor.
     * Initializes the operation type with the MULTIPLICATION_CODE.
     */
    Multiplication_operation() : Abstract_operation(MULTIPLICATION_CODE) {};

    /**
     * @param a - First operand
     * @param b - Second operand
     * @return int - Product of a and b
     */
    int perform(int a, int b) override { return a * b; };

    /**
     * Virtual destructor for the Multiplication_operation class.
     */
    virtual ~Multiplication_operation() {};

};