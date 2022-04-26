#ifndef _Datum_h_
#define _Datum_h_
#include <exception>
#include <iostream>
using namespace std;

class Gneispravandatum :public exception
{
public:
	Gneispravandatum() :exception("Datum nije validan!") {}
};

class Datum {
	int dan, mesec, godina;



	bool okDatum(int d, int m, int g) {

		if (d > 0) {
			switch (m) {
			case 1: case 3: case 5: case 7: case 8: case 10: case 12:
				if (d <= 31) return true;
				else break;

			case 4: case 6:  case 9: case 11:
				if (d <= 30) return true;
				else break;

			case 2:
				if (!(g % 4) && ((g % 100) || !(g % 400))) {
					if (d <= 29) return true;
				}
				else if (d <= 28) return true;



				break;

			}
		}

		return false;

	}


public:
	Datum(int d = 1, int mes = 1, int god = 2021) {
		if (okDatum(d, mes, god)) {
			dan = d;
			mesec = mes;
			godina = god;
		}
		else throw Gneispravandatum();
	}

	friend ostream& operator<<(ostream& os, const Datum& d) {
		return os << d.dan << "." << d.mesec << "." << d.godina;
	}
	friend bool operator==(const Datum& d1, const Datum& d2);



};




#endif


