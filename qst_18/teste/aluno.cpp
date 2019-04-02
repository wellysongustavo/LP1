#include <iostream>
#include "aluno.h"


Aluno::Aluno(){
}
Aluno::Aluno(std::string _matricula,std::string _nome):matricula(_matricula),nome(_nome){
}
std::string Aluno::getNome(){
    return nome;
}
std::string Aluno::getMatricula(){
    return matricula;
}
int Aluno::getFaltas(){
    return faltas;
}
double Aluno::getNotas(){
    return nota;
}
AlunoTurma::AlunoTurma(){
}
AlunoTurma::AlunoTurma(Aluno* _discente, int _faltas, double _nota):discente(_discente),faltas(_faltas),nota(_nota){
}
Aluno* AlunoTurma::getDiscente(){
    return discente;
}
int AlunoTurma::getFaltas(){
    return faltas;
}
double AlunoTurma::getNota(){
    return nota;
}
std::ostream& operator <<(std::ostream& o, const Aluno &aluno){
    o<<"Matricula: "<<aluno.matricula << "\nDiscente: "<<aluno.nome<<std::endl;
    return o;
}