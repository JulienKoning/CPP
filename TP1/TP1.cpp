/*#include <iostream>

int main(int , char ** ) {
    int a=2;
  for(int i=0; i< 120; ++i)

    std::cout << "Bonjour les ZZ" << a << std::endl;

  return 0;
}

#include <iostream>
#include <string>

int main(int, char **) {
  std::string prenom; // type spécial pour les chaînes de caractères
  int age;

  std::cout << "Quel est votre prénom ?" << std::endl;
  std::cin >> prenom;
  std::cout << "Quel est votre age ?" << std::endl;
  std::cin >> age ;
  std::cout << "Bonjour "<< prenom << " Tu as" << age << std::endl;

  return 0;
}*/

// Fichier Point.cpp

#include <iostream>  // Inclusion d'un fichier standard
#include "TP1.hpp" // Inclusion d'un fichier du répertoire courant

int Point::getX() {
  return x;
}

int Point::getY() {
  return y;
}

void Point::setX(int a) {
    x=a;
}

void Point::setY(int b) {
    y=b;
}

void Point::deplacerDe(int a, int b){
    x=x+a;
    y=y+b;
}

void Point::deplacerVers(int a, int b){
    x=a;
    y=b;
}

int Point::compteur = 0;

Point::Point(){
  x=0;
  y=0;
  compteur++;
  std::cout<<"Sans arg"<<std::endl;
}

Point::Point(int a, int b){
  x=a;
  y=b;
  compteur++;
  std::cout<<"Avec arg"<<std::endl;
}

int Point::getcompteur(){
  return compteur;
}


int main(int, char**) {
  
  std::cout<<"compteur :"<<Point::getcompteur()<<std::endl;
  Point p;
  int a = 1;
  int b = 1;
  int c = 3, d = 3;
  Point p1(a,b);
  Point * point = new Point(2,2);
  std::cout<<"compteur :"<<Point::getcompteur()<<std::endl;
  /*p.setX(a);
  p.setY(b);
  std::cout << p.getX() << "," << p.getY() << std::endl;
  p.deplacerDe(a,b);
  std::cout << p.getX() << "," << p.getY() << std::endl;
  p.deplacerVers(c,d);
  std::cout << p.getX() << "," << p.getY() << std::endl;*/
  delete point;
  

  return 0;
}



