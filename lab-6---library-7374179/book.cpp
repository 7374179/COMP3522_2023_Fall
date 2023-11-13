//
// Created by jyim3 on 2022-10-19.
//

#include "book.hpp"

Book::Book(string call_num, string title, int num_copies, string author) : Item(call_num, title, num_copies), author(author) {}

string Book::toString() const {
    string temp =
            "---- Book: " + get_title() + "---\n"
            + "Call Number: " + get_call_number() + "\n"
            + "Number of Copies: " + to_string(get_num_copies()) + "\n"
            + "Author: "  + get_author();
    return temp;
}