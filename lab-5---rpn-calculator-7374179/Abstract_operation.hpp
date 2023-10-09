//
// Created by user on 10/2/2023.
//

#pragma once

#include <iostream>
#include "Operation.hpp"

using namespace std;

/**
 * This class extends the Operation class and provides a base for concrete operation
 * classes. It holds an operation type to distinguish between different operations.
 */
class Abstract_operation : public Operation {
private:
    char operation_type; // The symbolic representation of the operation (e.g., '+', '-', '*')

public:
    /**
     * Default constructor for Abstract_operation.
     * Initializes the operation type to a default value.
     */
    Abstract_operation();

    /**
     * Parameterized constructor for Abstract_operation.
     * Initializes the operation type to the provided character.
     * @param type Character representing the type of operation.
     */
    Abstract_operation(char type) { operation_type = type; }

    /**
     * Retrieves the operation type.
     * Returns the character representing the specific operation.
     * @return char representing the operation.
     */
    char get_code() override { return operation_type; }

    /**
     * Virtual destructor for the Abstract_operation class.
     * Ensures that objects of derived classes are destroyed properly.
     */
    virtual ~Abstract_operation() {};
};