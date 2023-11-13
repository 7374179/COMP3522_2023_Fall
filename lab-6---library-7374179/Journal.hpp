//
// Created by taehyuk chung on 2023-10-20.
//

#pragma once
#include <string>
#include "Item.hpp"

using namespace std;

class Journal : public Item {
    string author;
    string issue_number;
    string publisher;
public:

    /**
     * Constructor for a Journal object.
     *
     * @param call_num: Call number of the journal.
     * @param title: Title of the journal.
     * @param num_copies: Number of copies available.
     * @param author: Author of the journal.
     * @param issue_number: Issue number of the journal.
     * @param publisher: Publisher of the journal.
     */
    Journal(string call_num, string title, int num_copies,
            string author, string issue_number, string publisher);

    /*
     * Returns the author of the journal.
     */
    string getAuthor() const {
        return author;
    }

    /*
     * Returns the issue number of the journal.
     */
    string getIssueNumber() const {
        return issue_number;
    }

    /*
     * Returns the publisher of the journal.
     */
    string getPublisher() const {
        return publisher;
    }

    /*
     * Overridden function from Item class that returns a string representation of the Journal object.
     */
    string toString() const override;

    /*
     * Destructor of Journal class
     */
    ~Journal() {}
};
