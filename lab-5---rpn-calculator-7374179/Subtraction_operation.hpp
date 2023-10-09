//
// Created by user on 10/2/2023.
//

#pragma once

#include <iostream>
#include "Abstract_operation.hpp"

using namespace std;

/**
 * @class Subtraction_operation
 *
 * This class represents the subtraction operation in a calculator.
 * It is derived from the Abstract_operation class and implements the perform method
 * to carry out the subtraction operation.
 */
class Subtraction_operation : public Abstract_operation {
public:
    // Static constant to represent the operation code for subtraction.
    static const char SUBTRACTION_CODE = '-';

    /**
     * Default constructor.
     * Initializes the operation type with the SUBTRACTION_CODE.
     */
    Subtraction_operation() : Abstract_operation(SUBTRACTION_CODE) {};

    /**
     * Overrides the perform function from the Abstract_operation class.
     *
     * @param a - Minuend
     * @param b - Subtrahend
     * @return int - Difference between a and b
     */
    int perform(int a, int b) override { return a - b; };

    /**
     * Virtual destructor for the Subtraction_operation class.
     */
    virtual ~Subtraction_operation() {};
};