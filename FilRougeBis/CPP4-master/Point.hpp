#ifndef __CPP4__POINT_HPP__
#define __CPP4__POINT_HPP__
#include<string>
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

// declaration d'un point ORIGINE
// il ne faudra pas oublier de l'instancier quelque part
// extern Point ORIGINE;

#endif