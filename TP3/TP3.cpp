#include <iostream>
#include<string>


class Mere {
    private :
    int idm; 
    std::string nom; 
    protected : 
    static int compteur; 
    public :
 
    Mere();
    Mere(int n);
    ~Mere();
    int getCompteur();
    std::string getNom();
};

int Mere::compteur = 0;

std::string Mere::getNom(){
    return nom;
}

Mere::Mere(){
    idm =0;
    nom = "Fdp";
    compteur++;
    std::cout<<"Creer mere"<<idm<<std::endl;
}

Mere::Mere(int n){
    idm = n;
    compteur++;
    std::cout<<"Creer mere"<<idm<<std::endl;
}

Mere::~Mere(){
    compteur--;
    std::cout<<"Detruire mere"<<idm<<std::endl;
}

int Mere::getCompteur(){
    return compteur;
}

class Fille : public Mere{
    private : 
    int idf;

    public :
    Fille();
    Fille(int n);
};

Fille::Fille() : Mere(){
    std::cout<<"Creer fille"<<idf<<std::endl;
}

Fille::Fille(int n) : Mere(n){²
    idf = n;
    std::cout<<"Creer fille"<<idf<<std::endl;
}

int main(){
    Mere mere;
    Fille fille(2);
    std::cout<<mere.getCompteur()<<std::endl;
    std::cout<<fille.getCompteur()<<std::endl;
    std::cout<<mere.getNom()<<std::endl;

    return 0;
}