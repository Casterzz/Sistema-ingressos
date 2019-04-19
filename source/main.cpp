#include <iostream>

#include "dominios.h"
#include "entidades.h"
#include "testes.h"

using namespace std;

int main() {

	TUCodigoEvento testeEvento;
	TUCodigoApresentacao testeApresentacao;
	TUCodigoIngresso testeIngresso;
	TUNomeEvento testeNomeEvento;
	TUData testeData;

	testeEvento.run();
	testeApresentacao.run();
	testeIngresso.run();
	testeNomeEvento.run();
	testeData.run();

	return 0;
}