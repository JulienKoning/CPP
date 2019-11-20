#ifndef _LISTE_HPP_
#define _LISTE_HPP_

#include "Rectangle.hpp"
#include <sstream>
#include <iterator>
#include "Forme.hpp"

const int SIZE = 10;

class Liste
{
private:
    int compteur;
    Forme *formes[SIZE];

public:
    Liste();
    int getCompreur();
    std::string toString();
    void addForme(Forme*);
};

#endif