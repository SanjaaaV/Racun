#include "Osoba.h"
#include "Dinarski.h"
#include "Greske.h"
#include "Banka.h"



int main() {
	try {
		Datum d1(2, 5, 1995);
		Datum d2(5, 12, 1990);

		Osoba o1("Zika", "258569583265", d1);
		Osoba o2("Sara", "2563256985452", d2);


		Dinarski r1(&o1, 256953);
		Dinarski r2(&o2, 523652);

		cout << "r1:  " << r1 << endl;
		cout << "r2:  " << r2 << endl << endl;;

		r1 += 36000;
		r2 += 25000;

		cout  << r1 << endl;
		cout << r2 << endl << endl;

		r1.prenos(r2, 30000);

		cout  << r1 << endl;
		cout  << r2 << endl << endl;

		Banka b1("UniKredit",10);
		b1 += &r1;
		b1 += &r2;
		

		cout << b1;

		
		
	}
	catch (exception e) {
		cout << e.what();
	};

	return 1;

}