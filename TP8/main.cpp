#include <algorithm>
#include <vector>
#include<map>
#include <iostream>
#include <iterator>
#include "Pile.hpp"
#include "Dico.hpp"

/*
//VECTEURS
int main (int, char **) {
  std::vector<int> v;  
  int input;
  std::vector<int>::iterator it;
  
  while (std::cin >> input)
    v.push_back (input);  

  std::sort(v.begin(), v.end());

  std::copy (v.begin(), v.end(), 
    std::ostream_iterator<int> (std::cout, "\n"));
  
  for (int i = 0; i < v.size(); i++)
  {
    std::cout<<v[i]<<std::endl;
  }

  for (it = v.begin(); it != v.end(); ++it)
  {
    std::cout<<*it<<std::endl;
  }
  

  for (auto& i : v)
  {
    std::cout<<i<<std::endl;
  }
  
  
  
  return 0;
}

//PILE
int main(int, char **) {
  std::stack<int> is;
  std::stack<double, std::vector<double> > ds;

  for (int i = 0; i < 100; ++i)
    is.push(i);

  while (!is.empty()) {
     std::cout << is.top() << std::endl;
     ds.push((double)is.top()*is.top());
     is.pop();
  }

  return 0;
}

//  PILE A PRIO
int main()
{
  typedef std::vector<ZZ>  vzz;
  // OU en C++ 2011
  // using vzz = std::vector<ZZ> ;

  vzz zz;

  zz.push_back(ZZ("Julien", "Koning", 20));
  zz.push_back(ZZ("Armen", "Ari", 10));
  zz.push_back(ZZ("Camille", "Bri", 5));
  zz.push_back(ZZ("Julien", "Coupe", 16));

  std::priority_queue<ZZ> tri;

  for(vzz::iterator it = zz.begin(); 
      it!=zz.end(); ++it)
  tri.push(*it);

  while(!tri.empty()) {
    std::cout << tri.top() << " ";
    tri.pop();
  }
  return 0;
}



const std::string& first(const std::pair<std::string,std::string>& p) { return p.first; }
int main(int, char**) {

typedef std::map<std::string, std::string> mss;
// OU en C++ 2011
// using mss = std::map<string, string> ;  
mss m;

m.insert(std::pair<std::string,std::string>("loic", "405042"));
m.insert(std::make_pair("pierre", "405033"));
m.insert(std::make_pair("SOS C++ 24/7", "407662"));
m["secours"]  = "42";

mss::iterator it = m.find("loic");
if (it==m.end()) std::cout << "et moi ?\n";





 std::map<std::string, std::string> liste;

liste.insert(std::pair<std::string,std::string>("loic", "405042"));
liste.insert(std::make_pair("pierre", "405033"));
liste.insert(std::make_pair("SOS C++ 24/7", "407662"));
liste["secours"]  = "42";


 std::map<std::string, std::string>::const_iterator it2 = liste.begin();
 while(it2!=liste.end()) {  
    std::cout << it2->first  << " " 
         << it2->second <<std::endl;
    ++it2;
 }

 std::transform(liste.begin(), liste.end(), 
  std:: ostream_iterator<std::string>(std::cout, " "), first);
  
 return 0;
}

*/

int main()
{
  Dictionnaire dict;
  dict.ajouterMot("bonjour");
  dict.ajouterMot("bonne");
  dict.ajouterMot("bon");
  dict.ajouterMot("abajour");
  dict.ajouterMot("aurevoir");
  
  std::list<std::string> tmp = dict.rechercherMot("bon");

  for (std::string& elmt : tmp)
  {
    std::cout<<elmt<<std::endl;
  }
  

  return 0;
}