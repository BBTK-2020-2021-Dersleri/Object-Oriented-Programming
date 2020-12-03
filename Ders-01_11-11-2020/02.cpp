#include<iostream>
using namespace std;
class insan {
public:
	string ad;
	int yas;
	
	insan(string _ad, int _yas) {
		ad = _ad;
		yas = _yas;
	}

	insan(string _ad) {
		ad = _ad;
	}
	
};
int main() {
	insan i1("arda", 21);
	cout << i1.ad << endl;
	cout << i1.yas << endl;
	cout << "------------" << endl;
	insan i2("ismail");
	cout << i2.ad << endl;
	cout << i2.yas << endl;

	return 0;
}