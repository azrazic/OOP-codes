#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<list>

std::list<int> parni_neparni(std::list<int>::const_iterator &a,std::list<int>::const_iterator &b)
{
  std::list<int> nova_lista;
  while(a!=b)
  {
    if((*a)%2==0)
      nova_lista.push_front(*a);
    else
      nova_lista.push_back(*a);
    ++a;
  }
  return nova_lista;
}

int main(int argc, char *argv[])
{
  std::list<int> lista;
  int broj;
  std::list<int>::const_iterator prvi,drugi;
  
  std::cout << "Unesite elemente:";
  while(std::cin>>broj)
    lista.push_back(broj);
  
  prvi=lista.begin();
  drugi=lista.end();
 
  auto A=parni_neparni(prvi,drugi);
  for(auto el:A)
  std::cout << el <<" ";
  return 0;
}
