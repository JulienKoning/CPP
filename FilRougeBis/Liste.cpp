#include "Liste.hpp"

Liste::Liste() : compteur(0) {}

int Liste::getCompreur()
{
    return compteur;
}

std::string Liste::toString()
{
    std::ostringstream res;
    res << "[ ";
    for (int i = 0; i < compteur; ++i)
    {
        res << "{" << (formes[i])->toString() << "} ";
    }
    res << "]";
    return res.str();
}

void Liste::addForme(Forme * f)
{
    f->setOrder(compteur);
    formes[compteur++] = f;
}