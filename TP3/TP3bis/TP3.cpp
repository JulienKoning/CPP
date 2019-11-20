#include <iostream>

class Mere{
    private :
    int id;

    public :
    Mere();
    Mere(int n);
    ~Mere();
};

Mere::Mere(){
    id = 0;
    std::cout<<"Creer mere "<<id<<std::endl;
}

Mere::Mere(int n){
    id = n;
    std::cout<<"Creer mere "<<id<<std::endl;
}

Mere::~Mere(){
    std::cout<<"Terminer mere "<<id<<std::endl;
}

class Fille : Mere {
    public :
    Fille();
    Fille(int n);
    ~Fille();
};

Fille::Fille() : Mere(){
    std::cout<<"Creer fille"<<std::endl;
}

Fille::Fille(int n) : Mere(n){
    std::cout<<"Creer fille"<<std::endl;
}

Fille::~Fille(){
    std::cout<<"Terminer fille"<<std::endl;
}

int main(){
    Fille fille(4);

    return 0;
}