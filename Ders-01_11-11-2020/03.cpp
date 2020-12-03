#include<iostream>
using namespace std;
class test {
public:
	int y = 2;
	int* x = new int();
	test(int *x) {
		this->x = x;
	}
	// test(const test&) {};
};
int main() {
	int x;
	test t1(&x);
	test t2(t1);
	//int y(2);
	//cout << x << endl;
	cout << "t1 x: " << t1.x << " t2 x: " << t2.x << endl;
	cout << "t1 y: " << &t1.y << " t2 y: " << &t2.y << endl;
	return 0;
}