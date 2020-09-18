#include <ctime>
#include "estadual.h"
#include <stdlib.h>
#include <iostream>
#include <string>

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

int Estadual::getSomaObitosEstado(){
  int somador =0;
  for (int i = 0; i < dadosEstado.size(); i++){
    somador += dadosEstado[i];
  }
  return somador;
};

string Estadual::getEstabilidadeEstado(){
  const int LIMIAR_ESTABILIDADE = 15;
  if (getMediaMovel() <= LIMIAR_ESTABILIDADE && getMediaMovel() >= -LIMIAR_ESTABILIDADE){
    return "ESTAVEL";
  }else if(getMediaMovel() > LIMIAR_ESTABILIDADE){
    return "ALTA";
  }else{
    return "BAIXA";
  }
};
