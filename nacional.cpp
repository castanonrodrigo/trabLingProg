#include <ios>
#include <iostream>
#include <iomanip>
#include <vector>
#include "nacional.h"
using namespace std;

Nacional::Nacional(){
  const Estadual arrayTransferencia [] = {rs, sc, pr, sp, mg, rj, es, ba, se, al, pe, pb, rn, ce, ma, pi, to, go, df, ms, mt, pa, ap, ro, rr, am, ac};
  const string arrayNomes [] = {
    "Rio Grande do Sul",
    "Santa Catarina",
    "Parana",
    "Sao Paulo",
    "Minas Gerais",
    "Rio de Janeiro",
    "Espirito Santo",
    "Bahia",
    "Sergipe",
    "Alagoas",
    "Pernambuco",
    "Paraiba",
    "Rio Grande do Norte",
    "Ceara",
    "Maranhao",
    "Piaui",
    "Tocantins",
    "Goias",
    "Distrito Federal",
    "Mato Grosso do Sul",
    "Matro Grosso",
    "Para",
    "Amapa",
    "Rondonia",
    "Roraima",
    "Amazonas",
    "Acre",
  };
  for (int i = 0; i <27; i++) {
    dadosNacional.push_back(arrayTransferencia[i]);
    dadosNacional[i].setNome(arrayNomes[i]);
  }

};


void Nacional::showMediaMovel(){
  cout << "------------------" << "MEDIAS MOVEIS" << "-------------------------------"<< endl;
  for (int i =0; i < dadosNacional.size(); i++){
    cout << dadosNacional[i].getNome() << setw(30) << setprecision(3) << dadosNacional[i].getMediaMovel() << "%" << endl;
  }
  cout << "Brasil" << setw(30) << setprecision(3) << getMediaMovelNacional() << "%" << endl;

  cout << "----------------------------------------------------------------" << endl;

};


vector<vector<string> > Nacional::getEstabilidadeNacional(){
  vector<string> estadosAlta, estadosEstabilidade, estadosBaixa;
  vector<vector<string> > panoramaEstabilidadeEstados;

  for (int i = 0; i < dadosNacional.size(); i++){
    if (dadosNacional[i].getEstabilidadeEstado() == "ESTAVEL" ){
      estadosEstabilidade.push_back(dadosNacional[i].getNome());
    }
    if (dadosNacional[i].getEstabilidadeEstado() == "ALTA" ){
      estadosEstabilidade.push_back(dadosNacional[i].getNome());
    }
    if (dadosNacional[i].getEstabilidadeEstado() == "BAIXA" ){
      estadosEstabilidade.push_back(dadosNacional[i].getNome());
    }
  }
  panoramaEstabilidadeEstados.push_back(estadosEstabilidade);
  panoramaEstabilidadeEstados.push_back(estadosAlta);
  panoramaEstabilidadeEstados.push_back(estadosBaixa);
  return panoramaEstabilidadeEstados;
};
  
string Nacional:: getEstabilidadeNacao(){
  const int LIMIAR_ESTABILIDADE = 15;
  if (getMediaMovelNacional() <= LIMIAR_ESTABILIDADE && getMediaMovelNacional() >= -LIMIAR_ESTABILIDADE){
    return "ESTAVEL";
  }else if (getMediaMovelNacional() > LIMIAR_ESTABILIDADE){
    return "ALTA";
  }else{
    return "BAIXA";
  }
};

string Nacional:: getEstadoMaiorAlta(){
  string trackerNome;
  double trackerValor;
  for (int i=0; i < dadosNacional.size(); i++){
    if (i == 0){
      trackerNome = dadosNacional[i].getNome();
      trackerValor = dadosNacional[i].getMediaMovel();
    }else if (dadosNacional[i].getMediaMovel() > trackerValor){
      trackerValor = dadosNacional[i].getMediaMovel();
      trackerNome = dadosNacional[i].getNome();
    }
  }
  return trackerNome;
};

string Nacional:: getEstadoMaiorBaixa(){
  string trackerNome;
  double trackerValor;
  for (int i=0; i < dadosNacional.size(); i++){
    if (i == 0){
      trackerNome = dadosNacional[i].getNome();
      trackerValor = dadosNacional[i].getMediaMovel();
    }else if (dadosNacional[i].getMediaMovel() < trackerValor){
      trackerValor = dadosNacional[i].getMediaMovel();
      trackerNome = dadosNacional[i].getNome();
    }
  }
  return trackerNome;
};

void Nacional:: showObitosTotais(){
  cout << "----------" << "OBITOS TOTAIS" << "-------------------"<< endl;
  for (int i =0; i < dadosNacional.size(); i++){
    cout << dadosNacional[i].getNome() << setw(30) << setprecision(3) << dadosNacional[i].getSomaObitosEstado() << endl;
  }
  cout << "Brasil" << setw(30) << setprecision(3) << getSomaObitos() << endl;
  cout << "-------------------------------------------------------" << endl;
  
};

int Nacional::getSomaObitos(){
  int somador = 0;
  for (int i = 0; i < dadosNacional.size(); i++){
    somador += dadosNacional[i].getSomaObitosEstado();
  }
  return somador;
};


double Nacional::getMediaMovelNacional(){
  double somadorPorcentagem = 0;
  for (int i = 0; i < dadosNacional.size(); i++){
    somadorPorcentagem += dadosNacional[i].getMediaMovel() * dadosNacional[i].getSomaObitosEstado();
  }
  return somadorPorcentagem / getSomaObitos();
};
