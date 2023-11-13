//
// Created by jyim3 on 2022-10-19.
//

#pragma once

#include <iostream>
#include "Item.hpp"
using namespace std;

/*
    Represents a single book in a library which is identified through
    it's call number.
*/
class Book : public Item {

private:
    string author;

public:
    /*
    :param call_num: a string
    :param title: a string
    :param num_copies: an int
    :param author: a string
    :precondition call_num: a unique identifier
    :precondition num_copies: a positive integer
    */
    Book(string call_num, string title, int num_copies, string author);

    /*
    Returns the author of the book
    :return: a string
    */
    string get_author() const {
        return author;
    }

    /*
     * Overridden function from Item class that returns a string representation of the Book object.
     */
    string toString() const override;

    /*
     * Destructor for Book class.
     */
    ~Book() {}
};
