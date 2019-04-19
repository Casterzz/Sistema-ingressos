#include "testes.h"
#include <iostream>

const string TUCodigoEvento::VALOR_VALIDO = "020";
const string TUCodigoEvento::VALOR_INVALIDO_LETRA = "abc";
const string TUCodigoEvento::VALOR_INVALIDO_MAIOR = "0000";
const string TUCodigoEvento::VALOR_INVALIDO_MENOR = "00";
    

void TUCodigoEvento::monta() {
    pCodigo = new CodigoEvento();
    cout << "\033[32mOK (Monta)\n\033[0m";
}

void TUCodigoEvento::desmonta() {
    delete pCodigo;
    cout << "\033[32mOK (Desmonta)\n\033[0m";
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
        return;
    }
}

void TUCodigoEvento::run() {
    cout << "\033[33;1mTestando CodigoEvento...\n\n\033[0m";
    monta();
    testarCenarioSucesso();
    testarCenarioFalha();
    desmonta();

    return;
}
