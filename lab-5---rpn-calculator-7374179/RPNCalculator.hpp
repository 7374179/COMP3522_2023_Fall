//
// Created by user on 10/3/2023.
//

#pragma once

#include <iostream>
#include <stack>
#include <sstream>
#include "Operation.hpp"
#include "Addition_operation.hpp"
#include "Subtraction_operation.hpp"
#include "Multiplication_operation.hpp"
#include "Division_operation.hpp"

using namespace std;

/**
 * This class provides functionalities to evaluate expressions given in
 * Reverse Polish Notation (RPN) format. It uses a stack to process
 * the operands and operations in the provided RPN formula.
 */
class RPNCalculator {
private:
    int result;     // Result of the RPN expression evaluation
    std::stack<int> stack;      // Stack to store operands and intermediate results

    /**
     * Determines the type of the operation based on the provided operation character.
     * @param operation - Character representing an arithmetic operation.
     * @return Operation* - Pointer to the specific operation object.
     */
    Operation *operation_type(char operation) {
        switch (operation) {
            case Addition_operation::ADDITION_CODE:
                return new Addition_operation();
            case Subtraction_operation::SUBTRACTION_CODE:
                return new Subtraction_operation();
            case Multiplication_operation::MULTIPLICATION_CODE:
                return new Multiplication_operation();
            case Division_operation::DIVISION_CODE:
                return new Division_operation();
            default:
                return nullptr;
        }
    }

    /**
     * Performs the given operation on the top two elements from the stack.
     * The result of the operation is then pushed back onto the stack.
     *
     * @param operation - Pointer to the operation to be performed.
     */
    void perform(Operation *operation) {
        int b = stack.top();
        stack.pop();
        int a = stack.top();
        stack.pop();
        result = operation->perform(a, b);
        stack.push(result);
    }

public:
    /**
     * Processes the given RPN formula and returns the result of its evaluation.
     *
     * @param formula - RPN expression in string format.
     * @return int - Result of the RPN expression evaluation.
     */
    int process_formula(string formula) {
        istringstream iss(formula);
        string operand;
        while (iss >> operand) {
            istringstream iss2(operand);
            int num;
            if (iss2 >> num) {
                stack.push(num);
            } else {
                Operation *op = operation_type(operand[0]);
                if (op) {
                    perform(op);
                    delete op;
                }
            }
        }
        if (!stack.empty()) {
            return stack.top();
        } else {
            return 0;
        }
    }
};