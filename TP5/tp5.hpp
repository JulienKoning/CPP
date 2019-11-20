#ifndef TP5_H
#define TP5_H

#include<iostream>

class Bavarde
{
    int n;
    public : 
    Bavarde();
    Bavarde(int n);
    Bavarde(const Bavarde & o);
    ~Bavarde();
};

void test1(Bavarde b);

#endif