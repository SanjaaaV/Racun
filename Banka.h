#ifndef _Banka_h_
#define _Banka_h_
#include <string>
#include "Niz.h"
#include "Dinarski.h"

class Banka: Niz<Dinarski*>{
	string nazivBanke;
public:
	Banka(string naziv,int d):Niz<Dinarski*>(d),nazivBanke(naziv){}

	Banka(const Banka&) = delete;
	Banka& operator=(const Banka&) = delete;

	Banka& operator+=( Dinarski* d) {
		dodaj(d);
		return *this;
	}

	friend ostream& operator<<(ostream& os,const Banka& b) {
		os << "Lista racuna banke" <<b.nazivBanke<< endl;
		for (int i = 0; i < b.dohvTrenBroj(); i++) {
			os << *b[i] << endl;
		}
		return os;

	}
	
};

#endif