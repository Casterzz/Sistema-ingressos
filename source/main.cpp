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

	testeEvento.run();
	testeApresentacao.run();
	testeIngresso.run();
	testeNomeEvento.run();

	return 0;
}