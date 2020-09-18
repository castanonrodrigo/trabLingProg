
#include <ctime>
#include "estadual.h"
#include <stdlib.h>

Estadual::Estadual(){
  for (int i = 0; i < 10; i++){
    dadosEstado.push_back(arc4random()%3000);
  }

};

int Estadual::getNumeroEstado(){
  return dadosEstado[0];
};
