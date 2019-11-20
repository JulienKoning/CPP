#include <iostream>
#include "Rectangle.hpp"
#include "Cercle.hpp"
#include "Liste.hpp"
#include "Point.hpp"
#include "Forme.hpp"
#include "Groupe.hpp"

int main(int, char **)
{
    Forme r1 = Rectangle(1, 2, 4, 5);
    Forme c1 = Cercle(1,2,3,4);
    Groupe g;

    g.addForme(r1);
    std::cout<<g.toString()<<std::endl;
    

    return 0;
}