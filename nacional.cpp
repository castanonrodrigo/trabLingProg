#include <ios>
#include <iostream>
#include <ostream>
#include <iomanip>
#include "nacional.h"
using namespace std;

Nacional::Nacional(){
  const Estadual arrayTransferencia [] = {rj, sp, mg, es, pe, rs, rn, ba, am, pr};
  const string arrayNomes [] = {
    "Rio de Janeiro",
    "Sao Paulo",
    "Minas Gerais",
    "Espirito Santo",
    "Pernambuco",
    "Rio Grande do Sul",
    "Rio Grande do Norte",
    "Bahia",
    "Amapa",
    "Parana"
  };
  for (int i = 0; i <10; i++) {
    dadosNacional.push_back(arrayTransferencia[i]);
    dadosNacional[i].setNome(arrayNomes[i]);
  }

};


double Nacional::getMediaMovel(){

  for (int i =0; i < dadosNacional.size(); i++){
    cout << dadosNacional[i].getNome() << setw(30) <<right << dadosNacional[i].getMediaMovel() << "%" << endl;
  }
  cout << "Brasil" << setw(30) << getMediaMovelNacional() <<endl;
  
  return dadosNacional[0].getMediaMovel();

};


int Nacional::getSomaCasos(){
  int somador = 0;
  for (int i = 0; i < dadosNacional.size(); i++){
    somador += dadosNacional[i].getSomaCasosEstado();

  }
  return somador;
};


double Nacional::getMediaMovelNacional(){
  double somadorPorcentagem = 0;
  for (int i = 0; i < dadosNacional.size(); i++){
    somadorPorcentagem += dadosNacional[i].getMediaMovel() * dadosNacional[i].getSomaCasosEstado();
  }
  return somadorPorcentagem / getSomaCasos();
};
