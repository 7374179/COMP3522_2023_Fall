//
// Created by taehyuk chung on 2023-09-26.
//

#include "Bird.hpp"

void Bird::move(double x, double y, double height)
{
    Animal::move(x, y);
    this->h=height;
}

Bird::~Bird()
{
    cout << "Bird deconstructor" << endl;
}

void Bird::sleep()
{
    cout << "Bird is sleeping" << endl;
}

void Bird::eat()
{
    cout << "Bird is eating a worm" << endl;
}

string Bird::getType() const
{
    return "Bird";
}