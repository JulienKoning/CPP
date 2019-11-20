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
*/

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
