#include "Radnik.hpp"
#include<iostream>
#include<algorithm>

void unos(Radnik& radnik, std::vector<Radnik>& radnici1){
  for(auto i=0u; i<2;i++){
    std::cout<<"Unesite ime: ";
    std::cin>>radnik.ime;
    std::cout<<"Unesite prezime: ";
    std::cin>>radnik.prezime;
    std::cout<<"Unesite godinu rodjenja: ";
    std::cin>>radnik.godina_rodjenja;
    std::cout<<"Unesite mjesto stanovanja: ";
    std::cin>>radnik.mjesto_stanovanja;
    std::cout<<"Unesite iznos plate: ";
    std::cin>>radnik.iznos_plate;
    radnici1.push_back(radnik);
  }
  auto po_plati=[](const Radnik& radnik1, const Radnik& radnik2){
    if(radnik1.iznos_plate!=radnik2.iznos_plate){
      return radnik1.iznos_plate>radnik2.iznos_plate;
    }
    else if(radnik1.ime!=radnik2.ime){
      return radnik1.ime>radnik2.ime;
    }
    else{
      return radnik1.godina_rodjenja>radnik2.godina_rodjenja;
    }
  };
  std::sort(radnici1.begin(),radnici1.end(), po_plati);

}

void ispis(const std::vector<Radnik>& radnici1){
  std::cout<<std::string(30,'=')<<std::endl;
  for(auto i=0u; i<radnici1.size();i++){

  std::cout<<"Ime: "<<radnici1.at(i).ime<<std::endl;
  std::cout<<"Prezime: "<<radnici1.at(i).prezime<<std::endl;
  std::cout<<"Godinu rodjenja: "<<radnici1.at(i).godina_rodjenja<<std::endl;
  std::cout<<"Mjesto stanovanja: "<<radnici1.at(i).mjesto_stanovanja<<std::endl;
  std::cout<<"Iznos plate: "<<radnici1.at(i).iznos_plate<<std::endl;
  std::cout<<std::string(30,'=')<<std::endl;
  }
}
