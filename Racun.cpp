#include "Racun.h"



ostream& operator<<(ostream& os, const Racun& r){
	return os << "R: " << r.brojRacuna << ":=:" << r.iznosNaRacunu << "-"<< r.dohvOznaku() ;
}

Racun& Racun::operator+=(double izn) {
		iznosNaRacunu += izn;
		return *this;
}

Racun& Racun::operator-=(double izn){
	iznosNaRacunu -= izn;
	return *this;
}

 bool Racun::prenos( Racun& na, double izn){
	 if (iznosNaRacunu < izn) return false;
	 na.iznosNaRacunu += izn;
	 this->iznosNaRacunu -= izn;
	 return true;
}
