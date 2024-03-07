#include<iostream>
#pragma once

struct EUR;
struct KM{
  double value;
   KM(double val):value{val}{}
      KM(EUR& e);
KM operator+(KM& k);
EUR operator+(EUR& e);
KM operator*(int i);
};


struct EUR{
  double value;
EUR(double val):value{val}{}
EUR(KM& k);

EUR operator+(KM& k);
EUR operator+(EUR& e);
EUR operator*(int i);
};

std::ostream& operator<<(std::ostream& os, EUR& e);
std::ostream& operator<<(std::ostream& os, KM& k);
