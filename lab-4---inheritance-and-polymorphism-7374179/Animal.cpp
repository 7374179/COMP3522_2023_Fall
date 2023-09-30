//
// Created by taehyuk chung on 2023-09-26.
//

#include "Animal.hpp"

// Initializing the static variable globalID to 0
long Animal::globalID = 0;

void Animal::move(double x, double y)
{
    this->x=x;
    this->y=y;
}

void Animal::move(double x, double y, double h)
{
    this->x=x;
    this->y=y;
    this->h=h;
}

void Animal::setAlive(bool live)
{
    this->live = live;
}

void Animal::sleep()
{
    cout << "Animal is sleeping" << endl;
}

void Animal::eat()
{
    cout << "Animal is eating something" << endl;
}

string Animal::getType() const {
    return "Animal";
}