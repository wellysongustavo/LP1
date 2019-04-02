#include <iostream>
#include <string>

#include "funcionario.h"

int main (int argc, char const * argv []) {
	/* Instancia um novo funcionario da empresa JBS */
	Funcionario novo;
	novo.setMatricula(12345);
	novo.setNome("Sandra Aparecida Sumiu");
	novo.setSalario(2387.50);
	Funcionario* func = novo;
	std::cout << "Dados do novo funcionario: " << func << std::endl;
	
	return 0;
}