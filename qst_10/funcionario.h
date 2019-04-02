/* Definicao da classe Funcionario : funcionario . h */
#ifndef _FUNCIONARIO_H_
#define _FUNCIONARIO_H_

#include <string>
#include <iostream>

using namespace std;

class Funcionario {
	private:
		string m_empresa;
		int m_matricula;
		string m_nome;
		double m_salario;

	public :
		Funcionario(int matricula, string nome, double salario);
		~ Funcionario();
		string getNome();
		void setNome(string nome);
		int getMatricula();
		void setMatricula(int matricula);
		void setSalario(double salario);
		double getSalario();
		friend ostream& operator << (ostream& o, const Funcionario& novo_func);
};
# endif