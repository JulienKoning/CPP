#include "Pile.hpp"

const ZZ& ZZ::operator=(const ZZ& o)
{
    _prenom = o._prenom;
    _nom = o._nom;
    _note = o._note;
    return *this;
}

bool operator<(const ZZ& zz1, const ZZ& zz2)
{
    return (zz2._note<zz1._note);
}

std::ostream& operator<<(std::ostream& f, const ZZ& zz)
{
    f<<"["<<zz._prenom<<", "<<zz._nom<<", "<<zz._note<<"]";
    return f;
}