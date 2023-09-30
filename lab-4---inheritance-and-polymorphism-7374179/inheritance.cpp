/*
 * Taehyuk Chung
 * A01084553
 */

#include <iostream>
#include "Animal.hpp"
#include "Bird.hpp"
#include "Canine.hpp"

using namespace std;

int main() {
    cout << "---Create all animals---" << endl;

    Animal *animalPtr = new Animal(10, 2, 8);
    Animal *birdPtr = new Bird(15, 6, 3, 7);
    Animal *caninePtr = new Canine(15, 8, 5);
    cout << "" << endl;

    cout << "---Print all animals---" << endl;
    cout << "Animal:" << *animalPtr << endl;
    cout << "Bird:" << *birdPtr << endl;
    cout << "Canine:" << *caninePtr << endl;
    cout << "" << endl;

    cout << "---Make all animals move and print---" << endl;
    animalPtr->move(1, 1);
    birdPtr->move(1, 2, 0);
    caninePtr->move(1,2,5);
    cout << "Animal " << animalPtr->getID() << " moved to (" << animalPtr->getX() << ", " << animalPtr->getY() << " ,0)" << endl;
    cout << "Bird " << birdPtr->getID() << " moved to (" << birdPtr->getX() << ", " << birdPtr->getY() << " ,0)" << endl;
    cout << "Canine " << caninePtr->getID() << " moved to (" << caninePtr->getX() << ", " << caninePtr->getY() << " ,0)" << endl;
    cout << "Animal:" << *animalPtr << endl;
    cout << "Bird:" << *dynamic_cast<Bird*>(birdPtr) << endl;
    cout << "Canine:" << *caninePtr << endl;
    cout << "" << endl;

    cout << "---Make all animals sleep---" << endl;
    animalPtr->sleep();
    birdPtr->sleep();
    caninePtr->sleep();
    cout << "" << endl;

    cout << "Make all animals eat---" << endl;
    animalPtr->eat();
    birdPtr->eat();
    caninePtr->eat();
    cout << "" << endl;

    cout << "---Make canine hunt bird---" << endl;
    ((Canine*)caninePtr)->hunt(*birdPtr);
    cout << "" << endl;

    cout << "---Print all animals at end---" << endl;
    cout << "Animal:" << *animalPtr << endl;
    cout << "Bird:" << *birdPtr << endl;
    cout << "Canine:" << *caninePtr << endl;
    cout << "" << endl;

    cout << "---Delete dynamic memory---" << endl;
    delete animalPtr;
    delete birdPtr;
    delete caninePtr;

    return 0;
}
