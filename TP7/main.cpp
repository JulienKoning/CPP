#include "List.hpp"

/*
template<typename T>
const T& maximum    (const T&a, const T&b)
{
    return ((a>b) ? a:b);
}

int main()
{
    std::cout<<maximum(1,2)<<" "<<maximum(1,2.3)<<" "<<maximum((double)1, 2.3)<<std::endl;
    return 0;
}
*/

int main()
{
    List l;
    std::cout<<"push_front(1)"<<std::endl;
    l.push_front(1);
    std::cout<<"Liste est vide?"<<l.empty()<<std::endl;
    std::cout<<l<<std::endl;
    std::cout<<"taille :"<<l.size()<<std::endl;

    std::cout<<"push_front(2) et push_front(4)"<<std::endl;
    l.push_front(2);
    l.push_front(4);
    std::cout<<l<<std::endl;
    std::cout<<"taille :"<<l.size()<<std::endl;
    std::cout<<"push_back(3) et push_back(5)"<<std::endl;
    l.push_back(3);
    l.push_back(5);
    std::cout<<l<<std::endl;
    std::cout<<"taille :"<<l.size()<<std::endl;
    std::cout<<"pop-front()*2"<<std::endl;
    l.pop_front();
    l.pop_front();
    std::cout<<l<<std::endl;
    std::cout<<"taille :"<<l.size()<<std::endl;
    std::cout<<"pop_back()"<<std::endl;
    l.pop_back();
    std::cout<<l<<std::endl;
    std::cout<<"taille :"<<l.size()<<std::endl;

    return 0;
}