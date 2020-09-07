//---------------------------------------------------------------------------

#ifndef NeuralNetworkH
#define NeuralNetworkH

#include <string>


class NeuralNetwork {
  public:
	NeuralNetwork();
	float funcao_ativacao(float net, int funcao, float a);
	float derivada(float net, int funcao, float a);
    std::string testeFuncionamentoClasse();
};
//---------------------------------------------------------------------------
#endif
