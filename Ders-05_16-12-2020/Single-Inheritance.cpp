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
	std::cout << std::endl << std::endl;

	return 0;
}