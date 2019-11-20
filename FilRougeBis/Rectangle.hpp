#ifndef _RECTANGLE_HPP_
#define _RECTANGLE_HPP_

#include <string>
#include <sstream>
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