#include<iostream>
using namespace std;
#include"dikdortgen.h"
int main() {
	nokta P1(10, 20), P2(20, 10);
	dikdortgen D1(P1, P2);
	nokta Ph(200, 60);

	if (D1.kapsama(Ph))
		cout << "Icinde!" << endl;
	else 
		cout << "Disarda!" << endl;

	cout << "Ph X -> " << Ph.getX() << " Ph Y -> " << Ph.getY() << endl;
	return 0;
}