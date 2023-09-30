//
// Created by taehyuk chung on 2023-09-26.
//

#include "Canine.hpp"

Canine::~Canine()
{
    cout << "Canine deconstructor" << endl;
}

void Canine::move(double x, double y, double h=0)
{
    Animal::move(x, y, h=0);
}

void Canine::sleep()
{
    cout << "Canine is sleeping" << endl;
}

void Canine::eat()
{
    cout << "Canine is eating grass" << endl;
}

void Canine::hunt(Animal& animal){
    if(animal.isLive()
    && abs(this->getX() - animal.getX()) <= 1
    && abs(this->getY()-animal.getY())<=1
    && abs(this->getH()-animal.getH())<=1){
        animal.setAlive(false);
        cout << getType() << " " << getID() << " successfully hunted " << animal.getType() << endl;
    } else{
        cout << "hunt failed" << endl;
    }
}

string Canine::getType() const
{
    return "Canine";
}