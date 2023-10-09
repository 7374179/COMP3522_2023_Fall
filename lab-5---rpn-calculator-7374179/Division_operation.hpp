//
// Created by user on 10/2/2023.
//

#pragma once

#include <iostream>
#include "Abstract_operation.hpp"

using namespace std;

/**
 * This class represents the division operation in a calculator.
 * It is derived from the Abstract_operation class and implements the perform method
 * to carry out the division operation.
 */
class Division_operation : public Abstract_operation {
public:
    // Static constant to represent the operation code for division.
    static const char DIVISION_CODE = '/';

    /**
     * Default constructor.
     * Initializes the operation type with the DIVISION_CODE.
     */
    Division_operation() : Abstract_operation(DIVISION_CODE) {};

    /**
     * Overrides the perform function from the Abstract_operation class.
     *
     * @param a - Dividend
     * @param b - Divisor
     * @return int - Result of the division of a by b
     */
    int perform(int a, int b) override { return a / b; };

    /**
     * Virtual destructor for the Division_operation class.
     */

    virtual ~Division_operation() {};
};