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

    cout << "\n\033[33;1mTestando Dominios\033[0m\n";

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

    cout << "\n\033[34;1mTestes de Dominios Concluídos\033[0m\n";

    TUUsuario testeUsuario;
    TUApresentacao testeApresentacao;
    TUEvento testeEvento;
    TUIngresso testeIngresso;
    TUCartaoCredito testeCartaoCredito;

    cout << "\n\033[33;1mTestando Entidades\033[0m\n";

    testeUsuario.run();
    testeApresentacao.run();
    testeEvento.run();
    testeIngresso.run();
    testeCartaoCredito.run();

    cout << "\n\033[34;1mTestes de Entidades Concluídos\033[0m\n";
    cout << "\n\033[34;1mTestes Concluídos\033[0m\n\n";

    return 0;
}
