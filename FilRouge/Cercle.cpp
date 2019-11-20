#include "Cercle.hpp"

Cercle::Cercle(){
    p=Point(0,0); w=0; h=0;
    //std::cout<<"Constructeur1"<<std::endl;
}

Cercle::Cercle(int a, int b, int c, int d){
    p=Point(a,b); w=c; h=d;
    //std::cout<<"Constructeur2"<<std::endl;
}

std::string Cercle::toString(){
    std::ostringstream res;
    res<<"CERCLE "<< p.getX() <<" "<< p.getY() <<" "<<w<<" "<<h;
    return res.str();
}


void Cercle::setOrdre(int o){
    ordre = o;
}

int Cercle::getOrdre(){
    return ordre;
}