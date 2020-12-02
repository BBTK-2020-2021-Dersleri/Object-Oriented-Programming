#include<iostream>
using namespace std;
class ComplexNumber
{
public:
	friend istream& operator>>(istream& in, ComplexNumber& complexNumber);
	// Constructor
	ComplexNumber() {}
	// Overloaded Constructor
	ComplexNumber(int re, int im) {
		this->re = re;
		this->im = im;
	}
	// Destructor
	~ComplexNumber() {}
	// Getter Method for im
	int getIm() const {
		return im;
	}
	// Getter Method for re
	int getRe() const {
		return re;
	}
	// Overloaded == operator 
	bool operator==(ComplexNumber complexNumber) const {
		if (this->im == complexNumber.im && this->re == complexNumber.re)
			return true;
		return false;
	}
	// (2 + 3i) + (5 + 9i) = 7 + 12i
	// Overloaded + operator
	ComplexNumber operator+(ComplexNumber complexNumber) {
		ComplexNumber resultComplexNumber;
		resultComplexNumber.im = this->im + complexNumber.im;
		resultComplexNumber.re = this->re + complexNumber.re;
		return resultComplexNumber;
	}

	ComplexNumber add(ComplexNumber complexNumber) {
		ComplexNumber resultComplexNumber;
		resultComplexNumber.im = this->im + complexNumber.im;
		resultComplexNumber.re = this->re + complexNumber.re;
		return resultComplexNumber;
	}

private:
	int re;
	int im;
};
// Overload << operator
ostream& operator <<(ostream& out, ComplexNumber complexNumber) {
	if (complexNumber.getIm() < 0)
		out << complexNumber.getRe() << complexNumber.getIm() << "i" << endl; // 4-6i
	else
		out << complexNumber.getRe() << "+" << complexNumber.getIm() << "i" << endl; // 4+6i
	return out;
}

istream& operator>>(istream& in, ComplexNumber& complexNumber) {
	in >> complexNumber.re >> complexNumber.im;
	return in;
}


int main() {
	ComplexNumber complexNumber1(1, -2), complexNumber2(3, 4), complexNumber3;

	// complexNumber3 = complexNumber1.add(complexNumber2); // add function
	complexNumber3 = complexNumber1 + complexNumber2; // + operator
	
	// << operator
	cout << "complexNumber1 " << complexNumber1;// print <re> + <im>i
	cout << "complexNumber2 " << complexNumber2; // print <re> + <im>i
	cout << "complexNumber3 " << complexNumber3; // print <re> + <im>i

	if (complexNumber1 == complexNumber2) // == operator
		cout << "complexNumber1 and complexNumber2 are EQUAL!" << endl;
	else
		cout << "complexNumber1 and complexNumber2 are NOT EQUAL!" << endl;


	cin >> complexNumber3;
	cout << complexNumber3;
	return 0;
}