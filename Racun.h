#ifndef _Racun_h_
#define _Racun_h_

#include <exception>
using namespace std;
#include "Osoba.h"


class Racun {
	
	int brojRacuna;
	double iznosNaRacunu;

	Racun(const Racun&) = delete;
	Racun& operator=(const Racun&) = delete;
protected:
	Osoba* vlasnik;
public:

	Racun( Osoba* vlasnik, int brojRacuna)  {
		this->vlasnik = vlasnik;
		this->brojRacuna = brojRacuna;	
		iznosNaRacunu = 0;		
	}
	

	virtual string dohvOznaku()const = 0;

	Osoba* dohvOsobu()const { return vlasnik; }
	int dohvBrojR()const { return brojRacuna; }
	double dohvIznos()const { return iznosNaRacunu; }


	 Racun& operator+=(double izn);
	 Racun& operator-=(double izn);

	
	 bool prenos( Racun& sa,double izn);

	friend ostream& operator<<(ostream& os, const Racun& r);


};


#endif

