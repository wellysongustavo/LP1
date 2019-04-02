#ifndef _CARRO_H_
#define _CARRO_H_

#include <iostream>
#include <string> 

using namespace std;

class Carro {
	private:
		string modelo;
		int ano_de_fabricacao;
		float capacidade_maxima_tanque;
		float consumo_por_KM;
		float combustivel_atual;
		float distancia_percorrida;

	public:

		Carro(string nome, int ano, float capacidade_maxima, float consumo);

		void mover(float distancia);
		void abastecer(float combustivel);
		float getQtdeCombustivel();
		float getAutonomia();
		float getDistanciaPercorrida();

		friend ostream& operator<<(ostream& o,const Carro &carro_);
};

#endif
