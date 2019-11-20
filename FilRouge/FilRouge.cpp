#include "Cercle.hpp"
#include "Rectangle.hpp"
#include "Formes.hpp"
#include"liste.hpp"


int main(){
    Rectangle rectangle(1, 2, 3, 4);
    Cercle cercle(1,1,2,2);
    liste maliste;
    Formes f;
    maliste.addCercle(cercle);
    maliste.addRectangle(rectangle);
   // std::cout<<maliste.toString()<<std::endl;
    std::cout<<f.getNbFormes()<<std::endl;


    return 0;
}