#pragma once
#include<iostream>
using namespace std;
class araba
{
private:
	bool sunRoof = false;
	int hiz = 0;
	string marka;
	string renk;
	int hizKilitSiniri = 160;
public:
	araba(string, string, int, bool);
	araba(string m, string r, int h);
	string getMarka();
	string getRenk() const;
	void setRenk(string);
	int getHiz() const;
	bool getSunRoof();
	void setSunRoof(bool);
	void fren();
	void gaz();
};

