#ifndef _Osoba_h_
#define _Osoba_h_
#include <string>
#include "Datum.h"



class Osoba {
	string ime;
	string maticniBroj;
	Datum datum;

public:
	 Osoba(string i,string mb, Datum d):datum(d) {
		ime = i;
		maticniBroj = mb;
	}


	Osoba(const Osoba&) = delete;
	Osoba& operator=(const Osoba&) = delete;
	
	

	string dohvIme()const { return ime; }
	string dohvMaticniBroj()const { return maticniBroj; }
	Datum dohvDatum()const { return datum; }

	friend ostream& operator<<(ostream& os, const Osoba& o);

};



#endif
