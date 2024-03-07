#pragma once
#include<iostream>
#include<vector>
#include<string>

struct Radnik{
  std::string ime;
  std::string prezime;
  int godina_rodjenja;
  std::string mjesto_stanovanja;
  double iznos_plate;
};


void unos(Radnik& radnik, std::vector<Radnik>& radnici1);
void ispis(const std::vector<Radnik>& radnici1);

