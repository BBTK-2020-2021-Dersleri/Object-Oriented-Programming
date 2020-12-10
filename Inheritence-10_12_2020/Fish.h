#pragma once
#include "Animal.h"

class Fish
	: public Animal
{
public:
	Fish() {
		cout << "This is a Fish!" << endl;
		name = "Nemo";
	}
	~Fish() {
		cout << "The Fish is deleting..." << endl;
	}
	void move() {
		cout << "The Fish is swimming." << endl;
	}
};
