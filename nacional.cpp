#include <iostream>
#include <ostream>
#include "nacional.h"
using namespace std;

Nacional::Nacional(){
  const Estadual arrayTransferencia [] = {rj, sp, mg, es, pe, rs, rn, sa, am, pr};
  for (int i = 0; i <10; i++) {
    dadosNacional.push_back(arrayTransferencia[i]);
  }

};

void Nacional::pegandoInt(){
  cout << dadosNacional[0].getNumeroEstado() << endl;
  cout << dadosNacional[1].getNumeroEstado() << endl;
  cout << dadosNacional[2].getNumeroEstado() << endl;
  cout << dadosNacional[3].getNumeroEstado() << endl;
  cout << dadosNacional[4].getNumeroEstado() << endl;
  cout << dadosNacional[5].getNumeroEstado() << endl;
  cout << dadosNacional[6].getNumeroEstado() << endl;
  /* return dadosNacional[8].getNumeroEstado(); */
};

double Nacional::getMediaMovel(){
  return dadosNacional[0].getMediaMovel();

};
