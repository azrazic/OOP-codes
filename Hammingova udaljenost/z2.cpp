#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

int udaljenost(const std::string &a, const std::string &b)
{
  int n=0;
  for(int i=0;i<a.size();i++)
    {
      if(toupper(a.at(i))!=toupper(b.at(i)))
          n++;
    }
  return n;
}


int main()
{
std::string prvi,drugi,novi;

 do
  {
    std::cout << "Insert first word:";
    std::cin >> prvi;        
    std::cout << "Insert second word:";
    std::cin >> drugi;
    if(prvi.size()!=drugi.size())
    std::cout << "Strings must have equal length. Try again!" << std::endl; 
  }

 while(prvi.size()!=drugi.size());
   
  std::cout << "Hamming distance:" << udaljenost(prvi,drugi)<<std::endl;
  return 0;
}
