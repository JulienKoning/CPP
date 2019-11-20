#include <iostream>
#include<sstream>
#include "Point.hpp"

Point::Point(int x, int y) : m_x(x), m_y(y) {}

int Point::getX() 
{
    return m_x;
}

int Point::getY() 
{
    return m_y;
}

void Point::setX(int new_x)
{
    m_x = new_x;
}

void Point::setY(int new_y)
{
    m_y = new_y;
}

std::string Point::toString()
{
    std::ostringstream res;
    res << "x : " << m_x << ", y : " << m_y;
    return res.str();
}




//  NE PAS OUBLIER de définir ORIGINE