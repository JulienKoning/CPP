#ifndef Groupe_H
#define Groupe_H
#include "Forme.hpp"

const int  SIZE_g = 10;

class Groupe : public Forme
{
    Forme  formes[SIZE_g];
    Forme boite_englobante;
    static int compteur;
    public : 
    Groupe();
    void addForme(Forme & f);
};

#endif