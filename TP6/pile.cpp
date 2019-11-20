#include "pile.hpp"

Pile::Pile()
{
    taille = 10;
    tab = new int[taille];
    compteur = 0;
}

Pile::Pile(int n)
{
    if (n < 1)
    {
        throw(std::invalid_argument(""));
    }
    else
    {
        taille = n;
        tab = new int[n];
        compteur = 0;
    }
}

Pile::~Pile()
{
    std::cout << "Destruction" << std::endl;
}

bool Pile::empty() const
{
    if (taille < 1)
    {
        throw(std::invalid_argument(""));
    }
    else
    {
        return (compteur == 0);
    }
}

void Pile::push(int elmt)
{
    if (compteur == taille)
    {
        throw(std::invalid_argument(""));
    }
    else
    {
        tab[compteur] = elmt;
        compteur++;
    }
}

void Pile::pop()
{
    if (compteur == 0)
    {
        throw(std::invalid_argument(""));
    }
    else
    {
        compteur--;
    }
}

int Pile::top() const
{
    return tab[compteur-1];
}

int Pile::size() const
{
    return compteur;
}
