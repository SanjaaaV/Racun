#ifndef _Niz_h_
#define _Niz_h_
#include "Greske.h"
#include <iostream>

template <typename T>
class Niz{
	T* niz;
	int dimNiza;
	int broj;


	/*void kopiraj(const Niz& n);
	void premesti(const Niz& n) {
		niz = n.niz;
		dimNiza = n.dimNiza;

		n.niz = nullptr;
	}*/
	void brisi() { delete[] niz; }
public:
	Niz( int d) {
		niz = new T[dimNiza = d];
		broj = 0;
	}

	/*Niz(const Niz& n) {
		kopiraj(n);
	}
	Niz(Niz&& n) {
		premesti(n);
	}*/
	~Niz() { brisi(); }

	/*Niz& operator=(const Niz& n) {
		if (this != &n) {
			brisi();
			kopiraj(n);
		}
		return *this;
	}
	Niz& operator=(Niz&& n) {
		if (this != &n) {
			brisi();
			premesti(n);
		}
		return *this;
	}*/

	T& operator[](int poz) {
		if (poz < 0 || poz >= dimNiza) throw GIndeks();
		return niz[poz];
	}
	const T& operator[](int poz)const {
		return const_cast<Niz&>(*this)[poz];
	}

	void dodaj(const T& t) {
		if (broj == dimNiza) throw GNemaMesta();
		niz[broj++] = t;
	}

	/*friend ostream& operator<<(ostream& os, const Niz& n) {
		for (int i = 0; i < n.dimNiza; i++) {
			os << &niz[i] << endl;
		}
		return os;
	}*/

	int dohvTrenBroj()const { return broj; }


};

#endif

//template <typename T>
//void Niz<T>::kopiraj(const Niz& n) {
//	niz = new T[dimNiza = n.dimNiza];
//	broj = n.broj;
//	for (int i = 0; i < dimNiza; i++) {
//		niz[i] = n.niz[i];
//	}
//}



