#include"Silindir.h"

//void operator+=(Silindir& silindir, float temp) {
//	int geciciYukskelik = silindir.getYukseklik();
//	geciciYukskelik += temp;
//	silindir.setYukseklik(geciciYukskelik);
//}
ostream& operator<<(ostream& out, Silindir silindir) {
	out << "Silindir Yukseklik: " << silindir.getYukseklik() << endl << "Silindir Yaricap: " << silindir.getYaricap() << endl;
	return out;
}
//istream& operator>>(istream& in, Silindir &silindir) {
//	float yukseklik, yaricap;
//	in >> yukseklik >> yaricap;
//	silindir.setYukseklik(yukseklik);
//	silindir.setYaricap(yaricap);
//	return in;
//}
void operator>>(istream& in, Silindir& silindir) {
	in >> silindir.yukseklik >> silindir.yaricap;
}
int Silindir::counter = 0;

int main() {
	//Silindir* silindir = new Silindir[5];
	//cout << silindir[0].getId() << endl;
	//cout << silindir[1].getId() << endl;
	//cout << silindir[2].getId() << endl;
	//cout << silindir[3].getId() << endl;
	Silindir silindir(5, 3);
	silindir++;
	cout << silindir;
	++silindir;
	cout << silindir;

	return 0;
}
