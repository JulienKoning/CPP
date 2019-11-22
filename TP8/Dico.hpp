#include<iostream>
#include<list>

typedef std::list<std::string>::const_iterator l_iterator;

class ListeMotsTries
{
    private:
    std::list<std::string> dico;

    public:
    void ajouterMot(const std::string&);
    int getNbMots();
    std::ostream& afficher(std::ostream&  = std::cout);
    l_iterator debut();
    l_iterator fin();
    void inserer(l_iterator, l_iterator); 
    void enleverMot(std::string);
};