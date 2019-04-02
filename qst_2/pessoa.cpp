#include <iostream>
#include <string>

#include "pessoa.h"

using namespace std; 

Pessoa::Pessoa(string nome, int idade, float altura): nome_(nome), idade_(idade), altura_(altura) { 

}

Pessoa::~Pessoa() { }

string Pessoa::getNome() {
	return nome_;
}
int Pessoa::getIdade() {
	return idade_;
}
float Pessoa::getAltura() {
	return altura_;
}
ostream& operator << (ostream& o, const Pessoa &pessoa) {
	o << "Meu nome eh " << pessoa.nome_ << ", tenho " << pessoa.idade_ << " anos e " << pessoa.altura_ 
	<< " de altura." << endl;
	return o;
}
