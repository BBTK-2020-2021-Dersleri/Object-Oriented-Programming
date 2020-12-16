#include<iostream>

class Animal
{
private:
	std::string type = "Animal";
protected:
	std::string name = "Animal";
public:
	Animal() {
		std::cout << "This is an Animal!" << std::endl;
	}
	~Animal() {
		std::cout << "Animal is deleting..." << std::endl;
	}
	void move() {
		std::cout << "Moving... - Animal" << std::endl;
	}
	void speak() {
		std::cout << "Speaking... - Animal" << std::endl;
	}
	void eat() {
		std::cout << "Eating... - Animal" << std::endl;
	}
	std::string getName() {
		return name;
	}
	std::string getType() {
		return type;
	}
};
class Dog :
	public Animal
{
public:
	Dog() {
		std::cout << "This is a Dog!" << std::endl;
		name = "Spike";
	}
	~Dog() {
		std::cout << "The Dog is deleting..." << std::endl;
	}
	// override
	void move() {
		std::cout << "The Dog is running." << std::endl;
	}
	// override
	void speak() {
		std::cout << "Woof! Woof! Woof!" << std::endl;
	}
};
class Bird
	: public Animal
{
public:
	Bird() {
		std::cout << "This is a Bird!" << std::endl;
		name = "Tweety";
	}
	~Bird() {
		std::cout << "The Bird is deleting..." << std::endl;
	}
	void move() {
		std::cout << "The Bird is flying." << std::endl;
	}
	void speak() {
		std::cout << "Chirp! Chirp!" << std::endl;
	}
};
class Fish
	: public Animal
{
public:
	Fish() {
		std::cout << "This is a Fish!" << std::endl;
		name = "Nemo";
	}
	~Fish() {
		std::cout << "The Fish is deleting..." << std::endl;
	}
	/*void move() {
		std::cout << "The Fish is swimming." << std::endl;
	}*/
	void move(int temp) {
		std::cout << "The Fish is swimming. " << temp << std::endl;
	}
};
int main() {
	std::cout << "---------- For Animal ----------" << std::endl;
	Animal animal;
	animal.move();
	animal.speak();
	animal.eat();
	std::cout << "Type: " << animal.getType() << std::endl;
	std::cout << "Name: " << animal.getName() << std::endl;
	std::cout << "------------ For Dog ------------" << std::endl;
	Dog dog;
	dog.move();
	dog.speak();
	dog.eat();
	std::cout << "Type: " << dog.getType() << std::endl;
	std::cout << "Name: " << dog.getName() << std::endl;
	std::cout << "----------- For Bird -----------" << std::endl;
	Bird bird;
	bird.move();
	bird.speak();
	bird.eat();
	std::cout << "Type: " << bird.getType() << std::endl;
	std::cout << "Name: " << bird.getName() << std::endl;
	std::cout << "----------- For Fish -----------" << std::endl;
	Fish fish;
	fish.Animal::move();
	fish.move(10);
	fish.speak();
	fish.eat();
	std::cout << "Type: " << fish.getType() << std::endl;
	std::cout << "Name: " << fish.getName();
	std::cout << std::endl << std::endl;

	return 0;
}