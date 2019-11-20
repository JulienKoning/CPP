#include "Groupe.hpp"

Groupe::Groupe() : Forme(){}

int Groupe::compteur = 0;

void Groupe::addForme(Forme& f){
    if (compteur==0)
    {
        boite_englobante.setPoint(f.getPoint());
        boite_englobante.setH(f.getH());
        boite_englobante.setW(f.getW());
    }
    if (f.getPoint().getX()<boite_englobante.getPoint().getX() || f.getPoint().getY()<boite_englobante.getPoint().getY() )
    {
        boite_englobante.setPoint(f.getPoint());
    }

    if (f.getPoint().getX() + f.getW()>boite_englobante.getPoint().getX() + boite_englobante.getW())
    {
        boite_englobante.setW(f.getPoint().getX() + f.getW() - boite_englobante.getPoint().getX() );
    }

    if (f.getPoint().getY() + f.getH()>boite_englobante.getPoint().getY() + boite_englobante.getH())
    {
        boite_englobante.setH(f.getPoint().getY() + f.getH() - boite_englobante.getPoint().getY() );
    }
    
    formes[compteur] = f;
    compteur++;
}
