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
	void setType(std::string type) {
		this->type = type;
	}
};
class Dog :
	public Animal
{
public:
	Dog() {
		std::cout << "This is a Dog!" << std::endl;
		name = "Spike";
		// type = "Golden" -> error
		setType("Golden");
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
class BabyDog :
	public Dog
{
public:
	BabyDog() {
		std::cout << "This is a Baby Dog!" << std::endl;
		name = "Tyke";
	}
	~BabyDog() {
		std::cout << "The Baby Dog is deleting..." << std::endl;
	}
	// override
	void speak() {
		std::cout << "Weef! Weef! Weef!" << std::endl;
	}
private:

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
	std::cout << "------------ For Baby Dog ------------" << std::endl;
	BabyDog babyDog;
	babyDog.move();
	// babyDog.Dog::speak();
	babyDog.speak();
	babyDog.eat();
	std::cout << "Type: " << babyDog.getType() << std::endl;
	std::cout << "Name: " << babyDog.getName() << std::endl;
	std::cout << std::endl << std::endl;

	std::cout << "babyDog.speak() ";
	babyDog.speak();
	std::cout << "babyDog.Dog::speak() ";
	babyDog.Dog::speak();
	std::cout << "babyDog.Animal::speak() ";
	babyDog.Animal::speak();
	std::cout << std::endl << std::endl;

	return 0;
}