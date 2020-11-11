#include "araba.h"

int main() {
	araba ford("ford", "beyaz", 160);

	ford.gaz();
	cout << "Hiz: " << ford.getHiz() << endl;
	ford.fren();
	ford.fren();
	ford.fren();
	ford.fren();
	ford.fren();
	ford.fren();
	ford.fren();
	ford.fren();
	ford.fren();
	cout << "Hiz: " << ford.getHiz() << endl;
	cout << "Boyamadan once renk: " << ford.getRenk() << endl;
	ford.setRenk("kirmizi");
	cout << "Boyamadan sonra renk: " << ford.getRenk() << endl;

	return 0;
}