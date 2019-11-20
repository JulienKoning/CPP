#include "Cercle.hpp"

Cercle::Cercle() : Forme() {}

Cercle::Cercle(int x, int y, int w, int h) : Forme(Point(x, y), w, h) {}

Cercle::Cercle(int x1, int y1, int x2, int y2, int a) : Forme(Point(x1, x2), x2 - x1, y2 - y1) {}

std::string Cercle::toString()
{
    std::ostringstream res;
    res << "CERCLE : " << getOrigin().toString() << ", w : " << getW() << ", h : " << getH();
    return res.str();
}