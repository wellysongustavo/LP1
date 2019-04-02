/* Implementacao da classe Funcionario : funcionario . cpp */
#include "funcionario.h"
#include <string>
#include <iostream>
using namespace std;

Funcionario::Funcionario(int matricula, string nome, double salario): m_matricula(matricula), m_nome(nome), m_salario(salario) {}

Funcionario::~Funcionario() {}

string
Funcionario::getNome() {
	return m_nome;
}
void
Funcionario::setNome(string nome) {
	m_nome = nome;
}

int
Funcionario::getMatricula() {
	return m_matricula;
}

void
Funcionario::setMatricula(int matricula) {
	m_matricula = matricula;
}
void
Funcionario::setSalario(double salario) {
	m_salario = salario;
}
double
Funcionario::getSalario() {
	return m_salario;
}

ostream& operator << (ostream& o, const Funcionario novo_func) {
	o << "Matricula: " << novo_func.m_matricula << "\tNome: " << novo_func.m_nome << "\tSalario: " << novo_func.m_salario << endl;
}