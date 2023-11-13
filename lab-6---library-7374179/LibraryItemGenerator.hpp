//
// Created by taehyuk chung on 2023-10-20.
//

#pragma once
#include "Item.hpp"
#include "book.hpp"
#include "DVD.hpp"
#include "Journal.hpp"
#include "Catalogue.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class LibraryItemGenerator {
private:
    /*
     * static private support function for createItem static function that adds a new Book object
     * pointer in item_list vector in Catalogue class.
     */
    static void add_book(vector<Item *> &item_list);

    /*
     * static private support function for createItem static function that adds a new DVD object
     * pointer in item_list vector in Catalogue class.
     */
    static void add_dvd(vector<Item *> &item_list);

    /*
     * static private support function for createItem static function that adds a new Journal object
     * pointer in item_list vector in Catalogue class.
     */
    static void add_journal(vector<Item *> &item_list);

    /*
     * static private support function for createItem static function that returns
     * ture if item pointer exists in current item_list from Catalogue class.
     */
    static bool retrieve_item_by_call_number(string call_number, vector<Item *> item_list);

public:

    /**
     * public static function called by Catalogue class.
     *
     * @param item_list A current Item pointer vector that new Item object to be added.
     */
    static void createItem(vector<Item *> &item_list);

    /*
     * Destructor of LibraryItemGenerator class.
     */
    ~LibraryItemGenerator() {}
};