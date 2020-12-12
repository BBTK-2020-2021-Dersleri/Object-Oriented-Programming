#pragma once
#include "Animal.h"

class Dog :
    public Animal
{
public:
    Dog() {
        cout << "This is a Dog!" << endl;
        name = "Spike";
    }
    ~Dog() {
        cout << "The Dog is deleting..." << endl;
    }
    // override
    void move() {
        cout << "The Dog is running." << endl;
    }
    // override
    void speak() {
        cout << "Woof! Woof! Woof!" << endl;
    }
};
