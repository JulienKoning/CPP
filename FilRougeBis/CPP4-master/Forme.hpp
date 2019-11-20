#ifndef __CPP4__FORME_HPP__
#define __CPP4__FORME_HPP__

#include "Point.hpp"
#include<sstream>

// enum COULEURS { BLANC, NOIR};
enum COULEURS {
  NOIR, BLANC, ROUGE, BLEU, VERT
};

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
    int getOrder();
    COULEURS getColor();
    void setOrder(int);
    void setCouleur(COULEURS);
    void setPoint(Point p);
    virtual std::string toString();
};

#endif