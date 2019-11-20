#ifndef PILE_GEN_H
#define PILE_GEN_H

#include<iostream>
#include<exception>
template<typename T>
class PileGen
{
private:
    int taille;
    T* tab;
    int compteur;
public:
    PileGen();
    PileGen(int n);
    ~PileGen();
    bool empty() const;
    void push(T elmt);
    void pop();
    T top() const;
    int size()const;
};
template<typename T>
PileGen<T>::PileGen()
{
    taille = 10;
    tab = new T[taille];
    compteur = 0;
}

template<typename T>
PileGen <T>::PileGen(int n)
{
    if (n < 1)
    {
        throw(std::invalid_argument(""));
    }
    else
    {
        taille = n;
        tab = new T[n];
        compteur = 0;
    }
}

template<typename T>
PileGen<T>::~PileGen()
{
    std::cout << "Destruction" << std::endl;
}

template<typename T>
bool PileGen<T>::empty() const
{
    if (taille < 1)
    {
        throw(std::invalid_argument(""));
    }
    else
    {
        return (compteur == 0);
    }
}

template<typename T>
void PileGen<T>::push(T elmt)
{
    if (compteur == taille)
    {
        throw(std::invalid_argument(""));
    }
    else
    {
        tab[compteur] = elmt;
        compteur++;
    }
}

template<typename T>
void PileGen<T>::pop()
{
    if (compteur == 0)
    {
        throw(std::invalid_argument(""));
    }
    else
    {
        compteur--;
    }
}

template<typename T>
T PileGen<T>::top() const
{
    return tab[compteur-1];
}

template<typename T>
int PileGen<T>::size() const
{
    return compteur;
}


#endif