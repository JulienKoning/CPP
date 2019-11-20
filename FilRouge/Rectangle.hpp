#ifndef _RECTANGLE_HPP
#define _RECTANGLE_HPP

#include <iostream>
#include <sstream>
#include "Point.hpp"

class Rectangle {
    private :
    Point p;
    int w;
    int h;
    int ordre;

    public : 
    Rectangle();
    Rectangle(int a, int b, int c, int d);
    ~Rectangle();
    std::string toString();
    int getOrdre();
    void setOrdre(int o);
};

#endif
