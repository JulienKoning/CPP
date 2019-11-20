#include "Formes.hpp"

int nbFormes = 0;

Formes::Formes(){
    p = Point(0,0);
    w = 0, h = 0;
    nbFormes++;
}

int Formes::getNbFormes(){
    return nbFormes;
}