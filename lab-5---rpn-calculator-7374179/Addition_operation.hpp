//
// Created by user on 10/2/2023.
//

#pragma once

#include <iostream>
#include "Abstract_operation.hpp"

using namespace std;

/**
 * This class represents the addition operation in a calculator.
 * It is derived from the Abstract_operation class and implements the perform method
 * to carry out the addition operation.
 */

class Addition_operation : public Abstract_operation {
public:
    // Static constant to represent the operation code for addition.
    static const char ADDITION_CODE = '+';

    /**
     * Default constructor.
     * Initializes the operation type with the ADDITION_CODE.
     */
    Addition_operation() : Abstract_operation(ADDITION_CODE) {}

    /**
     * Overrides the perform function from the Abstract_operation class.
     *
     * @param a - First operand
     * @param b - Second operand
     * @return int - Result of the addition of a and b
     */
    int perform(int a, int b) override { return a + b; }

    /**
     * Virtual destructor for the Addition_operation class.
     */
    virtual ~Addition_operation() {};

};

