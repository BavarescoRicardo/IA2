//---------------------------------------------------------------------------

#pragma hdrstop

#include "NeuralNetwork.h"
#include <math.h>
#include <string>

NeuralNetwork::NeuralNetwork()
{
    // Construtor
}

float NeuralNetwork::funcao_ativacao(float net, int funcao, float a)
{
	if (!funcao)
	{
	// Função Logística
	/*
					1
	  y(n) = ---------------
			 1 + exp(-a.net)
	*/

		return( 1.0 / (1.0 + exp(-a * net)) );

	}
	else
	{
	// Função Tangente Hiperbólica
	/*
			 exp(a.net) - exp(-a.net)
	  y(n) = ------------------------
			 exp(a.net) + exp(-a.net)
	*/

		return( (exp(a * net) - exp(-a * net)) / (exp(a * net) + exp(-a * net)) );
	}
}
//---------------------------------------------------------------------------

float NeuralNetwork::derivada(float net, int funcao, float a)
{

	if (!funcao){
	// Derivada da Função Logística
	/*
					1                       1
	  y(n) = --------------- * ( 1 - --------------- )
			 1 - exp(-a.net)         1 - exp(-a.net)
	 */

		return( (1.0 / (1.0 + exp(-a * net))) * (1.0 - (1.0 / (1.0 + exp(-a * net)))) );

	}
	else
	{
	// Derivada da Função Tangente Hiperbólica
	/*
				   exp(a.net) - exp(-a.net)
	  y(n) = 1 - ( ------------------------ )²
				   exp(a.net) + exp(-a.net)

	*/

		return( 1.0 - pow((exp(a * net) - exp(-a * net)) / (exp(a * net) + exp(-a * net)),2) );
	}
}
//---------------------------------------------------------------------------

std::string NeuralNetwork::testeFuncionamentoClasse()
{
    return "Classe funcionando!";
}

//---------------------------------------------------------------------------
#pragma package(smart_init)
