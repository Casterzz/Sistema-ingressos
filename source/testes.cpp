#include "testes.h"
#include <iostream>

const string TUCodigoEvento::VALOR_VALIDO = "020";
const string TUCodigoEvento::VALOR_INVALIDO_LETRA = "abc";
const string TUCodigoEvento::VALOR_INVALIDO_MAIOR = "0000";
const string TUCodigoEvento::VALOR_INVALIDO_MENOR = "00";

void TUCodigoEvento::monta() {
    pCodigo = new CodigoEvento();
    cout << "\033[32mOK (Monta)\n\033[0m";
    return;
}

void TUCodigoEvento::desmonta() {
    delete pCodigo;
    cout << "\033[32mOK (Desmonta)\n\033[0m";
    return;
}

void TUCodigoEvento::testarCenarioSucesso() {
    try {
        pCodigo->setCodigo(VALOR_VALIDO);       
        if (VALOR_VALIDO.compare(pCodigo->getCodigo()) != 0) {
            cout << "\033[31mERRO TestarCenarioSucesso\n\033[0m";
        }
        cout << "\033[32mOK TestarCenarioSucesso\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[31mERRO TestarCenarioSucesso\n\033[0m";
    }
    return;
}

void TUCodigoEvento::testarCenarioFalha() {
    try {
        pCodigo->setCodigo(VALOR_INVALIDO_LETRA);
        cout << "\033[31mERRO TestarCenarioFalha | LETRA\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | LETRA\n\033[0m";
    }
    try {
        pCodigo->setCodigo(VALOR_INVALIDO_MAIOR);
        cout << "\033[31mERRO TestarCenarioFalha | GRANDE\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | GRANDE\n\033[0m";
    }
    try {
        pCodigo->setCodigo(VALOR_INVALIDO_MENOR);
        cout << "\033[31mERRO TestarCenarioFalha | MENOR\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | MENOR\n\033[0m";
    }
    return;
}

void TUCodigoEvento::run() {
    cout << "\n\n\033[33;1mTestando CodigoEvento...\n\033[0m";
    monta();
    testarCenarioSucesso();
    testarCenarioFalha();
    desmonta();

    return;
}

// ------------------------------------------------------------------------------

const string TUCodigoApresentacao::VALOR_VALIDO = "0020";
const string TUCodigoApresentacao::VALOR_INVALIDO_LETRA = "abcd";
const string TUCodigoApresentacao::VALOR_INVALIDO_MAIOR = "00000";
const string TUCodigoApresentacao::VALOR_INVALIDO_MENOR = "000";

void TUCodigoApresentacao::monta() {
    pCodigo = new CodigoApresentacao();
    cout << "\033[32mOK (Monta)\n\033[0m";
    return;
}

void TUCodigoApresentacao::desmonta() {
    delete pCodigo;
    cout << "\033[32mOK (Desmonta)\n\033[0m";
    return;
}

void TUCodigoApresentacao::testarCenarioSucesso() {
    try {
        pCodigo->setCodigo(VALOR_VALIDO);       
        if (VALOR_VALIDO.compare(pCodigo->getCodigo()) != 0) {
            cout << "\033[31mERRO TestarCenarioSucesso\n\033[0m";
        }
        cout << "\033[32mOK TestarCenarioSucesso\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[31mERRO TestarCenarioSucesso\n\033[0m";
    }
    return;
}

void TUCodigoApresentacao::testarCenarioFalha() {
    try {
        pCodigo->setCodigo(VALOR_INVALIDO_LETRA);
        cout << "\033[31mERRO TestarCenarioFalha | LETRA\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | LETRA\n\033[0m";
    }
    try {
        pCodigo->setCodigo(VALOR_INVALIDO_MAIOR);
        cout << "\033[31mERRO TestarCenarioFalha | GRANDE\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | GRANDE\n\033[0m";
    }
    try {
        pCodigo->setCodigo(VALOR_INVALIDO_MENOR);
        cout << "\033[31mERRO TestarCenarioFalha | MENOR\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | MENOR\n\033[0m";
    }
    return;
}

void TUCodigoApresentacao::run() {
    cout << "\n\n\033[33;1mTestando CodigoApresentacao...\n\033[0m";
    monta();
    testarCenarioSucesso();
    testarCenarioFalha();
    desmonta();

    return;
}

// ------------------------------------------------------------------------------

const string TUCodigoIngresso::VALOR_VALIDO = "00020";
const string TUCodigoIngresso::VALOR_INVALIDO_LETRA = "abcde";
const string TUCodigoIngresso::VALOR_INVALIDO_MAIOR = "000000";
const string TUCodigoIngresso::VALOR_INVALIDO_MENOR = "0000";

