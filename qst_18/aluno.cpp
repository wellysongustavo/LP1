#include <iostream>
#include <string>

#include "aluno.h"

Aluno::Aluno() {

}
Aluno::Aluno(std::string _matricula, std::string _nome): matricula(_matricula), nome(_nome) {

}
Aluno::~Aluno () {

}
AlunoTurma::AlunoTurma() {

}
AlunoTurma::AlunoTurma(Aluno* _discente, int _faltas, double _nota): discente(_discente), faltas(_faltas), nota(_nota) {

}
AlunoTurma::~AlunoTurma(){

}
Aluno* AlunoTurma::getDiscente() {
	return discente;
}
std::string Aluno::getNome() {
	return nome;
}
std::string Aluno::getMatricula() {
	return matricula;
}
int Aluno::getFaltas(){
	return faltas;
}
double Aluno::getNota(){
	return nota;
}
std::ostream& operator << (std::ostream& o, const AlunoTurma& aluno) {
	
	o << "Matricula: " << (aluno.getDiscente())->getMatricula() << "\tNome: " << (aluno.getDiscente())->getNome() << "\tFaltas: " << (aluno.getDiscente())->getFaltas() << "\tNota: " << (aluno.getDiscente())->getNota() << std::endl;
	return o;
}