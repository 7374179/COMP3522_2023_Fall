//
// Created by taehyuk chung on 2023-10-20.
//

#pragma once
#include "book.hpp"
#include "DVD.hpp"
#include "Journal.hpp"
#include "LibraryItemGenerator.hpp"
#include "vector"

class Catalogue {
private:
    vector<Item *> item_list;
public:

    Catalogue(vector<Item *> item_list);

    void clean_cin();

    /*
    A private method that encapsulates the retrieval of an item with
            the given call number from the library.
    :param call_number: a string
    :return: item pointer
    */
    Item * retrieve_item_by_call_number(string call_number);

    /*
    Find item with the same title.
    :param title: a string
    :return: a vector of item pointers.
    */
    vector<Item *> find_items(string title);

    /*
    Add a brand new item to the library with a unique call number.
    */
    void add_item();

    /*
    Add a brand new book to the library with a unique call number.
    */
    void add_book();

    /*
    Add a brand new DVD to the library with a unique call number.
    */
    void add_dvd();

    /*
    Add a brand new Journal to the library with a unique call number.
    */
    void add_journal();

    /*
    Remove an existing item from the library
            :param call_number: a string
            :precondition call_number: a unique identifier
    */
    void remove_item(string call_number);

    //Display all the items in the library.
    void display_available_items();

    /*
    Decrement the item count for an item with the given call number
            in the library.
    :param call_number: a string
    :precondition call_number: a unique identifier
            :return: True if the item was found and count decremented, false
    otherwise.
    */
    bool reduce_item_count(string call_number);

    /*
    Increment the item count for an item with the given call number
            in the library.
    :param call_number: a string
    :precondition call_number: a unique identifier
            :return: True if the item was found and count incremented, false
    otherwise.
    */
    bool increment_item_count(string call_number);

    /*
     * Destructor of Catalogue class.
     */
    ~Catalogue();
};
