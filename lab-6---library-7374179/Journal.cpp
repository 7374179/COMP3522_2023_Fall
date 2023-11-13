//
// Created by taehyuk chung on 2023-10-20.
//

#include "Journal.hpp"

using namespace std;

Journal::Journal(string call_num, string title, int num_copies,
                 string author, string issue_number, string publisher)
        : Item(call_num, title, num_copies), author(author), issue_number(issue_number), publisher(publisher) {}

string Journal::toString() const {
    string temp =
            "---- Journal: " + get_title() + "---\n"
            + "Call Number: " + get_call_number() + "\n"
            + "Number of Copies: " + to_string(get_num_copies()) + "\n"
            + "Author: "  + getAuthor() + "\n"
            + "Issue Number: " + getIssueNumber() + "\n"
            + "Publisher: " + getPublisher();
    return temp;
}