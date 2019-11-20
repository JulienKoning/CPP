#include"liste.hpp"

liste::liste(){
    compteur = 0;
    nb_c = 0;
    nb_r = 0;
}

void liste::addCercle(Cercle & c){
    c.setOrdre(compteur);
    tab_cercle[nb_c] = c;
    nb_c ++;
    compteur++;   
}

void liste::addRectangle(Rectangle & r){
    r.setOrdre(compteur);
    tab_rectangle[nb_r] = r;
    nb_r ++;
    compteur++;   
}

std::string liste::toString()
{
    std::ostringstream res;
    res << "[";
    int j, k;
    for (int i = 0; i< compteur; i++)
    {
        j=0;
        k=0;
        while(j < nb_c && tab_cercle[j].getOrdre()<=i)
        {
            if(tab_cercle[j].getOrdre()==i)
            {
                res << tab_cercle[j].toString();
            }
            j++;
        }
        while(k < nb_r && tab_rectangle[k].getOrdre()<=i)
        {
            if(tab_rectangle[k].getOrdre()==i)
            {
                res << tab_rectangle[k].toString();
            }
            k++;
        }
    }
    res << "]";
    return res.str();
}