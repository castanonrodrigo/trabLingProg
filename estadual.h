#include <vector>
#include <string>

using namespace std;

class Estadual{
  public:
    //construtor que incializa o objeto com medidas de óbito
    Estadual();
    //retorna média movel do estado
    double getMediaMovel();
    //retorna estabilidade do estado
    string getEstabilidadeEstado();
    //retorna soma dos casos do estado
    int getSomaCasosEstado();
    int getNumeroEstado();
  private:
    //nome do estado
    string nomeEstado;
    //armazena dados de óbito dos últimos 10 dias
    vector<int> dadosEstado;
    int numeroEstado;
    
};

