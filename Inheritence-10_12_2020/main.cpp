#include"Dog.h"
#include"Bird.h"
#include"Fish.h"

int main() {
	cout << "---------- For Animal ----------" << endl;
	Animal animal;
	animal.move();
	animal.speak();
	animal.eat();
	cout << "Type: " << animal.getType() << endl;
	cout << "Name: " << animal.getName() << endl;
	cout << "------------ For Dog ------------" << endl;
	Dog dog;
	dog.move();
	dog.speak();
	dog.eat();
	cout << "Type: " << dog.getType() << endl;
	cout << "Name: " << dog.getName() << endl;
	cout << "----------- For Bird -----------" << endl;
	Bird bird;
	bird.move();
	bird.speak();
	bird.eat();
	cout << "Type: " << bird.getType() << endl;
	cout << "Name: " <<bird.getName() << endl;
	cout << "----------- For Fish -----------" << endl;
	Fish fish;
	fish.move();
	fish.speak();
	fish.eat();
	cout << "Type: " << fish.getType() << endl;
	cout << "Name: " << fish.getName();
	cout << endl << endl;

	return 0;
}