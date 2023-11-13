//
// Created by jyim3 on 2022-10-19.
//

#pragma once
#include <vector>
#include <sstream>
#include "book.hpp"
#include "Catalogue.hpp"

using namespace std;

/*
The Library consists of a list of items and provides an
interface for users to check out, return and find items.
*/
class Library {
    Catalogue *catalogue;
public:
    /*
    Intialize the library with a list of items.
    :param item_list: a vector of item pointers
    */
    Library(vector<Item *> item_list);

    /*
    Display the library menu allowing the user to either access the
    list of items, check out, return, find, add, remove a item.
    */
    void display_library_menu();

    /*
    Return an item with the given call number from the library.
    :param call_number: a string
    :precondition call_number: a unique identifier
    */
    void return_item(string call_number);

    /*
    Check out a item with the given call number from the library.
    :param call_number: a string
    :precondition call_number: a unique identifier
    */
    void check_out(string call_number);

    /*
     * Destructor of Library class.
     */
    ~Library();
};
