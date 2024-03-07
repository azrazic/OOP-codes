#include "valute.h"

EUR::EUR(KM& k):value{k.value/2}{}
EUR EUR::operator+(EUR& e){
  return EUR(e.value+value);}

  EUR EUR::operator+(KM& k){
    return EUR(value+k.value/2);}

    EUR EUR::operator*(int i){
      return EUR(value*i);}

      KM::KM(EUR& e):value{e.value*2}{}  
  KM KM::operator+(KM& k){
    return KM(k.value+value);}

EUR KM::operator+(EUR& e){
  return EUR(e.value+value/2);}

    KM KM::operator*(int i){
      return KM(value*i);}

      std::ostream& operator<<(std::ostream& os,KM& k){
        os<<k.value<<" Maraka";
        return os;}

      std::ostream& operator<<(std::ostream& os, EUR& e){
        os<<e.value<<" Eura";
        return os;}


