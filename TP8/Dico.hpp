#include<iostream>
#include<list>
#include<map>
#include<string>

typedef std::list<std::string>::const_iterator l_iterator;

class ListeMotsTries
{
    private:
    std::list<std::string> liste_mot;

    public:
    void ajouterMot(const std::string&);
    int getNbMots();
    std::ostream& afficher(std::ostream&  = std::cout);
    l_iterator debut();
    l_iterator fin();
    void inserer(l_iterator, l_iterator); 
    void enleverMot(std::string);
};

class Dictionnaire
{
    private:
    std::map<char, ListeMotsTries> dico;

    public:
    void ajouterMot(std::string);
    void enleverMot(std::string);
    std::list<std::string> rechercherMot(std::string);
    std::map<char, ListeMotsTries> getDico(){return dico;}
    
};