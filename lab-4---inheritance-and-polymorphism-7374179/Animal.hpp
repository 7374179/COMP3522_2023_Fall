//
// Created by taehyuk chung on 2023-09-26.
//

#pragma once
#include <iostream>
using namespace std;

class Animal{
private:
    int age;
    static long globalID;
    long ID;
    bool live;
    double x;
    double y;
    double h;

public:
    /*
     * Default constructor of Animal class
     * Initializes an Animal object with given or default parameters
     */
    Animal(const int age=0, const double x=0.0, const double y=0.0, const double h=0.0): age(age), x(x), y(y), h(h)
    {
        ID=globalID++;
        live=true;
        cout << "animal constructor" << endl;
    }

    /*
     * Copy constructor for Animal class
     * Initializes a new Animal object as a copy of another Animal object
     */
    Animal(const Animal& newAnimal): age(newAnimal.age), live(newAnimal.live), x(newAnimal.x), y(newAnimal.y), h(newAnimal.h)
    {
        ID=globalID++;
    }

    /*
     * Destructor for Animal class
     * Handles the destruction of Animal objects and any necessary cleanup
     */
    virtual ~Animal(){
        cout << "Animal deconstructor" << endl;
    };

    // Moves the Animal to a new (x, y) coordinate
    virtual void move(double x, double y);

    // Overloaded move function for moving in three-dimensional space
    virtual void move(double x, double y, double h);

    // Sets the alive status of the Animal
    void setAlive(bool live);

    // Returns the x coordinate of the Animal
    double getX() const {return x;}

    // Returns the y coordinate of the Animal
    double getY() const {return y;}

    // Returns the height of the Animal
    double getH() const {return h;}

    // Returns the age of the Animal
    int getAge() const { return age; }

    // Returns the ID of the Animal
    long getID() const { return ID; }

    // Returns the alive status of the Animal
    bool isLive() const { return live; }

    /*
     * Overloaded output operator for Animal class
     * Used for printing the details of the Animal object
     */
    friend ostream& operator<<(ostream& os, const Animal& ani)
    {
        os << "[Age=" << ani.age << ", " << "ID=" << ani.ID << ", alive=" << ani.live << ", location=(" << ani.x << ", " << ani.y << ", " << ani.h << ")]";
        return os;
    }

    // Causes the Animal to sleep, printing a message to the console
    virtual void sleep();

    // Causes the Animal to eat, printing a message to the console
    virtual void eat();

    // Returns the type of the Animal as a string
    virtual string getType() const;
};

