#include <iostream>

#include "dominios.h"
#include "entidades.h"
#include "testes.h"

using namespace std;

int main() {

	TUCodigoEvento testeEvento;
	TUCodigoSeguranca testeCodigoSeguranca;
	TUCodigoApresentacao testeApresentacao;
	TUCodigoIngresso testeIngresso;
	TUNomeEvento testeNomeEvento;
	TUData testeData;
	TUFaixaEtaria testeFaixaEtaria;
	TUEstado testeEstado;
	TUHorario testeHorario;
	TUDataValidade testeDataValidade;
	TUPreco testePreco;

	testeEvento.run();
	testeCodigoSeguranca.run();
	testeApresentacao.run();
	testeIngresso.run();
	testeNomeEvento.run();
	testeData.run();
	testeFaixaEtaria.run();
	testeEstado.run();
	testeHorario.run();
	testeDataValidade.run();
	testePreco.run();

	cout << "\n\033[33;1mTestes Concluídos\033[0m\n\n";

	return 0;
}