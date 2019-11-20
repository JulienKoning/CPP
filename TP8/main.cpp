#include <algorithm>
#include <vector>
#include <iostream>
#include <iterator>
#include "Pile.hpp"

/*
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
*/

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