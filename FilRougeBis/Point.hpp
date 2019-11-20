#ifndef _POINT_HPP_
#define _POINT_HPP_

#include <string>
#include <sstream>

class Point
{
private:
    int m_x, m_y;

public:
    Point(int, int);
    int getX();
    int getY();
    void setX(int);
    void setY(int);
    std::string toString();
};

const Point ORIGINE(0, 0);

#endif