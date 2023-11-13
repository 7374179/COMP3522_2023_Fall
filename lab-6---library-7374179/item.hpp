//
// Created by taehyuk chung on 2023-10-20.
//

#pragma once
#include <string>
#include <iostream>

using namespace std;

class Item {
protected:
    string call_num;
    string title;
    int num_copies;
public:

    /**
     * Constructor for an Item object.
     *
     * @param call_num: Call number of the item.
     * @param title: Title of the item.
     * @param num_copies: Number of copies available.
     */
    Item(string call_num, string title, int num_copies)
            : call_num(call_num), title(title), num_copies(num_copies) {}

    /*
    Returns the title of the book
    :return: a string
    */
    string get_title() const{
        return title;
    }

    /*
    Returns the call number of the book
    :return: a string
    */
    string get_call_number() const{
        return call_num;
    }

    /*
    Adds the number of copies of a book
    */
    void increment_number_of_copies() {
        num_copies += 1;
    }

    /*
    Decrements the number of copies of a book
    */
    void decrement_number_of_copies() {
        num_copies -= 1;
    }

    /*
    Returns the number of copies that are available for this
    specific book.
    :return: an int
    */
    int get_num_copies() const {
        return num_copies;
    }

    /*
    Returns True if the book is available and False otherwise
            :return: A Boolean
    */
    bool check_availability() const {
        if (num_copies > 0) {
            return true;
        }
        else {
            return false;
        }
    }

    /*
     * Pure-virtual toString function for child class
     */
    virtual string toString() const = 0;

    /**
     * Overloaded << operator to allow streaming the string representation of an Item to an ostream.
     *
     * @param os The output stream.
     * @param item The Item object to be streamed.
     * @return The output stream after streaming the Item.
     */
    friend ostream& operator<<(ostream& os, const Item& item) {
        os << item.toString() << endl;
        return os;
    }

    /*
     * Virtual destructor of Item class.
     */
    virtual ~Item() {}
};
