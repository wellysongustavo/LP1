#include <iostream>
#include "turma.h"


Turma::Turma(){
}
Turma::~Turma(){
}
int Turma::addAluno(AlunoTurma _aluno){
    /* Adiciona um aluno na lista de alunos */
    alunos.push_back(new AlunoTurma(_aluno));
    return -1;
}

Aluno* Turma::buscaAlunoPorNome(std::string _nome){
     /* Busca por um aluno na lista de alunos com o nome indicado,
     Retorna um apontador para o objeto aluno se encontrado.
     Retorna nulo, caso n o encontre um aluno com o nome indicado.*/
     for(int k= 0; k < alunos.size(); k++)
     {
         if(alunos[k]->getDiscente()->getNome() == _nome){
             return alunos[k]->getDiscente();
          }
     }
     
     return NULL;
}
// Aluno* Turma::buscaAlunoPorMatricula(std::string _matricula){
//     /* BUsca por um aluno na lista de alunos com a matricula indicada.
//     Returna u apontador para o obeto aluno se encontradop.
//     retorna Nulo, caso n o encontre um aluno com a matricula indicada. */
//     return NULL;
// }
int Turma::removeAlunoPorNome(std::string _nome){
    /*Remove o aluno com o nome indicado.
    Retorna 0 caso o aluno seja encontrado e removido com sucesso.
    Retorna -1 em caso contrario
    Dica: Para remover um elemento do vector, utilize o metodo erase()
    */
    for(int k= 0; k < alunos.size(); k++){
         if(alunos[k]->getDiscente()->getNome() == _nome){
            alunos.erase(alunos.begin()+k);
            return 0;
          }
    }

   return -1;
}
// int Turma::removeAlunoPorMatricula(std::string _matricula){
//     /*Remove o aluno com a matricula indicada.
//     Returna 0, caso o alunoi seja encontrado e removido com sucesso
//     Retorna -1 em caso contrario.
//     Dica: Para remover o elemento do vector utilize o metodo erase()*/
//     return -1;
// }
void Turma::listaAlunos(){
    /* Lista os dados de todos os alunos da turma, incluindo o total de
    faltas por nota. utilize a sobrecarga do operador de inserção
    para a impressão dos dados do aluno. Deve listar ainda
    a quantidade de alunos e a média das notas dos alunos nesta turma.*/
    for(int i = 0; i < alunos.size(); i++)
    {
       std::cout<< *(alunos[i]->getDiscente())<<"Faltas: "<<(alunos[i]->getFaltas())<<"\nNota: "<<(alunos[i]->getNota())<<std::endl<<std::endl;
    }
}
