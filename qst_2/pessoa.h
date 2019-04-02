#ifndef _PESSOA_H_
#define _PESSOA_H_

#include <iostream>
#include <string>

using namespace std;

class Pessoa {
	private:
		string nome_;
		int idade_;
		float altura_;

	public:
		Pessoa(string nome, int idade, float altura);
		~Pessoa();

		string getNome();
		int getIdade();
		float getAltura();

		friend ostream& operator<<(ostream& os, const Pessoa &pessoa);
		
};

#endif