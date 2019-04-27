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

    testeEvento.run();
    testeCodigoSeguranca.run();
    testeApresentacao.run();
    testeIngresso.run();
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

    cout << "\n\033[33;1mTestando Entidades\033[0m\n";

    testeUsuario.run();

    cout << "\n\033[34;1mTestes de Entidades Concluídos\033[0m\n";
    cout << "\n\033[34;1mTestes Concluídos\033[0m\n\n";

    return 0;
}
