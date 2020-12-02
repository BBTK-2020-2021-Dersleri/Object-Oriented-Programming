#include<iostream>
using namespace std;

bool isEqual(int, int, int);
bool isEqual(int, int);
bool isEqual(float, float);
bool isEqual(char, char);

int main() {
	char ch = 'A';
	float test = 2.89;
	cout << isEqual(1, 1) << endl;
	cout << isEqual(test, 2.89) << endl;
	cout << isEqual(ch, 'a') << endl;
	cout << isEqual(10, 10, 10) << endl;

	return 0;
}
bool isEqual(int number1, int number2) {
	if (number1 == number2) {
		return true;
	}
	return false;
}
bool isEqual(float number1, float number2) {
	if (number1 == number2) {
		return true;
	}
	return false;
}
bool isEqual(char character1, char character2) {
	if (character1 == character2) {
		return true;
	}
	return false;
}
bool isEqual(int number1, int number2, int number3) {
	if ((number1 == number2) && (number1 == number3) && (number2 == number3)) {
		return true;
	}
	return false;
}