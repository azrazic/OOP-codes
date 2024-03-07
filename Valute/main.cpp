#include<iostream>
#include "valute.h"

int main(){
  KM a{20};
  EUR b{10};
  auto d=a+b;

  std::cout<<d<<std::endl;
}
