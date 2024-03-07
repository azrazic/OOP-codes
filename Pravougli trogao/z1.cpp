#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

int main()
{
  int a,b,c,d;
  std::vector<int> prvi, drugi, treci;
  std::cout << "Unesite tri cijela broja:";
  std::cin >> a >> b >> c;
  
  if(a==0 || b==0 || c==0)
    std::cout << "Pogresan unos!" << std::endl;

  else if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b)
    std::cout << "Uneseni brojevi predstavljaju stranice pravouglog trougla." << std::endl;
  else
    std::cout << "Uneseni brojevi ne predstavljaju stranice pravouglog trougla." << std::endl;

  std::cout << "Unesite cijeli broj:";
  std::cin >> d;

  for(int i=1;i<=d;i++)
  {
    for(int j=i+1;j<=d;j++)
    {
      for(int k=1;k<=d;k++)
      {
        if(k*k==i*i+j*j)
        std::cout << "(" << i << ", " << j << ", " << k << ")" << std::endl;
      }
    }
  }
 
   return 0;
}
