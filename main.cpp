#include <iostream>
#include <iomanip>
#include "nacional.h"
#include <vector>
#include <string>

using namespace std;

int selectInputOption(){
  int digito;
  cout << "---------------" << "Menu do Programa" << "--------------"<< endl;
  cout << "Para evolucao dos estados e da Nacao em medias moveis - Digite 1" <<endl;
  cout << "Para exibicao da estabilidade dos estados - Digite 2" <<endl;
  cout << "Para exibicao da estabilidade da Nacao - Digite 3" <<endl;
  cout << "Para exibicao dos estados com maior alta e maior baixa - Digite 4" <<endl;
  cout << "Para exibicao dos dados de obitos acumalados dos estados e da Nacao - Digite 5" <<endl;
  cout << "Para finalizar o programa - Digite -1" <<endl;
  cin >> digito;
  return digito;
  
};

int main(){
  Nacional brasil;

  int opcaoInputada = 0;
  while (opcaoInputada != -1) {
    opcaoInputada = selectInputOption();
    switch (opcaoInputada) {
    case 1:
      brasil.showMediaMovel();
      break;
    case 2:
      {
        vector<vector<string> > panoramaEstabilidadeEstados = brasil.getEstabilidadeNacional();
        cout << "--------------" << "PANORAMA DE ESTABILIDADE DOS ESTADOS" << "------------------" <<endl;
        for (int i =0; i < panoramaEstabilidadeEstados.size(); i++){
          if (i == 0){
            cout << "ESTADOS EM ESTABILIDADE:" << endl;
            for (int j = 0; j < panoramaEstabilidadeEstados[i].size(); j++){
              cout << panoramaEstabilidadeEstados[i][j] <<endl;
            }
          }
          if (i == 1){
            cout << "ESTADOS EM ALTA:" << endl;
            for (int j = 0; j < panoramaEstabilidadeEstados[i].size(); j++){
              cout << panoramaEstabilidadeEstados[i][j] <<endl;
            }
          }
          if (i == 2){
            cout << "ESTADOS EM BAIXA:" << endl;
            for (int j = 0; j < panoramaEstabilidadeEstados[i].size(); j++){
              cout << panoramaEstabilidadeEstados[i][j] <<endl;
            }
          }
        }
        cout << "-----------------------------------------" << endl;
        break;
      }
    case 3:
      {
        cout <<"--------------" << "ESTABILIDADE PAÍS" << "----------------"<< endl;
        string situacaoEstabilidade = brasil.getEstabilidadeNacao();
        if (situacaoEstabilidade == "ESTAVEL"){
          cout <<setw(30)<< "Os casos estao estaveis" << endl;
        }
        if (situacaoEstabilidade == "ALTA"){
          cout <<setw(30)<< "Os casos estao aumentando" << endl;
        }
        if (situacaoEstabilidade == "BAIXA"){
          cout <<setw(30)<< "Os casos estao diminuindo" << endl;
        }
        cout << "--------------------------------" << endl;
        break;
      }
    case 4:
      {
        cout << "------" << "MAIOR BAIXA E MAIOR ALTA" << "----------"<< endl;
        cout << "Estado com maior baixa:  " << brasil.getEstadoMaiorBaixa() <<endl;
        cout << "Estado com maior alta:  " << brasil.getEstadoMaiorAlta() <<endl;
        cout << "---------------------------------------" << endl;
        break;
      }
    case 5:
      {
        brasil.showObitosTotais();
        break;
      }
    case -1:
      return 1;
    default:
      cout << "Opcao invalida!"<< endl;
      break;
    }
    opcaoInputada = 0;
    cout << "Para sair do programa - Digite -1" << endl;
    cout << "Para retornar ao menu - Digite qualquer numero" << endl;
    cin >> opcaoInputada;
  }
  return 1;
}
