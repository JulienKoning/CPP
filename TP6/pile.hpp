#ifndef PILE_H
#define PILE_H

#include<iostream>

class Pile
{
private:
    int taille;
    int* tab;
    int compteur;
public:
    Pile();
    Pile(int n);
    ~Pile();
    bool empty() const;
    void push(int elmt);
    void pop();
    int top() const;
    int size()const;
};




#endif