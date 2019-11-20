#ifndef __RECTANGLE_HPP__
#define __RECTANGLE_HPP__

#include "Forme.hpp"

class Rectangle : public Forme
{
private:

public:
    Rectangle();
    Rectangle(int x, int y, int w, int h);
    Rectangle(int x1, int y1, int x2, int y2, int);
    virtual std::string toString();
};

#endif