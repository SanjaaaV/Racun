#include "Osoba.h"

ostream& operator<<(ostream& os, const Osoba& o){
    return os << "O(" << o.ime << ", " << o.maticniBroj << ", " << o.datum << ")";
}
