#include <iostream>

#include "dominios.h"
#include "entidades.h"
#include "testes.h"

using namespace std;

int main() {

    TUCodigoEvento testeCodigoEvento;
    TUCodigoSeguranca testeCodigoSeguranca;
    TUCodigoApresentacao testeCodigoApresentacao;
    TUCodigoIngresso testeCodigoIngresso;
    TUNomeEvento testeNomeEvento;
    TUData testeData;
    TUSenha testeSenha;
    TUCidade testeCidade;
    TUClasseEvento testeClasseEvento;
    TUNumeroSala testeNumeroSala;
    TUDisponibilidade testeDisponibilidade;
    TUFaixaEtaria testeFaixaEtaria;
    TUEstado testeEstado;
    TUHorario testeHorario;
    TUDataValidade testeDataValidade;
    TUPreco testePreco;
    TUNumeroCartao testeCartao;
    TUCPF testeCPF;

    cout << "\n--------- Testando Dominios ----------------------";

    testeCodigoEvento.run();
    testeCodigoSeguranca.run();
    testeCodigoApresentacao.run();
    testeCodigoIngresso.run();
    testeNomeEvento.run();
    testeData.run();
    testeSenha.run();
    testeCidade.run();
    testeClasseEvento.run();
    testeNumeroSala.run();
    testeDisponibilidade.run();
    testeFaixaEtaria.run();
    testeEstado.run();
    testeHorario.run();
    testeDataValidade.run();
    testePreco.run();
    testeCartao.run();
    testeCPF.run();

    cout << "\n--------- Testes de Dominios Concluídos ----------\n";

    TUUsuario testeUsuario;
    TUApresentacao testeApresentacao;
    TUEvento testeEvento;
    TUIngresso testeIngresso;
    TUCartaoCredito testeCartaoCredito;

    cout << "\n--------- Testando Entidades ---------------------\n";

    testeUsuario.run();
    testeApresentacao.run();
    testeEvento.run();
    testeIngresso.run();
    testeCartaoCredito.run();

    cout << "\n--------- Testes de Entidades Concluídos ---------\n";
    cout << "\n--------- Testes Concluídos ----------------------\n";

    return 0;
}
