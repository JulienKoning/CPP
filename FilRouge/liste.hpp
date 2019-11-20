#include<iostream>
#include"Cercle.hpp"
#include"Rectangle.hpp"

const int taille = 10; 

class liste{
    public : 
    Cercle tab_cercle[taille];
    Rectangle tab_rectangle[taille];
    int nb_c;
    int nb_r;
    int compteur;
    liste();
    int getCompteur();
    std::string toString();
    void addCercle(Cercle & c);
    void addRectangle(Rectangle & r);

};

