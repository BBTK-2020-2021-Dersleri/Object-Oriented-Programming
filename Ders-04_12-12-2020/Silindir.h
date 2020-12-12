#pragma once
#include<iostream>
using namespace std;
class Silindir
{
public:
	friend void operator>>(istream& in, Silindir& silindir);
	// ostream& operator<<(ostream& out, Silindir silindir) {

	Silindir() : id(++counter) {
	};
	Silindir(float yukseklik, float yaricap): id(++counter){
		this->yukseklik = yukseklik;
		this->yaricap = yaricap;
	};
	~Silindir() {};
	double yuzeyAlaniHesapla() {
		return (2 * PI * yaricap * yukseklik + 2 * PI * yaricap * yaricap);
	}
	bool hacimKapsama(double hacim) {
		double silindirHacmi = PI * yaricap * yaricap * yukseklik;
		return (silindirHacmi >= hacim);
	}

	Silindir operator++(int) {
		yukseklik++;
		return *this;
	}
	Silindir operator++() {
		yukseklik++;
		return *this;
	}
	Silindir operator+=(float temp) {
		yukseklik += temp;
		return *this;
	}
	Silindir operator-=(float temp) {
		yukseklik -= temp;
		return *this;
	}
	float getYukseklik() const {
		return yukseklik;
	}
	float getYaricap() const {
		return yaricap;
	}
	int getId() const {
		return id;
	}
	void setYukseklik(float yukseklik) {
		this->yukseklik = yukseklik;
	}
	void setYaricap(float yaricap) {
		this->yaricap = yaricap;
	}
	static int getCounter() {
		return counter;
	}
private:
	float yukseklik;
	float yaricap;
	const float PI = 3.14;
	static int counter;
	const int id;
};
