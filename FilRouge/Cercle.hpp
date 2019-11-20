#ifndef _CERCLE_HPP
#define _CERCLE_HPP

#include <iostream>
#include <sstream>
#include "Point.hpp"

class Cercle{
    private :
    Point p;
    int w;
    int h;
    int ordre;
    public :
    Cercle();
    Cercle(int a, int b, int c, int d);
    std::string toString();
    int getOrdre();
    void setOrdre(int o);
};

#endif