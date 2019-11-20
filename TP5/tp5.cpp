#include "tp5.hpp"

Bavarde::Bavarde(){
    n=0;
    std::cout<<"Construction de "<<n<<std::endl;
}

Bavarde::Bavarde(int n) : n(n)
{
    std::cout<<"Construction de "<<n<<std::endl;
}

Bavarde::Bavarde(const Bavarde & o) : n(o.n)
{
    std::cout<<"Construction de la copie "<<n<<std::endl;
}

Bavarde::~Bavarde()
{
    std::cout<<"Destruction de "<<n<<std::endl;
}

void test1(Bavarde b)
{
    std::cout<<"appel de fonction avec parametre objet et couple"<<std::endl;
}

void test2a(Bavarde b)
{

}