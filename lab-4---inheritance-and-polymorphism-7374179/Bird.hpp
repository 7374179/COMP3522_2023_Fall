//
// Created by taehyuk chung on 2023-09-26.
//

#pragma once

#include <iostream>
#include "Animal.hpp"
using namespace std;

class Bird : public Animal{
protected:
    double h;  // Height of position

public:
    /*
      * Default constructor for the Bird class
      * Initializes a Bird object with given or default parameters
      */
    Bird(const int age=0, const double x=0.0, const double y=0.0, const double h=0.0): Animal(age, x, y, h), h(h)
    {
        cout << "bird constructor" << endl;
    }

    /*
     * Copy constructor for the Bird class
     * Initializes a new Bird object as a copy of another Bird object
     */
    Bird(const Bird& newBird): Animal(newBird), h(newBird.h)
    {
        cout << "Bird copy constructor" << endl;
    }

    // Moves the bird to a new (x, y, height) coordinate  // don't need it
    void move(double x, double y, double height) override;

     /*
      * Destructor for the Bird class
      * Handles the destruction of Bird objects and any necessary cleanup
      */
    ~Bird();

    /*
     * Overrides the sleep function from Animal class for the Bird class
     * Prints a message to the console that the Bird is sleeping
     */
    void sleep() override;

    /*
     * Overrides the eat function from Animal class for the Bird class
     * Prints a message to the console that the Bird is eating
     */
    void eat() override;

    //  Returns the "bird" as a string
    virtual string getType() const override;

    /*
     * Overloaded output operator for Bird class
     * Used for printing the details of the Bird object
     */
    friend ostream& operator<<(ostream& os, const Bird& bd){
        os << "[Age=" << bd.getAge() << ", ID=" << bd.getID() << ", alive=" << bd.isLive() << ", location=(" << bd.getX() << ", " << bd.getY() <<", " << bd.h << ")]";
        return os;
    }
};
