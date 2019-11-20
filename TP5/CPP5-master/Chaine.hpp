#ifndef CPP5__CHAINE_HPP
#define CPP5__CHAINE_HPP

#include <iostream>
#include <fstream>
#include <cstring>
#include <sstream>
#include<exception>
#include<stdexcept>

class Chaine
{
private:
    int capacite;
    char *tab;

public:
    Chaine();
    Chaine(const char *inCS);
    Chaine(int inCapacite);
    Chaine(Chaine const &c);
    ~Chaine();
    char *c_str() const;
    int getCapacite() const;
    void afficher() const;
    void afficher(std::ostream &f) const;
    Chaine &operator=(const Chaine & c);
    char &operator[](int rg);
    friend std::ostream & operator<<(std::ostream & flux, const Chaine & c);

};


class null_pointer : public std::logic_error
{
    public:
    null_pointer() : std::logic_error("Null"){}
    null_pointer(const std::string& msg) : std::logic_error(msg){}
};



#endif
