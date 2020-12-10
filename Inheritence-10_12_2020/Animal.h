#pragma once
#include<iostream>
using namespace std;

class Animal
{
private:
	string type = "Animal";
protected:
	string name = "Animal";
public:
	Animal() {
		cout << "This is an Animal!" << endl;
	}
	~Animal() {
		cout << "Animal is deleting..." << endl;
	}
	void move() {
		cout << "Moving... - Animal" << endl;
	}
	void speak() {
		cout << "Speaking... - Animal" << endl;
	}
	void eat() {
		cout << "Eating... - Animal" << endl;
	}
	string getName() {
		return name;
	}
	string getType() {
		return type;
	}
};