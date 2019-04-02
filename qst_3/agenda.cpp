#include <iostream>
#include <string>

#include "pessoa.h"
#include "agenda.h"

using namespace std;

Agenda::Agenda() {
	m_total_contatos = 0;
}
Pessoa Agenda::getContato() {
	return m_contatos;
}

void Agenda::insereContato(string nome_, int idade_, float altura_) {
	Pessoa p(nome_, idade_, altura_);

	m_contatos[m_total_contatos] = p;
}
void Agenda::removeContato(string nome_) {

}
int Agenda::buscaContato(string nome_) {

}
void Agenda::listaContato(char letra) {

}
void Agenda::imprimeContato(int i) {

}