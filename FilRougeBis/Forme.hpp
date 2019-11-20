#ifndef _FORME_HPP_
#define _FORME_HPP_

#include "Point.hpp"
#include <string>
#include <sstream>
#include "Couleur.hpp"

class Forme
{
private:

    static int nbFormes;

    Point m_point;
    int m_w, m_h, ordre;
    COULEURS couleur;

public:
    Forme();
    ~Forme();
    Forme(int, int);
    Forme(Point, int, int);
    Point getOrigin();
    int getW();
    int getH();
    void setH(int h);
    void setW(int w);
    int getOrder();
    COULEURS getColor();
    void setOrder(int);
    void setCouleur(COULEURS);
    void setPoint(Point p);
    Point getPoint();
    virtual std::string toString();
};

#endif