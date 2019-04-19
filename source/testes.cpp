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
            cout << "\033[31mERRO TestarCenarioSucesso | UNICO\n\033[0m";
        }
        cout << "\033[32mOK TestarCenarioSucesso | UNICO\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[31mERRO TestarCenarioSucesso | UNICO\n\033[0m";
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
            cout << "\033[31mERRO TestarCenarioSucesso | UNICO\n\033[0m";
        }
        cout << "\033[32mOK TestarCenarioSucesso | UNICO\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[31mERRO TestarCenarioSucesso | UNICO\n\033[0m";
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
            cout << "\033[31mERRO TestarCenarioSucesso | UNICO\n\033[0m";
        }
        cout << "\033[32mOK TestarCenarioSucesso | UNICO\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[31mERRO TestarCenarioSucesso | UNICO\n\033[0m";
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
            cout << "\033[31mERRO TestarCenarioSucesso | UNICO\n\033[0m";
        }
        cout << "\033[32mOK TestarCenarioSucesso | UNICO\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[31mERRO TestarCenarioSucesso | UNICO\n\033[0m";
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
    cout << "\n\n\033[33;1mTestando NomeEvento...\n\033[0m";
    monta();
    testarCenarioSucesso();
    testarCenarioFalha();
    desmonta();

    return;
}

// ------------------------------------------------------------------------------

const string TUData::DATA_VALIDA_NORMAL = "18/04/19";
const string TUData::DATA_VALIDA_BISSEXTO = "29/02/20";
const string TUData::DATA_INVALIDA_MAIOR = "239/05/24";
const string TUData::DATA_INVALIDA_MENOR = "18/4/19";
const string TUData::DATA_INVALIDA_BARRAS = "18 /4 19";
const string TUData::DATA_INVALIDA_ANO = "18/04/AA";
const string TUData::DATA_INVALIDA_MES = "18/MM/19";
const string TUData::DATA_INVALIDA_DIA_31 = "31/04/19";
const string TUData::DATA_INVALIDA_DIA_30 = "30/02/19";
const string TUData::DATA_INVALIDA_BISSEXTO = "29/02/19";

void TUData::monta() {
    pData = new Data();
    cout << "\033[32mOK (Monta)\n\033[0m";
    return;
}

void TUData::desmonta() {
    delete pData;
    cout << "\033[32mOK (Desmonta)\n\033[0m";
    return;
}

void TUData::testarCenarioSucesso() {
    try {
        pData->setData(DATA_VALIDA_NORMAL);
        if (DATA_VALIDA_NORMAL.compare(pData->getData()) != 0) {
            cout << "\033[31mERRO TestarCenarioSucesso | NORMAL\n\033[0m";
        }
        cout << "\033[32mOK TestarCenarioSucesso | NORMAL\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[31mERRO TestarCenarioSucesso | NORMAL\n\033[0m";
    }
    try {
        pData->setData(DATA_VALIDA_BISSEXTO);       
        if (DATA_VALIDA_BISSEXTO.compare(pData->getData()) != 0) {
            cout << "\033[31mERRO TestarCenarioSucesso | BISSEXTO VALIDO\n\033[0m";
        }
        cout << "\033[32mOK TestarCenarioSucesso | BISSEXTO VALIDO\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[31mERRO TestarCenarioSucesso | BISSEXTO VALIDO\n\033[0m";
    }
    return;
}

void TUData::testarCenarioFalha() {
    try {
        pData->setData(DATA_INVALIDA_MENOR);
        cout << "\033[31mERRO TestarCenarioFalha | MENOR\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | MENOR\n\033[0m";
    }
    try {
        pData->setData(DATA_INVALIDA_MAIOR);
        cout << "\033[31mERRO TestarCenarioFalha | MAIOR\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | MAIOR\n\033[0m";
    }
    try {
        pData->setData(DATA_INVALIDA_BARRAS);
        cout << "\033[31mERRO TestarCenarioFalha | BARRAS\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | BARRAS\n\033[0m";
    }
    try {
        pData->setData(DATA_INVALIDA_ANO);
        cout << "\033[31mERRO TestarCenarioFalha | ANO\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | ANO\n\033[0m";
    }
    try {
        pData->setData(DATA_INVALIDA_MES);
        cout << "\033[31mERRO TestarCenarioFalha | MES\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | MES\n\033[0m";
    }
    try {
        pData->setData(DATA_INVALIDA_DIA_31);
        cout << "\033[31mERRO TestarCenarioFalha | DIA 31\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | DIA 31\n\033[0m";
    }
    try {
        pData->setData(DATA_INVALIDA_DIA_30);
        cout << "\033[31mERRO TestarCenarioFalha | DIA 30\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | DIA 30\n\033[0m";
    }
    try {
        pData->setData(DATA_INVALIDA_BISSEXTO);
        cout << "\033[31mERRO TestarCenarioFalha | BISSEXTO INVALIDO\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | BISSEXTO INVALIDO\n\033[0m";
    }
    return;
}

void TUData::run() {
    cout << "\n\n\033[33;1mTestando Data...\n\033[0m";
    monta();
    testarCenarioSucesso();
    testarCenarioFalha();
    desmonta();

    return;
}
