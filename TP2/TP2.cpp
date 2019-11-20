#include <iostream>

class Bavarde {
  private : 
    int id;

  public :
    int getid();
    void afficher();
    Bavarde();
    Bavarde(int n);
    ~Bavarde();

}; //bizarre(1);

//Bavarde globale(2);

Bavarde::Bavarde(){
    id = 0;
    std::cout<<"Construction de "<<0<<std::endl;
}

Bavarde::Bavarde(int n){
    id = n;
    std::cout<<"Construction de "<<n<<std::endl;
}

Bavarde::~Bavarde(){
    std::cout<<"Tais-toi "<<id<<std::endl;
}
void fonction(Bavarde b) {
  std::cout << "code de la fonction"<<std::endl;
}

int Bavarde::getid(){
    return id;
}

void Bavarde::afficher(){
    std::cout<<"Affichage de "<<id<<std::endl;
}

/*int main(int, char **) {
  Bavarde b;
  Bavarde * p = new Bavarde(3);
  fonction(b);
  std::cout << Bavarde(0).getid() << std::endl;
  delete p;

  return 0;
}*/

class Couple{
    private : 
    Bavarde a, b;

};

/*int main(int, char **) {
  const int TAILLE = 20;
  Bavarde   tab1[TAILLE];
  Bavarde * tab2 = new Bavarde[TAILLE];

  for (int i =0; i < TAILLE; ++i)
  {
     tab1[i].afficher();
     tab2[i].afficher();
  }
  delete[] tab2;
  return 0;
}*/

int main(int, char **){
    Couple c;
}