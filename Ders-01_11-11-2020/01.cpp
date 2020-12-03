#include<iostream>
using namespace std;
class dikdortgenlerPrizmasi {
public:

	// ozellikler
	int yukseklik;
	int genislik;
	int derinlik;

	// metotlar
	void yuzeyAlaniHesapla() {
		cout << "Yuzey alani: " << 2 * (yukseklik * genislik + yukseklik * derinlik + genislik * derinlik) << endl;
	}

	void hacimHesapla() {
		cout << "Hacim: " << yukseklik * genislik * derinlik << endl;
	}
};


int main() {
	dikdortgenlerPrizmasi d1;
	d1.derinlik = 2;
	d1.genislik = 3;
	d1.yukseklik = 4;
	d1.hacimHesapla();
	cout << "-----------------------" << endl;
	dikdortgenlerPrizmasi d2;
	d2.derinlik = 5;
	d2.genislik = 5;
	d2.yukseklik = 5;
	d2.hacimHesapla();

	return 0;
}