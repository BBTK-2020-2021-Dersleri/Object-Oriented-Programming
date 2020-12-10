#include<iostream>
using namespace std;
class person {
public:
  // properties
  string name;
  int age;
  
  // default constructor	
  person() {
	}
  // overloaded constructor
  person(string _name, int _age) {
	name = _name;
	age = _age;
  }

  // overloaded constructor
  person(string _name) {
	name = _name;
  }
  // destructor	
  ~person() {
	}
};

int main() {
	person p1("arda", 21);
	cout << p1.name << endl;
	cout << p1.age << endl;
	cout << "------------" << endl;
	person p2("ismail");
	cout << p2.name << endl;
	cout << p2.age << endl;

	return 0;
}