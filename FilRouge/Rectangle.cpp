#include "Rectangle.hpp"

Rectangle::Rectangle(){
    p=Point(0,0); w=0; h=0;
    //std::cout<<"Constructeur1"<<std::endl;
}

Rectangle::Rectangle(int a, int b, int c, int d){
    p=Point(a,b); w=c; h=d;
    //std::cout<<"Constructeur2"<<std::endl;
}

std::string Rectangle::toString(){
    std::ostringstream res;
    res<<"RECTANGLE "<< p.getX() <<" "<< p.getY() <<" "<<w<<" "<<h;
    return res.str();
};

Rectangle::~Rectangle(){
   // std::cout<<"Tais-toi"<<std::endl;
}

void Rectangle::setOrdre(int o){
    ordre = o;
}

int Rectangle::getOrdre(){
    return ordre;
}