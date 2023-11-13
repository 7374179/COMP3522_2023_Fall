//
// Created by taehyuk chung on 2023-10-20.
//

#pragma once
#include <string>
#include "Item.hpp"

using namespace std;

class DVD : public Item {
    string release_date;
    string region_code;

public:

    /**
     * Constructor for DVD object.
     *
     * @param call_num: Call number of the DVD.
     * @param title: Title of the DVD.
     * @param num_copies: Number of copies available.
     * @param release_date: Release date of the DVD.
     * @param region_code: Region code of the DVD.
     */
    DVD(string call_num, string title, int num_copies, string release_date, string region_code);

    /*
     * Returns the release date of the DVD.
     */
    string getReleaseDate() const {
        return release_date;
    }

    /*
     * Returns the region code of the DVD.
     */
    string getRegionCode() const {
        return region_code;
    }

    /*
     * Overridden function from Item class that returns a string representation of the DVD object.
     */
    string toString() const override;

    /*
     * Destructor of DVD class
     */
    ~DVD() {}
};
