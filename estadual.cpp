#include <ctime>
#include "estadual.h"
#include <stdlib.h>
#include <iostream>

Estadual::Estadual(){
  for (int i = 0; i < 10; i++){
    dadosEstado.push_back(arc4random()%3000);
  }

};
void Estadual::setNome(string nomeEstado){
  nome = nomeEstado;
};
string Estadual::getNome(){
  return nome;
}

/* int Estadual::getNumeroEstado(){ */
/*   return dadosEstado[0]; */
/* }; */

double Estadual::getMediaMovel(){
  double mediaObitosN, mediaObitosN1, mediaMovel;
  double somador = 0;
  for (int i = 0; i < dadosEstado.size(); i++){
    somador += dadosEstado[i];
    if (i == 8){
      mediaObitosN1 = somador / 9;
    }
    if (i == 9){
      mediaObitosN = somador / 10;
    }

  }
  mediaMovel = mediaObitosN / mediaObitosN1;
  mediaMovel = (mediaMovel - 1) * 100 ;
  return mediaMovel;
};

int Estadual::getSomaCasosEstado(){
  int somador =0;
  for (int i = 0; i < dadosEstado.size(); i++){
    somador += dadosEstado[i];
  }
  return somador;

};
