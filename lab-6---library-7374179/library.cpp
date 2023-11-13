//
// Created by jyim3 on 2022-10-19.
//


#include "library.hpp"
#include <limits>

Library::Library(vector<Item *> item_list) {
    this->catalogue = new Catalogue(item_list);
}

void Library::return_item(string call_number) {
    bool status = catalogue->increment_item_count(call_number);
    if (status) {
        cout << "book returned successfully!" << endl;
    }
    else {
        cout << "Could not find book with call number " << call_number
             << ". Return failed." << endl;
    }
}

void Library::check_out(string call_number) {
    Item *library_item = catalogue->retrieve_item_by_call_number(call_number);

    if (library_item->check_availability()) {
        bool status = catalogue->reduce_item_count(call_number);
        if (status)
        {
            cout << "Checkout complete!" << endl;
        }
        else {
            cout << "Could not find book with call number " << call_number << ". Checkout failed." << endl;
        }
    }
    else {
        cout << "No copies left for call number " << call_number << ". Checkout failed." << endl;
    }
}

void Library::display_library_menu() {

    int user_input = -1;

    while (user_input != 7) {
        cout << endl << "Welcome to the Library!!!" << endl;
        cout << "-----------------------" << endl;
        cout << "1. Display all items" << endl;
        cout << "2. Check Out a item" << endl;
        cout << "3. Return a item" << endl;
        cout << "4. Find a item" << endl;
        cout << "5. Add a item" << endl;
        cout << "6. Remove a item" << endl;
        cout << "7. Quit" << endl;

        cout << "Please enter your choice (1-7)" << endl;
        string string_input;
        cin >> string_input;
        stringstream ss{string_input};

        if(ss >> user_input) {
            if (user_input == 1) {
                catalogue->display_available_items();
                //user_input = input("Press Enter to continue")
            }

            else if  (user_input == 2) {
                cout << "Enter the call number of the item"
                        " you wish to check out." << endl;
                string call_number;
                cin >> call_number;
                check_out(call_number);
            }

            else if(user_input == 3) {
                cout << "Enter the call number of the item"
                        " you wish to return." << endl;
                string call_number;
                cin >> call_number;
                return_item(call_number);
            }
            else if (user_input == 4) {
                cout << "Enter the title of the item:" << endl;
                string input_title;

                catalogue->clean_cin();
                getline(cin, input_title);

                vector <Item *> found_titles = catalogue->find_items(input_title);
                cout << "We found the following:" << endl;
                if (found_titles.size() > 0){
                    for(Item *b : found_titles) {
                        cout << *b << endl;
                    }
                }
                else {
                    cout <<"Sorry! We found nothing with that title" << endl;
                }
            }
            else if (user_input == 5) {
                catalogue->add_item();
            }
            else if (user_input == 6) {
                cout << "Enter the call number of the item" << endl;
                string call_number;
                cin >> call_number;
                catalogue->remove_item(call_number);
            }
            else if (user_input == 7) {
                cout << "Thank you for visiting the Library." << endl;
                return;
            }
        }
        else {
            cout << "Could not process the input. Please enter a"
                    " number from 1 - 7." << endl;

            cout << "Thank you for visiting the Library." << endl;
        }
    }
}

Library::~Library() {
    delete this->catalogue;
}
