//
// Created by taehyuk chung on 2023-10-20.
//

#include "DVD.hpp"

using namespace std;

DVD::DVD(string call_num, string title, int num_copies, string release_date, string region_code)
        : Item(call_num, title, num_copies), release_date(release_date), region_code(region_code) {}

string DVD::toString() const {
    string temp =
            "---- DVD: " + get_title() + "---\n"
            + "Call Number: " + get_call_number() + "\n"
            + "Number of Copies: " + to_string(get_num_copies()) + "\n"
            + "Release Date: "  + getReleaseDate() + "\n"
            + "Region Code: " + getRegionCode();

    return temp;
}