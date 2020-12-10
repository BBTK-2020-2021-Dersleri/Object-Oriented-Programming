#pragma once
#include "Animal.h"

class Bird
	: public Animal
{
public:
	Bird() {
		cout << "This is a Bird!" << endl;
		name = "Tweety";
	}
	~Bird() {
		cout << "The Bird is deleting..." << endl;
	}
	void move() {
		cout << "The Bird is flying." << endl;
	}
	void speak() {
		cout << "Chirp! Chirp!" << endl;
	}
};