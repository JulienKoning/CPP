#ifndef __CPP4__CERCLE_HPP__
#define __CPP4__CERCLE_HPP__

#include "Forme.hpp"

class Cercle : public Forme
{
private:


public:
    Cercle();
    Cercle(int x, int y, int w, int h);
    Cercle(int x1, int y1, int x2, int y2, int);
    virtual std::string toString();
};

#endif
