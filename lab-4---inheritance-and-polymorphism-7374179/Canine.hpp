//
// Created by taehyuk chung on 2023-09-26.
//

#pragma once
#include <iostream>
#include "Animal.hpp"
using namespace std;

/*
 * Canine class, derived from Animal class.
 * Represents a generic canine animal with the ability to move and hunt.
 */
class Canine : public Animal{
public:
    /*
     * Parameterized constructor for Canine class.
     * PRE: age is the age of the canine. Default is 0.
     * PRE: x and y represent the initial coordinates. Default is 0.0.
     * POST: A Canine object is created with the given age, and x and y coordinates.
     */
    Canine(const int age=0, const double x=0.0, const double y=0.0, const double h=0.0) : Animal(age,x, y, h)
    {
        cout << "canine constructor" << endl;
    }

    /*
     * Copy constructor for Canine class.
     * PRE: newCanine is a reference to an existing Canine object.
     * POST: A new Canine object is created as a copy of newCanine.
     */
    Canine(const Canine& newCanine):Animal(newCanine)
    {
        cout << "Canine copy constructor" << endl;
    }

    /*
     * Destructor for Canine class.
     * POST: Outputs a message indicating the Canine object is being destroyed.
     */
    ~Canine();

    /*
     * Move method for Canine class.
     * PRE: x, y, and h are the new coordinates.
     * POST: The Canine object's coordinates are updated.
     */
    void move(double x, double y, double h) override;

    /*
     * Sleep method for Canine class.
     * POST: Outputs a message indicating the Canine is sleeping.
     */
    void sleep() override;

    /*
     * Eat method for Canine class.
     * POST: Outputs a message indicating the Canine is eating grass.
     */
    void eat() override;

    /*
     * Hunt method for Canine class.
     * PRE: animal is a reference to an Animal object.
     * POST: If conditions are met, the Animal object is set to not alive.
     */
    void hunt(Animal& animal);

    /*
     * getType method for Canine class.
     * POST: Returns a string representing the type of animal ("Canine").
     */
    virtual string getType() const override;

    /*
     * Non-member (friend) overloaded insertion operator for the Canine class.
     * PRE: os is a reference to an output stream (e.g., cout)
     * PRE: ca is a reference to an existing Canine object
     * POST: Outputs the details of the Canine object to the provided output stream.
     */
    friend ostream& operator<<(ostream& os, const Canine& ca){
        os << static_cast<const Animal&>(ca);
        return os;
    }
};

