//Name: Taehyuk Chung
//Student# : A01084553

#include <iostream>
#include "library.hpp"

/*
Return a list of books with dummy data.
:return: a vector of book pointers
*/
vector<Item *> generate_test_books() {
    vector<Item *> book_list;
    book_list.push_back(new Book("100.200.300", "Harry Potter 1", 2, "J K Rowling"));
    book_list.push_back(new DVD("234.535.634", "The Cat in the Hat", 1, "2021-12-24", "Canada-1000"));
    book_list.push_back(new Journal("723.542.327", "National Geographic", 2, "Dr. Seuss", "1522", "National"));
    return book_list;
}



//Creates a library with dummy data and prompts the user for input.
int main() {
    vector<Item *> item_list = generate_test_books();
    Library my_epic_library(item_list);
    my_epic_library.display_library_menu();

    for (Item *item : item_list) {
        delete item;
    }
    //is book_list causing a memory leak?
    return 0;
}
