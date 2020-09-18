#include <vector>
#include <string>
#include "estadual.h"
using namespace std;
class Nacional {
  public:
    //construtor que incializa o objeto Nacional e os Estados
    Nacional();
    //printa no console a média móvel nacional
    void showMediaMovel();
    //retorna estabilidade dos estados
    vector<vector<string> > getEstabilidadeNacional();
    //retorna estabilidade na Nação como um todo
    string getEstabilidadeNacao();
    //retorna nome do estado com maior alta na Media Movel
    string getEstadoMaiorAlta();
    //retorna nome do estado com maior baixa na Media Movel
    string getEstadoMaiorBaixa();
    // printa no console o numero total de obitos de cada estado e o total da Nacao
    void showObitosTotais();
    //retorna soma total dos casos
    int getSomaObitos();

  private:
    //funcao que calcula media movel nacional
    double getMediaMovelNacional();
    //armazena os objetos referentes aos estados
    vector<Estadual> dadosNacional;
    //objetos referentes aos estados
    Estadual sc;
    Estadual rj;
    Estadual sp;
    Estadual mg;
    Estadual es;
    Estadual pe;
    Estadual rs;
    Estadual rn;
    Estadual ba;
    Estadual pr;
    Estadual se;
    Estadual al;
    Estadual pb;
    Estadual ce;
    Estadual ma;
    Estadual pi;
    Estadual to;
    Estadual go;
    Estadual df;
    Estadual ms;
    Estadual mt;
    Estadual pa;
    Estadual ap;
    Estadual ro;
    Estadual rr;
    Estadual am;
    Estadual ac;
    

};
