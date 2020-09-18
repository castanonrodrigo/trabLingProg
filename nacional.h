#include <vector>
#include <string>
#include "estadual.h"
using namespace std;
class Nacional {
  public:
    //construtor que incializa o objeto Nacional e os Estado
    Nacional();
    //retorna a média móvel nacional
    double getMediaMovel();
    // retorna  estabilidade do país
    string getEstabilidadeNacional();
    //retorna soma total dos casos
    int getSomaCasos();
    void pegandoInt();
  private:
    //armazena dados referentes ao Brasil;
    vector<Estadual> dadosNacional;
    Estadual rj;
    Estadual sp;
    Estadual mg;
    Estadual es;
    Estadual pe;
    Estadual rs;
    Estadual rn;
    Estadual sa;
    Estadual am;
    Estadual pr;
    
    /* static Estadual arrEstados[10] = {rj, sp, mg, es, pe, rs, rn, sa, am, pr}; */

};
