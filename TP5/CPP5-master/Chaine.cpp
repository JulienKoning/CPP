#include "Chaine.hpp"

Chaine::Chaine() : capacite(-1), tab(nullptr) {}

char *Chaine::c_str() const
{
    return tab;
}

int Chaine::getCapacite() const
{
    return capacite;
}

Chaine::Chaine(const char *inCS) : capacite(strlen(inCS)), tab((char *)malloc(sizeof(char) * (capacite + 1)))
{
    strcpy(tab, inCS);
}

Chaine::Chaine(int inCapacite) : capacite(inCapacite), tab((char *)malloc(sizeof(char) * (inCapacite + 1)))
{
    strcpy(tab, "\0");
}

Chaine::~Chaine()
{
    free(tab);
}

Chaine::Chaine(Chaine const &c) : capacite(c.capacite), tab((char *)malloc(sizeof(char) * (c.capacite + 1)))
{
    strcpy(tab, c.tab);
    std::cout << "Constructeur de copie utilise" << std::endl;
}

void Chaine::afficher() const
{
    std::cout << "[capa: " << getCapacite() << ", " << c_str() <<"]"<< std::endl;
}

void Chaine::afficher(std::ostream &f) const
{
    f << c_str();
}

void afficherParValeur(Chaine c)
{
    c.afficher();
}

void afficherParReference(Chaine &c)
{
    c.afficher();
}

Chaine &Chaine::operator=(const Chaine &c)
{
    capacite = c.capacite;
    tab = new char[capacite];
    strcpy(tab, c.tab);
    return *this;
}

std::ostream &operator<<(std::ostream &flux, const Chaine &c)
{
    //c.afficher(flux);
    for (int i = 0; i < c.getCapacite(); i++)
    {
        flux << c.tab[i] << std::endl;
    }

    return flux;
}

char &Chaine::operator[](int rg)
{
    if (rg < 0)
    {
        throw(std::out_of_range(""));
    }
    else
    {
        if (rg > capacite)
        {
            throw(std::bad_alloc());
        }
        else
        {
            return tab[rg];
        }
    }
}

