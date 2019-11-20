#include "Rectangle.hpp"

Rectangle::Rectangle() : Forme() {}

Rectangle::Rectangle(int x, int y, int w, int h) : Forme(Point(x, y), w, h) {}

Rectangle::Rectangle(int x1, int y1, int x2, int y2, int a) : Forme(Point(x1, x2), x2 - x1, y2 - y1) {}

std::string Rectangle::toString()
{
    std::ostringstream res;
    res << "RECTANGLE : " << getOrigin().toString() << ", w : " << getW() << ", h : " << getH();
    return res.str();
}