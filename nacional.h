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
  private:
    //funcao que calcula media movel nacional
    double getMediaMovelNacional();
    //armazena dados referentes ao Brasil;
    vector<Estadual> dadosNacional;

    Estadual rj;
    Estadual sp;
    Estadual mg;
    Estadual es;
    Estadual pe;
    Estadual rs;
    Estadual rn;
    Estadual ba;
    Estadual am;
    Estadual pr;
    

};
