//
// Created by taehyuk chung on 2023-10-20.
//

#include "Catalogue.hpp"
#include <cmath>

Catalogue::Catalogue(vector<Item *> item_list) {
    this->item_list = item_list;
}

void Catalogue::clean_cin() {
    cin.clear(); //clearing out bad bits
    cin.ignore(numeric_limits<streamsize>::max(),'\n'); //clearing garbage in buffer
}

Item * Catalogue::retrieve_item_by_call_number(string call_number)
{
    Item* found_item = nullptr;
    for (Item * library_item : item_list)
    {
        if (library_item->get_call_number() == call_number)
        {
            found_item = library_item;
            break;
        }
    }
    return found_item;
}

vector<Item *> Catalogue::find_items(string title) {
    vector<Item *> title_list;
    for (Item * library_item : item_list) {
        if(title == library_item->get_title()) {
            title_list.push_back(library_item);
        }
    }
    return title_list;
}

void Catalogue::add_item() {
    LibraryItemGenerator::createItem(this->item_list);
}

void Catalogue::remove_item(string call_number) {
    Item * found_item = retrieve_item_by_call_number(call_number);
    if (found_item != nullptr)
    {
        cout << "Successfully removed " << found_item->get_title() <<
             " with call number: " << found_item->get_call_number() << endl;

        for (size_t i=0; i < item_list.size(); i++) {
            if(item_list[i] == found_item)
            {
                item_list.erase(item_list.begin() + i);
                break;
            }
        }
        delete found_item;
    }
    else {
        cout << "item with call number: " << call_number << " not found." << endl;
    }
}

void Catalogue::display_available_items() {
    cout << "Item List" << endl;
    cout << "--------------" << endl << endl;
    for (Item * library_item : item_list) {
        cout << *library_item << endl;
    }
}

bool Catalogue::reduce_item_count(string call_number) {
    Item * library_item = retrieve_item_by_call_number(call_number);
    if (library_item != nullptr) {
        library_item->decrement_number_of_copies();
        return true;
    }
    return false;
}

bool Catalogue::increment_item_count(string call_number) {
    Item * library_item = retrieve_item_by_call_number(call_number);
    if (library_item != nullptr) {
        library_item->increment_number_of_copies();
        return true;
    }
    return false;
}

Catalogue::~Catalogue() {
    for (Item *item : item_list) {
        cout << "delete" << endl;
        delete item;
    }
}
