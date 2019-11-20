#ifndef PILE_H
#define PILE_H

#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>

class ZZ
{
private:
    std::string _prenom, _nom;
    double _note;

public:
    ZZ() : _prenom(nullptr), _nom(nullptr), _note(0) {}
    ZZ(std::string prenom, std::string nom, double note) : _prenom(prenom), _nom(nom), _note(note) {}
    ~ZZ() { std::cout << "Destruction ZZ " << _prenom << std::endl; }
    const ZZ& operator=(const ZZ& o);
    bool operator<(ZZ& zz1);
};



#endif