//
// Created by taehyuk chung on 2023-10-20.
//

#include "LibraryItemGenerator.hpp"
#include <cmath>

using namespace std;

void clean_cin() {
    cin.clear(); //clearing out bad bits
    cin.ignore(numeric_limits<streamsize>::max(),'\n'); //clearing garbage in buffer
}

void LibraryItemGenerator::createItem(vector<Item *> &item_list) {
    cout << "Enter 1 for Book\n 2 for DVD\n 3 for Journal: " << endl;
    int choice;
    cin >> choice;

    switch (choice) {
        case 1:
            add_book(item_list);
            break;
        case 2:
            add_dvd(item_list);
            break;
        case 3:
            add_journal(item_list);
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
    }
}

void LibraryItemGenerator::add_book(vector<Item *> &item_list) {
    cout << "Enter Call Number: " << endl;
    string call_number;
    cin >> call_number;

    cout << "Enter title: " << endl;
    string title;
    clean_cin();
    getline(cin, title);

    cout << "Enter number of copies (positive number): " << endl;
    int num_copies;
    cin >> num_copies;

    cout << "Enter Author Name: " << endl;
    string author;
    clean_cin();
    getline(cin, author);

    Item * new_item = new Book(call_number, title, num_copies, author);

    bool found_item = LibraryItemGenerator::retrieve_item_by_call_number(new_item->get_call_number(), item_list);
    if (found_item)
        cout << "Could not add book with call number " << new_item->get_call_number()
             << ". It already exists. ";
    else {
        item_list.push_back(new_item);
        cout << "book added successfully! book details:" << endl;
        cout << *new_item;
    }
}

void LibraryItemGenerator::add_dvd(vector<Item *> &item_list) {
    cout << "Enter Call Number: " << endl;
    string call_number;
    cin >> call_number;

    cout << "Enter title: " << endl;
    string title;
    clean_cin();
    getline(cin, title);

    cout << "Enter number of copies (positive number): " << endl;
    int num_copies;
    cin >> num_copies;

    cout << "Enter Release Date: " << endl;
    string release_date;
    clean_cin();
    getline(cin, release_date);

    cout << "Enter Region Code: " << endl;
    string region_code;
    clean_cin();
    getline(cin, region_code);

    Item * new_item = new DVD(call_number, title, num_copies, release_date, region_code);

    bool found_item = LibraryItemGenerator::retrieve_item_by_call_number(new_item->get_call_number(), item_list);
    if (found_item)
        cout << "Could not add DVD with call number " << new_item->get_call_number()
             << ". It already exists. ";
    else {
        item_list.push_back(new_item);
        cout << "DVD added successfully! DVD details:" << endl;
        cout << *new_item;
    }
}

void LibraryItemGenerator::add_journal(vector<Item *> &item_list) {
    cout << "Enter Call Number: " << endl;
    string call_number;
    cin >> call_number;

    cout << "Enter title: " << endl;
    string title;
    clean_cin();
    getline(cin, title);

    cout << "Enter number of copies (positive number): " << endl;
    int num_copies;
    cin >> num_copies;

    cout << "Enter Author: " << endl;
    string author;
    clean_cin();
    getline(cin, author);

    cout << "Enter Issue Number: " << endl;
    string issue_number;
    clean_cin();
    getline(cin, issue_number);

    cout << "Enter Publisher: " << endl;
    string publisher;
    clean_cin();
    getline(cin, publisher);

    Item * new_item = new Journal(call_number, title, num_copies, author, issue_number, publisher);

    bool found_item = LibraryItemGenerator::retrieve_item_by_call_number(new_item->get_call_number(), item_list);
    if (found_item)
        cout << "Could not add journal with call number " << new_item->get_call_number()
             << ". It already exists. ";
    else {
        item_list.push_back(new_item);
        cout << "journal added successfully! journal details:" << endl;
        cout << *new_item;
    }
}

bool LibraryItemGenerator::retrieve_item_by_call_number(string call_number, vector<Item *> item_list)
{
    for (Item * library_item : item_list)
    {
        if (library_item->get_call_number() == call_number)
        {
            return true;
        }
    }
    return false;
}

