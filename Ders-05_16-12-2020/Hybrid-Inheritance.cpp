#include<iostream>

class D
{
public:
	D() {
		std::cout << "This is constructor for D class." << std::endl;
	};
	~D() {
		std::cout << "This is destructor for D class." << std::endl;
	};
protected:
	int variable = 123456;
};
class B :
	virtual public D
{
public:
	B() {
		std::cout << "This is constructor for B class." << std::endl;
		variable = 10;
	};
	~B() {
		std::cout << "This is destructor for B class." << std::endl;
	};
private:

};
class C :
	virtual public D
{
public:
	C() {
		std::cout << "This is constructor for C class." << std::endl;
		variable = 20;
	};
	~C() {
		std::cout << "This is destructor for C class." << std::endl;
	};
private:

};
class A :
	public C, public B
{
public:
	A() {
		std::cout << "This is constructor for A class." << std::endl;
	};
	~A() {
		std::cout << "This is destructor for A class." << std::endl;
	};
	void function() {
		std::cout << "Variable: " << variable << std::endl;
	}

private:

};

int main() {

	A a;
	std::cout << std::endl;
	a.function();
	std::cout << std::endl;

	return 0;
}