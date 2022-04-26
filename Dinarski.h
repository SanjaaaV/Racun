#ifndef _Dinarski_h_
#define _Dinarski_h_
#include "Racun.h"

class Dinarski :public Racun {
public:
	Dinarski(  Osoba* vlasnik, int brojRacuna) :Racun(vlasnik, brojRacuna) {}
	
	string dohvOznaku()const override { return "RSD"; }

	
};



#endif
