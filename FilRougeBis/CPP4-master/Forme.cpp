#include "Forme.hpp"

int Forme::nbFormes = 0;

Forme::Forme() : m_point(ORIGINE), m_w(0), m_h(0) {}

Forme::Forme(int w, int h) : m_point(ORIGINE), m_w(w), m_h(h)
{
    nbFormes++;
}

Forme::Forme(Point point, int w, int h) : m_point(point), m_w(w), m_h(h)
{
    nbFormes++;
}

Forme::~Forme()
{
    nbFormes--;
}

std::string Forme::toString()
{
    std::ostringstream res;
    res << "FORME : " << m_point.toString() << ", w : " << m_w << ", h : " << m_h;
    return res.str();
}

Point Forme::getOrigin()
{
    return m_point;
}

int Forme::getW()
{
    return m_w;
}
int Forme::getH()
{
    return m_h;
}
int Forme::getOrder()
{
    return ordre;
}
COULEURS Forme::getColor()
{
    return couleur;
}

void Forme::setOrder(int new_order)
{
    ordre = new_order;
}

void Forme::setCouleur(COULEURS new_couleur)
{
    couleur = new_couleur;
}

void Forme::setPoint(Point p){
    m_point.setX(p.getX);
    m_point.setY(p.getY);
}