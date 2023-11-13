// Course.h
#include <iostream>

using namespace std;
class Course {

public:
    // Enum to represent the days of the week for courses.
    enum dayOfWeek {MON, TUE, WED, THUR, FRI};

    // Constructor to create a Course object with a title, day, start and finish times.
    Course (string title, dayOfWeek day, unsigned int start_time, unsigned int finish_time);

    // Copy constructor for creating a Course object from another Course object.
    Course (const Course & m);

    // Assignment operator to assign the values from one Course object to another.
    Course & operator = (Course m);

    // Comparison operator to compare two Course objects based on some criteria, such as start time.
    bool operator < (const Course & m) const;

    // Equality operator to check if two Course objects represent the same course.
    bool operator == (const Course & m) const;

    // Helper operator for output
    friend ostream &operator << (ostream &os, const Course & m);

private:
    string title; // Name of Course
    dayOfWeek day; // Day of Course
    unsigned int start_time; // Course start time in HHMM format
    unsigned int finish_time; // Course finish time in HHMM format
};
