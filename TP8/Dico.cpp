#include"Dico.hpp"

void ListeMotsTries::ajouterMot(const std::string& mot)
{
    liste_mot.push_back(mot);
    liste_mot.sort();
}

int ListeMotsTries::getNbMots()
{
    return liste_mot.size();
}

std::ostream& ListeMotsTries::afficher(std::ostream& f)
{
    f<<"[";
    for (l_iterator it = liste_mot.begin(); it != liste_mot.end(); ++it)
    {
        f<<*it<<", ";
    }
    f<<"]";
    return f;
}

l_iterator ListeMotsTries::debut()
{
    return liste_mot.begin();
}

l_iterator ListeMotsTries::fin()
{
    return liste_mot.end();
}

void ListeMotsTries::inserer(l_iterator deb, l_iterator fin)
{
    liste_mot.insert(liste_mot.end(),deb, fin);
    liste_mot.sort();
} 

void ListeMotsTries::enleverMot(std::string mot)
{
    liste_mot.remove(mot);
}

void Dictionnaire::ajouterMot(std::string mot)
{
    dico[mot[0]].ajouterMot(mot);
}

void Dictionnaire::enleverMot(std::string mot)
{
    dico[mot[0]].enleverMot(mot);
}

std::list<std::string> Dictionnaire::rechercherMot(std::string mot)
{
    std::list<std::string> res;
    for (l_iterator it = dico[mot[0]].debut(); it != dico[mot[0]].fin(); ++it)
    {
        std::string tmp = *it;
        tmp.erase(tmp.begin() + mot.size() -1, tmp.end());
        if (!tmp.compare(mot))
        {
            res.push_back(*it);
        }
        
    }
    
    return res;
    
}