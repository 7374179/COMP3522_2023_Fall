//Name: Taehyuk Chung
//Student# : A01084553

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <fstream>
#include <string>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include "Course.hpp"

using namespace std;

/*
 * print schedule - outputs course schedule to the screen
 * @param - add any new parameters you need
 */
void printSchedule(const vector<Course>& courses)
{
    //TODO implement your print using the copy algorithm, 2 iterators, and an ostream_iterator
    std::ostream_iterator<Course> out_it(std::cout, "\n");
    std::copy(courses.begin(), courses.end(), out_it);
}

Course::dayOfWeek charToDayOfWeek(char c);

int main () {
    vector<Course> v;
    string title; // Name of Course
    char dayChar; // Day of Course
    unsigned int start_time; // Course start time in HHMM format
    unsigned int finish_time; // Course finish time in HHMM format

    //TODO read from courses.txt
    fstream fs("../courses.txt");
    if(!fs.is_open()){
        cerr << "Unable to open file" << endl;
        exit(1);
    }

    //TODO store data in an STL container
    while(fs >> title >> dayChar >> start_time >> finish_time){
        Course::dayOfWeek day = charToDayOfWeek(dayChar); // Convert character to enum
        Course c(title, day, start_time, finish_time);
        v.push_back(c);
    }

    //TODO sort your STL container with the sort algorithm
    std::sort(v.begin(), v.end());

    //TODO implement code to determine schedule conflicts
    //TODO print out schedule conflicts
    for(auto it = v.begin(); it != v.end()-1; ++it) {
        for (auto it2 = it + 1; it2 != v.end(); ++it2) {
            if (*it == *it2) {
                cout << "CONFLICT:" << endl;
                cout << *it << endl;
                cout << *it2 << endl;
                cout << endl;
            }
        }
    }

    //TODO print out schedule
    printSchedule(v);
//    cout << "Find the TODOs in the code and implement them." << endl;
//    cout << "Add/modify any functions/code you need to complete your task." << endl;
    return 0;
}
