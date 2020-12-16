#include<iostream>

class B
{
public:
	B() {
		std::cout << "This is constructor for B class." << std::endl;
	};
	~B() {
		std::cout << "This is destructor for B class." << std::endl;
	};
	void function() {
		std::cout << "Function of B class" << std::endl;
	}
private:

};
class C
{
public:
	C() {
		std::cout << "This is constructor for C class." << std::endl;
	};
	~C() {
		std::cout << "This is destructor for C class." << std::endl;
	};
	void function() {
		std::cout << "Function of C class" << std::endl;
	}
private:

};
class A : 
	public B, public C
{
public:
	A() {
		std::cout << "This is constructor for A class." << std::endl;
	};
	~A() {
		std::cout << "This is destructor for A class." << std::endl;
	};

private:

};

int main() {
	
	A a;
	std::cout << std::endl;
	a.C::function();
	a.B::function();
	std::cout << std::endl;

	return 0;
}