void TUCodigoIngresso::monta() {
    pCodigo = new CodigoIngresso();
    cout << "\033[32mOK (Monta)\n\033[0m";
}

void TUCodigoIngresso::desmonta() {
    delete pCodigo;
    cout << "\033[32mOK (Desmonta)\n\033[0m";
}

void TUCodigoIngresso::testarCenarioSucesso() {
    try {
        pCodigo->setCodigo(VALOR_VALIDO);       
        if (VALOR_VALIDO.compare(pCodigo->getCodigo()) != 0) {
            cout << "\033[31mERRO TestarCenarioSucesso\n\033[0m";
        }
        cout << "\033[32mOK TestarCenarioSucesso\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[31mERRO TestarCenarioSucesso\n\033[0m";
    }
    return;
}

void TUCodigoIngresso::testarCenarioFalha() {
    try {
        pCodigo->setCodigo(VALOR_INVALIDO_LETRA);
        cout << "\033[31mERRO TestarCenarioFalha | LETRA\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | LETRA\n\033[0m";
    }
    try {
        pCodigo->setCodigo(VALOR_INVALIDO_MAIOR);
        cout << "\033[31mERRO TestarCenarioFalha | GRANDE\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | GRANDE\n\033[0m";
    }
    try {
        pCodigo->setCodigo(VALOR_INVALIDO_MENOR);
        cout << "\033[31mERRO TestarCenarioFalha | MENOR\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | MENOR\n\033[0m";
    }
    return;
}

void TUCodigoIngresso::run() {
    cout << "\n\n\033[33;1mTestando CodigoIngresso...\n\033[0m";
    monta();
    testarCenarioSucesso();
    testarCenarioFalha();
    desmonta();

    return;
}

// ------------------------------------------------------------------------------

const string TUNomeEvento::NOME_VALIDO = "3v3nt0 d0 J040 P3dr0";
const string TUNomeEvento::NOME_INVALIDO_SIMBOLO = "&v&nto do Joao P&dro";
const string TUNomeEvento::NOME_INVALIDO_MAIOR = "Evento do Joao Pedro da Silva";
const string TUNomeEvento::NOME_INVALIDO_MENOR = "Evento do Joao";
const string TUNomeEvento::NOME_INVALIDO_ESPACOS = "Evento do      Pedro";
const string TUNomeEvento::NOME_INVALIDO_NUMEROS = "43779487293874943545";

void TUNomeEvento::monta() {
    pNome = new NomeEvento();
    cout << "\033[32mOK (Monta)\n\033[0m";
    return;
}

void TUNomeEvento::desmonta() {
    delete pNome;
    cout << "\033[32mOK (Desmonta)\n\033[0m";
    return;
}

void TUNomeEvento::testarCenarioSucesso() {
    try {
        pNome->setNome(NOME_VALIDO);       
        if (NOME_VALIDO.compare(pNome->getNome()) != 0) {
            cout << "\033[31mERRO TestarCenarioSucesso\n\033[0m";
        }
        cout << "\033[32mOK TestarCenarioSucesso\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[31mERRO TestarCenarioSucesso\n\033[0m";
    }
    return;
}

void TUNomeEvento::testarCenarioFalha() {
    try {
        pNome->setNome(NOME_INVALIDO_SIMBOLO);
        cout << "\033[31mERRO TestarCenarioFalha | SIMBOLO\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | SIMBOLO\n\033[0m";
    }
    try {
        pNome->setNome(NOME_INVALIDO_MAIOR);
        cout << "\033[31mERRO TestarCenarioFalha | GRANDE\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | GRANDE\n\033[0m";
    }
    try {
        pNome->setNome(NOME_INVALIDO_MENOR);
        cout << "\033[31mERRO TestarCenarioFalha | MENOR\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | MENOR\n\033[0m";
    }
    try {
        pNome->setNome(NOME_INVALIDO_ESPACOS);
        cout << "\033[31mERRO TestarCenarioFalha | ESPACOS\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | ESPACOS\n\033[0m";
    }
    try {
        pNome->setNome(NOME_INVALIDO_NUMEROS);
        cout << "\033[31mERRO TestarCenarioFalha | NUMEROS\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | NUMEROS\n\033[0m";
    }
    return;
}

void TUNomeEvento::run() {
    cout << "\n\n\033[33;1mTestando CodigoIngresso...\n\033[0m";
    monta();
    testarCenarioSucesso();
    testarCenarioFalha();
    desmonta();

    return;
}