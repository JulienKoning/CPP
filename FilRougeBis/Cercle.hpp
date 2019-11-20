#ifndef _CERCLE_HPP_
#define _CERCLE_HPP_

#include <string>
#include <sstream>
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