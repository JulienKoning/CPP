#include"Dico.hpp"

void ListeMotsTries::ajouterMot(const std::string& mot)
{
    dico.push_back(mot);
    dico.sort();
}

int ListeMotsTries::getNbMots()
{
    return dico.size();
}

std::ostream& ListeMotsTries::afficher(std::ostream& f)
{
    f<<"[";
    for (l_iterator it = dico.begin(); it != dico.end(); ++it)
    {
        f<<*it<<", ";
    }
    f<<"]";
    return f;
}

l_iterator ListeMotsTries::debut()
{
    return dico.begin();
}

l_iterator ListeMotsTries::fin()
{
    return dico.end();
}

void ListeMotsTries::inserer(l_iterator deb, l_iterator fin)
{
    dico.insert(dico.end(),deb, fin);
    dico.sort();
} 

void ListeMotsTries::enleverMot(std::string mot)
{
    dico.remove(mot);
}