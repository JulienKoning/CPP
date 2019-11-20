#include<iostream>
/*
class M {
 public:
  M() {
    std::cout << "M::M()" << std::endl;
  }
   ~M() {
    std::cout << "M::~M()" << std::endl;
  }
    M(const M&) {
    std::cout << "M::M(const M&)" << std::endl;
  }
  M& operator=(const M &uM)
  {
    std::cout<<"ope affectation de M"<<std::endl;
    return *this;
      
  }

};

class A {
    M attr;
 public:
  A() {
    std::cout << "A::A()" << std::endl;
  }
   ~A() {
    std::cout << "A::~A()" << std::endl;
  }
    A(const A&) {
    std::cout << "A::A(const A&)" << std::endl;
  }
  A operator=(const A &uA)
  {
      std::cout<<"ope affectation de A"<<std::endl;
      attr = uA.attr;
      
      return *this;
  }

};

class F : public M {
 public:
  F() {
    std::cout << "F::F()" << std::endl;
  }
~F() {
    std::cout << "F::~F()" << std::endl;
  }
  
  F(const F& f) {
    std::cout << "F::F(const F&)" << std::endl;
  }
  F operator=(const F &uF)
  {
      std::cout<<"ope affectation de F"<<std::endl;
  }
  
};

int main(int, char**) {

  //F f1;
  //F f2 = f1;

  //f1 = f2;
  

  A a1;
  A a2 = a1;

  return 0;
}


class Bavarde {
  std::string nom;
 public :
   Bavarde(std::string n):nom(n) {
      std::cout << "constructeur " << nom << std::endl;
   }
   ~Bavarde() {
      std::cout << "destructeur " << nom << std::endl;
   }
};

Bavarde g("global");

int main(int, char **) {
   Bavarde t("local");
   static Bavarde s("statlocal");

   //std::exit(1);
   //std::terminate();
   //std::unexpected(); // ne s'appelle pas normalement
   return 0;
}

*/