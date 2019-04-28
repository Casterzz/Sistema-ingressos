#include "testes.h"
#include <iostream>

// ----------------------------------------------------------------------------
// 								DOMINIOS
// ----------------------------------------------------------------------------

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

const string TUCodigoSeguranca::VALOR_VALIDO = "020";
const string TUCodigoSeguranca::VALOR_INVALIDO_LETRA = "abc";
const string TUCodigoSeguranca::VALOR_INVALIDO_MAIOR = "0000";
const string TUCodigoSeguranca::VALOR_INVALIDO_MENOR = "00";

void TUCodigoSeguranca::monta() {
    pCodigo = new CodigoSeguranca();
    cout << "\033[32mOK (Monta)\n\033[0m";
    return;
}

void TUCodigoSeguranca::desmonta() {
    delete pCodigo;
    cout << "\033[32mOK (Desmonta)\n\033[0m";
    return;
}

void TUCodigoSeguranca::testarCenarioSucesso() {
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

void TUCodigoSeguranca::testarCenarioFalha() {
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

void TUCodigoSeguranca::run() {
    cout << "\n\n\033[33;1mTestando CodigoSeguranca...\n\033[0m";
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

// ------------------------------------------------------------------------------

const string TUSenha::VALOR_VALIDO = "Oi3ule";
const string TUSenha::VALOR_INVALIDO_MAIOR = "Oi3uler";
const string TUSenha::VALOR_INVALIDO_MENOR = "Oi3ul";
const string TUSenha::VALOR_INVALIDO_REPETIDO = "Oi3iu3";
const string TUSenha::VALOR_INVALIDO_MINUS = "oi3iu3";
const string TUSenha::VALOR_INVALIDO_MAIUS = "ABACAX";
const string TUSenha::VALOR_INVALIDO_SIMBOLOS = "/>78!a";

void TUSenha::monta() {
    pSenha = new Senha();
    cout << "\033[32mOK (Monta)\n\033[0m";
    return;
}

void TUSenha::desmonta() {
    delete pSenha;
    cout << "\033[32mOK (Desmonta)\n\033[0m";
    return;
}

void TUSenha::testarCenarioSucesso() {
    try {
        pSenha->setSenha(VALOR_VALIDO);       
        if (VALOR_VALIDO.compare(pSenha->getSenha()) != 0) {
            cout << "\033[31mERRO TestarCenarioSucesso | UNICO\n\033[0m";
        }
        cout << "\033[32mOK TestarCenarioSucesso | UNICO\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[31mERRO TestarCenarioSucesso | UNICO\n\033[0m";
    }
    return;
}

void TUSenha::testarCenarioFalha() {
    try {
        pSenha->setSenha(VALOR_INVALIDO_MAIOR);
        cout << "\033[31mERRO TestarCenarioFalha | MAIOR\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | MAIOR\n\033[0m";
    }
    try {
        pSenha->setSenha(VALOR_INVALIDO_MENOR);
        cout << "\033[31mERRO TestarCenarioFalha | MENOR\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | MENOR\n\033[0m";
    }
    try {
        pSenha->setSenha(VALOR_INVALIDO_REPETIDO);
        cout << "\033[31mERRO TestarCenarioFalha | REPETIDO\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | REPETIDO\n\033[0m";
    }
    try {
        pSenha->setSenha(VALOR_INVALIDO_MAIUS);
        cout << "\033[31mERRO TestarCenarioFalha | MAIUSCULO\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | MAIUSCULO\n\033[0m";
    }
    try {
        pSenha->setSenha(VALOR_INVALIDO_MINUS);
        cout << "\033[31mERRO TestarCenarioFalha | MINUSCULO\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | MINUSCULO\n\033[0m";
    }
    try {
        pSenha->setSenha(VALOR_INVALIDO_SIMBOLOS);
        cout << "\033[31mERRO TestarCenarioFalha | SIMBOLO\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | SIMBOLO\n\033[0m";
    }
    return;
}

void TUSenha::run() {
    cout << "\n\n\033[33;1mTestando Senha...\n\033[0m";
    monta();
    testarCenarioSucesso();
    testarCenarioFalha();
    desmonta();

    return;
}

// --------------------------------------------------------------------

const string TUCidade::VALOR_VALIDO = "Casa do Joao. 2";
const string TUCidade::VALOR_INVALIDO_PONTO = "Casa do Joa0. 2";
const string TUCidade::VALOR_INVALIDO_ESPACOS = "Casa do  joao.2";
const string TUCidade::VALOR_INVALIDO_MENOR = "Casa";
const string TUCidade::VALOR_INVALIDO_MAIOR = "Joaquim da Silva Barbosa";
const string TUCidade::VALOR_INVALIDO_SIMBOLOS = "C@s@ do J*a*. 2";
const string TUCidade::VALOR_INVALIDO_NUMEROS = "123456789101112";
const string TUCidade::VALOR_INVALIDO_PONTO2 = ".Casa do Joao.3";

void TUCidade::monta() {
    pCidade = new Cidade();
    cout << "\033[32mOK (Monta)\n\033[0m";
    return;
}

void TUCidade::desmonta() {
    delete pCidade;
    cout << "\033[32mOK (Desmonta)\n\033[0m";
    return;
}

void TUCidade::testarCenarioSucesso() {
    try {
        pCidade->setCidade(VALOR_VALIDO);       
        if (VALOR_VALIDO.compare(pCidade->getCidade()) != 0) {
            cout << "\033[31mERRO TestarCenarioSucesso | UNICO\n\033[0m";
        }
        cout << "\033[32mOK TestarCenarioSucesso | UNICO\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[31mERRO TestarCenarioSucesso | UNICO\n\033[0m";
    }
    return;
}

void TUCidade::testarCenarioFalha() {
    try {
        pCidade->setCidade(VALOR_INVALIDO_PONTO);
        cout << "\033[31mERRO TestarCenarioFalha | PONTO\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | PONTO\n\033[0m";
    }
    try {
        pCidade->setCidade(VALOR_INVALIDO_ESPACOS);
        cout << "\033[31mERRO TestarCenarioFalha | ESPACOS\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | ESPACOS\n\033[0m";
    }
    try {
        pCidade->setCidade(VALOR_INVALIDO_MENOR);
        cout << "\033[31mERRO TestarCenarioFalha | MENOR\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | MENOR\n\033[0m";
    }
    try {
        pCidade->setCidade(VALOR_INVALIDO_MAIOR);
        cout << "\033[31mERRO TestarCenarioFalha | MAIOR\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | MAIOR\n\033[0m";
    }
    try {
        pCidade->setCidade(VALOR_INVALIDO_SIMBOLOS);
        cout << "\033[31mERRO TestarCenarioFalha | SIMBOLOS\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | SIMBOLOS\n\033[0m";
    }
    try {
        pCidade->setCidade(VALOR_INVALIDO_NUMEROS);
        cout << "\033[31mERRO TestarCenarioFalha | NUMEROS\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | NUMEROS\n\033[0m";
    }
    try {
        pCidade->setCidade(VALOR_INVALIDO_PONTO2);
        cout << "\033[31mERRO TestarCenarioFalha | PONTO2\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | PONTO2\n\033[0m";
    }
    return;
}

void TUCidade::run() {
    cout << "\n\n\033[33;1mTestando Cidade...\n\033[0m";
    monta();
    testarCenarioSucesso();
    testarCenarioFalha();
    desmonta();

    return;
}

// --------------------------------------------------------------

const string TUClasseEvento::VALOR_VALIDO = "2";
const string TUClasseEvento::VALOR_INVALIDO_LETRA = "a";
const string TUClasseEvento::VALOR_INVALIDO_MAIOR = "22";
const string TUClasseEvento::VALOR_INVALIDO_OVERFLOW = "7";

void TUClasseEvento::monta() {
    pEvento = new ClasseEvento();
    cout << "\033[32mOK (Monta)\n\033[0m";
    return;
}

void TUClasseEvento::desmonta() {
    delete pEvento;
    cout << "\033[32mOK (Desmonta)\n\033[0m";
    return;
}

void TUClasseEvento::testarCenarioSucesso() {
    try {
        pEvento->setClasseEvento(VALOR_VALIDO);       
        if (VALOR_VALIDO.compare(pEvento->getClasseEvento()) != 0) {
            cout << "\033[31mERRO TestarCenarioSucesso | UNICO\n\033[0m";
        }
        cout << "\033[32mOK TestarCenarioSucesso | UNICO\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[31mERRO TestarCenarioSucesso | UNICO\n\033[0m";
    }
    return;
}

void TUClasseEvento::testarCenarioFalha() {
    try {
        pEvento->setClasseEvento(VALOR_INVALIDO_LETRA);
        cout << "\033[31mERRO TestarCenarioFalha | LETRA\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | LETRA\n\033[0m";
    }
    try {
        pEvento->setClasseEvento(VALOR_INVALIDO_MAIOR);
        cout << "\033[31mERRO TestarCenarioFalha | MAIOR\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | MAIOR\n\033[0m";
    }
    try {
        pEvento->setClasseEvento(VALOR_INVALIDO_OVERFLOW);
        cout << "\033[31mERRO TestarCenarioFalha | OVERFLOW\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | OVERFLOW\n\033[0m";
    }
    return;
}

void TUClasseEvento::run() {
    cout << "\n\n\033[33;1mTestando ClasseEvento...\n\033[0m";
    monta();
    testarCenarioSucesso();
    testarCenarioFalha();
    desmonta();
}
// --------------------------------------------------------------

const string TUNumeroSala::VALOR_VALIDO = "2";
const string TUNumeroSala::VALOR_VALIDO_LIMITE = "10";
const string TUNumeroSala::VALOR_VALIDO_NPADRAO = "02";
const string TUNumeroSala::VALOR_INVALIDO_LETRA = "a";
const string TUNumeroSala::VALOR_INVALIDO_OVERFLOW = "11";
const string TUNumeroSala::VALOR_INVALIDO_MAIOR = "222";

void TUNumeroSala::monta() {
    pSala = new NumeroSala();
    cout << "\033[32mOK (Monta)\n\033[0m";
    return;
}

void TUNumeroSala::desmonta() {
    delete pSala;
    cout << "\033[32mOK (Desmonta)\n\033[0m";
    return;
}

void TUNumeroSala::testarCenarioSucesso() {
    try {
        pSala->setSala(VALOR_VALIDO);       
        if (VALOR_VALIDO.compare(pSala->getSala()) != 0) {
            cout << "\033[31mERRO TestarCenarioSucesso | INTERMEDIARIO\n\033[0m";
        }
        cout << "\033[32mOK TestarCenarioSucesso | INTERMEDIARIO\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[31mERRO TestarCenarioSucesso | INTERMEDIARIO\n\033[0m";
    }
    try {
        pSala->setSala(VALOR_VALIDO_LIMITE);       
        if (VALOR_VALIDO_LIMITE.compare(pSala->getSala()) != 0) {
            cout << "\033[31mERRO TestarCenarioSucesso | LIMITE\n\033[0m";
        }
        cout << "\033[32mOK TestarCenarioSucesso | LIMITE\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[31mERRO TestarCenarioSucesso | LIMITE\n\033[0m";
    }
    try {
        pSala->setSala(VALOR_VALIDO_NPADRAO);       
        if (VALOR_VALIDO_NPADRAO.compare(pSala->getSala()) != 0) {
            cout << "\033[31mERRO TestarCenarioSucesso | NPADRAO\n\033[0m";
        }
        cout << "\033[32mOK TestarCenarioSucesso | NPADRAO\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[31mERRO TestarCenarioSucesso | NPADRAO\n\033[0m";
    }
    return;
}

void TUNumeroSala::testarCenarioFalha() {
    try {
        pSala->setSala(VALOR_INVALIDO_LETRA);
        cout << "\033[31mERRO TestarCenarioFalha | LETRA\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | LETRA\n\033[0m";
    }
    try {
        pSala->setSala(VALOR_INVALIDO_OVERFLOW);
        cout << "\033[31mERRO TestarCenarioFalha | OVERFLOW\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | OVERFLOW\n\033[0m";
    }
    try {
        pSala->setSala(VALOR_INVALIDO_MAIOR);
        cout << "\033[31mERRO TestarCenarioFalha | MAIOR\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | MAIOR\n\033[0m";
    }
    return;
}

void TUNumeroSala::run() {
    cout << "\n\n\033[33;1mTestando NumeroSala...\n\033[0m";
    monta();
    testarCenarioSucesso();
    testarCenarioFalha();
    desmonta();

    return;
}

// --------------------------------------------------------------

const string TUDisponibilidade::VALOR_VALIDO = "2";
const string TUDisponibilidade::VALOR_VALIDO_LIMITE = "250";
const string TUDisponibilidade::VALOR_VALIDO_NPADRAO = "07";
const string TUDisponibilidade::VALOR_INVALIDO_LETRA = "abc";
const string TUDisponibilidade::VALOR_INVALIDO_OVERFLOW = "256";
const string TUDisponibilidade::VALOR_INVALIDO_TAMANHO = "9999";

void TUDisponibilidade::monta() {
    pDisponibilidade = new Disponibilidade();
    cout << "\033[32mOK (Monta)\n\033[0m";
    return;
}

void TUDisponibilidade::desmonta() {
    delete pDisponibilidade;
    cout << "\033[32mOK (Desmonta)\n\033[0m";
    return;
}

void TUDisponibilidade::testarCenarioSucesso() {
    try {
        pDisponibilidade->setDisponibilidade(VALOR_VALIDO);       
        if (VALOR_VALIDO.compare(pDisponibilidade->getDisponibilidade()) != 0) {
            cout << "\033[31mERRO TestarCenarioSucesso | INTERMEDIARIO\n\033[0m";
        }
        cout << "\033[32mOK TestarCenarioSucesso | INTERMEDIARIO\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[31mERRO TestarCenarioSucesso | INTERMEDIARIO\n\033[0m";
    }
    try {
        pDisponibilidade->setDisponibilidade(VALOR_VALIDO_LIMITE);       
        if (VALOR_VALIDO_LIMITE.compare(pDisponibilidade->getDisponibilidade()) != 0) {
            cout << "\033[31mERRO TestarCenarioSucesso | LIMITE\n\033[0m";
        }
        cout << "\033[32mOK TestarCenarioSucesso | LIMITE\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[31mERRO TestarCenarioSucesso | LIMITE\n\033[0m";
    }
    try {
        pDisponibilidade->setDisponibilidade(VALOR_VALIDO_NPADRAO);       
        if (VALOR_VALIDO_NPADRAO.compare(pDisponibilidade->getDisponibilidade()) != 0) {
            cout << "\033[31mERRO TestarCenarioSucesso | NPADRAO\n\033[0m";
        }
        cout << "\033[32mOK TestarCenarioSucesso | NPADRAO\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[31mERRO TestarCenarioSucesso | NPADRAO\n\033[0m";
    }
    return;
}

void TUDisponibilidade::testarCenarioFalha() {
    try {
        pDisponibilidade->setDisponibilidade(VALOR_INVALIDO_LETRA);
        cout << "\033[31mERRO TestarCenarioFalha | LETRA\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | LETRA\n\033[0m";
    }
    try {
        pDisponibilidade->setDisponibilidade(VALOR_INVALIDO_OVERFLOW);
        cout << "\033[31mERRO TestarCenarioFalha | OVERFLOW\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | OVERFLOW\n\033[0m";
    }
    try {
        pDisponibilidade->setDisponibilidade(VALOR_INVALIDO_TAMANHO);
        cout << "\033[31mERRO TestarCenarioFalha | MAIOR\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | MAIOR\n\033[0m";
    }
    return;
}

void TUDisponibilidade::run() {
    cout << "\n\n\033[33;1mTestando Disponibilidade...\n\033[0m";
    monta();
    testarCenarioSucesso();
    testarCenarioFalha();
    desmonta();

    return;
}

// ------------------------------------------------------------------------------

const string TUFaixaEtaria::VALOR_VALIDO_LETRA = "L";
const string TUFaixaEtaria::VALOR_VALIDO_NUMERO = "10";
const string TUFaixaEtaria::VALOR_INVALIDO_LETRA = "M";
const string TUFaixaEtaria::VALOR_INVALIDO_BARRA = "L/";
const string TUFaixaEtaria::VALOR_INVALIDO_NUMERO = "00";
const string TUFaixaEtaria::VALOR_INVALIDO_TAMANHO = "1800";

void TUFaixaEtaria::monta() {
    pFaixa = new FaixaEtaria();
    cout << "\033[32mOK (Monta)\n\033[0m";
}

void TUFaixaEtaria::desmonta() {
    delete pFaixa;
    cout << "\033[32mOK (Desmonta)\n\033[0m";
}

void TUFaixaEtaria::testarCenarioSucesso() {
    try {
        pFaixa->setFaixa(VALOR_VALIDO_LETRA);
        if (VALOR_VALIDO_LETRA.compare(pFaixa->getFaixa()) != 0) {
            cout << "\033[31mERRO TestarCenarioSucesso | LETRA\n\033[0m";
        }
        cout << "\033[32mOK TestarCenarioSucesso | LETRA\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[31mERRO TestarCenarioSucesso | LETRA\n\033[0m";
    }
    try {
        pFaixa->setFaixa(VALOR_VALIDO_NUMERO);
        if (VALOR_VALIDO_NUMERO.compare(pFaixa->getFaixa()) != 0) {
            cout << "\033[31mERRO TestarCenarioSucesso | NUMERO\n\033[0m";
        }
        cout << "\033[32mOK TestarCenarioSucesso | NUMERO\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[31mERRO TestarCenarioSucesso | NUMERO\n\033[0m";
    }
    return;
}

void TUFaixaEtaria::testarCenarioFalha() {
    try {
        pFaixa->setFaixa(VALOR_INVALIDO_LETRA);
        cout << "\033[31mERRO TestarCenarioFalha | LETRA\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | LETRA\n\033[0m";
    }
    try {
        pFaixa->setFaixa(VALOR_INVALIDO_BARRA);
        cout << "\033[31mERRO TestarCenarioFalha | BARRA\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | BARRA\n\033[0m";
    }
    try {
        pFaixa->setFaixa(VALOR_INVALIDO_NUMERO);
        cout << "\033[31mERRO TestarCenarioFalha | NUMERO\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | NUMERO\n\033[0m";
    }
    try {
        pFaixa->setFaixa(VALOR_INVALIDO_TAMANHO);
        cout << "\033[31mERRO TestarCenarioFalha | TAMANHO\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | TAMANHO\n\033[0m";
    }
    return;
}

void TUFaixaEtaria::run() {
    cout << "\n\n\033[33;1mTestando FaixaEtaria...\n\033[0m";
    monta();
    testarCenarioSucesso();
    testarCenarioFalha();
    desmonta();

    return;
}

// ------------------------------------------------------------------------------

const string TUEstado::VALOR_VALIDO = "DF";   
const string TUEstado::VALOR_INVALIDO_LETRA = "LS";
const string TUEstado::VALOR_INVALIDO_BARRA = "F/";
const string TUEstado::VALOR_INVALIDO_NUMERO = "R2";
const string TUEstado::VALOR_INVALIDO_TAMANHO = "LEIA";

void TUEstado::monta() {
    pEstado = new Estado();
    cout << "\033[32mOK (Monta)\n\033[0m";
}

void TUEstado::desmonta() {
    delete pEstado;
    cout << "\033[32mOK (Desmonta)\n\033[0m";
}

void TUEstado::testarCenarioSucesso() {
    try {
        pEstado->setEstado(VALOR_VALIDO);
        if (VALOR_VALIDO.compare(pEstado->getEstado()) != 0) {
            cout << "\033[31mERRO TestarCenarioSucesso | UNICO\n\033[0m";
        }
        cout << "\033[32mOK TestarCenarioSucesso | UNICO\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[31mERRO TestarCenarioSucesso | UNICO\n\033[0m";
    }
    return;
}

void TUEstado::testarCenarioFalha() {
    try {
        pEstado->setEstado(VALOR_INVALIDO_LETRA);
        cout << "\033[31mERRO TestarCenarioFalha | LETRA\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | LETRA\n\033[0m";
    }
    try {
        pEstado->setEstado(VALOR_INVALIDO_NUMERO);
        cout << "\033[31mERRO TestarCenarioFalha | NUMERO\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | NUMERO\n\033[0m";
    }
    try {
        pEstado->setEstado(VALOR_INVALIDO_TAMANHO);
        cout << "\033[31mERRO TestarCenarioFalha | TAMANHO\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | TAMANHO\n\033[0m";
    }
    return;
}

void TUEstado::run() {
    cout << "\n\n\033[33;1mTestando Estado...\n\033[0m";
    monta();
    testarCenarioSucesso();
    testarCenarioFalha();
    desmonta();

    return;
}

// ------------------------------------------------------------------------------

const string TUHorario::VALOR_VALIDO = "08:30";
const string TUHorario::VALOR_INVALIDO_LETRA = "08:E0";
const string TUHorario::VALOR_INVALIDO_HORA = "05:30";
const string TUHorario::VALOR_INVALIDO_MINUTO = "08:34";
const string TUHorario::VALOR_INVALIDO_TAMANHO = "08:302";   

void TUHorario::monta() {
    pHorario = new Horario();
    cout << "\033[32mOK (Monta)\n\033[0m";
}

void TUHorario::desmonta() {
    delete pHorario;
    cout << "\033[32mOK (Desmonta)\n\033[0m";
}

void TUHorario::testarCenarioSucesso() {
    try {
        pHorario->setHorario(VALOR_VALIDO);
        if (VALOR_VALIDO.compare(pHorario->getHorario()) != 0) {
            cout << "\033[31mERRO TestarCenarioSucesso | UNICO\n\033[0m";
        }
        cout << "\033[32mOK TestarCenarioSucesso | UNICO\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[31mERRO TestarCenarioSucesso | UNICO\n\033[0m";
    }
    return;
}

void TUHorario::testarCenarioFalha() {
    try {
        pHorario->setHorario(VALOR_INVALIDO_LETRA);
        cout << "\033[31mERRO TestarCenarioFalha | LETRA\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | LETRA\n\033[0m";
    }
    try {
        pHorario->setHorario(VALOR_INVALIDO_HORA);
        cout << "\033[31mERRO TestarCenarioFalha | HORA\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | HORA\n\033[0m";
    }
    try {
        pHorario->setHorario(VALOR_INVALIDO_MINUTO);
        cout << "\033[31mERRO TestarCenarioFalha | MINUTO\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | MINUTO\n\033[0m";
    }
    try {
        pHorario->setHorario(VALOR_INVALIDO_TAMANHO);
        cout << "\033[31mERRO TestarCenarioFalha | TAMANHO\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | TAMANHO\n\033[0m";
    }
    return;
}

void TUHorario::run() {
    cout << "\n\n\033[33;1mTestando Horario...\n\033[0m";
    monta();
    testarCenarioSucesso();
    testarCenarioFalha();
    desmonta();

    return;
}

// ------------------------------------------------------------------------------

const string TUDataValidade::VALOR_VALIDO = "04/19";
const string TUDataValidade::VALOR_INVALIDO_LETRA = "04/E9";
const string TUDataValidade::VALOR_INVALIDO_MES = "14/19";
const string TUDataValidade::VALOR_INVALIDO_TAMANHO = "04/192";   

void TUDataValidade::monta() {
    pDataValidade = new DataValidade();
    cout << "\033[32mOK (Monta)\n\033[0m";
}

void TUDataValidade::desmonta() {
    delete pDataValidade;
    cout << "\033[32mOK (Desmonta)\n\033[0m";
}

void TUDataValidade::testarCenarioSucesso() {
    try {
        pDataValidade->setDataValidade(VALOR_VALIDO);
        if (VALOR_VALIDO.compare(pDataValidade->getDataValidade()) != 0) {
            cout << "\033[31mERRO TestarCenarioSucesso | UNICO\n\033[0m";
        }
        cout << "\033[32mOK TestarCenarioSucesso | UNICO\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[31mERRO TestarCenarioSucesso | UNICO\n\033[0m";
    }
    return;
}

void TUDataValidade::testarCenarioFalha() {
    try {
        pDataValidade->setDataValidade(VALOR_INVALIDO_LETRA);
        cout << "\033[31mERRO TestarCenarioFalha | LETRA\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | LETRA\n\033[0m";
    }
    try {
        pDataValidade->setDataValidade(VALOR_INVALIDO_MES);
        cout << "\033[31mERRO TestarCenarioFalha | MES\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | MES\n\033[0m";
    }
    try {
        pDataValidade->setDataValidade(VALOR_INVALIDO_TAMANHO);
        cout << "\033[31mERRO TestarCenarioFalha | TAMANHO\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | TAMANHO\n\033[0m";
    }
    return;
}

void TUDataValidade::run() {
    cout << "\n\n\033[33;1mTestando DataValidade...\n\033[0m";
    monta();
    testarCenarioSucesso();
    testarCenarioFalha();
    desmonta();

    return;
}

// ------------------------------------------------------------------------------

const string TUPreco::VALOR_VALIDO = "850,99";
const string TUPreco::VALOR_INVALIDO_SIMBOLO = "85%,99";
const string TUPreco::VALOR_INVALIDO_VIRGULAS = "8,50,99";
const string TUPreco::VALOR_INVALIDO_CENTAVOS = "8,5099";
const string TUPreco::VALOR_INVALIDO_PRECO = "1850,99";
const string TUPreco::VALOR_INVALIDO_TAMANHO = "824550,99";

void TUPreco::monta() {
    pPreco = new Preco();
    cout << "\033[32mOK (Monta)\n\033[0m";
}

void TUPreco::desmonta() {
    delete pPreco;
    cout << "\033[32mOK (Desmonta)\n\033[0m";
}

void TUPreco::testarCenarioSucesso() {
    try {
        pPreco->setPreco(VALOR_VALIDO);
        if (VALOR_VALIDO.compare(pPreco->getPreco()) != 0) {
            cout << "\033[31mERRO TestarCenarioSucesso | UNICO\n\033[0m";
        }
        cout << "\033[32mOK TestarCenarioSucesso | UNICO\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[31mERRO TestarCenarioSucesso | UNICO\n\033[0m";
    }
    return;
}

void TUPreco::testarCenarioFalha() {
    try {
        pPreco->setPreco(VALOR_INVALIDO_SIMBOLO);
        cout << "\033[31mERRO TestarCenarioFalha | SIMBOLO\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | SIMBOLO\n\033[0m";
    }
    try {
        pPreco->setPreco(VALOR_INVALIDO_VIRGULAS);
        cout << "\033[31mERRO TestarCenarioFalha | VIRGULAS\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | VIRGULAS\n\033[0m";
    }
    try {
        pPreco->setPreco(VALOR_INVALIDO_CENTAVOS);
        cout << "\033[31mERRO TestarCenarioFalha | CENTAVOS\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | CENTAVOS\n\033[0m";
    }
    try {
        pPreco->setPreco(VALOR_INVALIDO_PRECO);
        cout << "\033[31mERRO TestarCenarioFalha | PRECO\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | PRECO\n\033[0m";
    }
    try {
        pPreco->setPreco(VALOR_INVALIDO_TAMANHO);
        cout << "\033[31mERRO TestarCenarioFalha | TAMANHO\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | TAMANHO\n\033[0m";
    }
    return;
}

void TUPreco::run() {
    cout << "\n\n\033[33;1mTestando Preco...\n\033[0m";
    monta();
    testarCenarioSucesso();
    testarCenarioFalha();
    desmonta();

    return;
}

// ------------------------------------------------------------------------------

const string TUNumeroCartao::VALOR_VALIDO = "4556830088565320";
const string TUNumeroCartao::VALOR_INVALIDO = "4556830188565320";
const string TUNumeroCartao::VALOR_INVALIDO_SIMBOLO = "a55683o188565320";
const string TUNumeroCartao::VALOR_INVALIDO_TAMANHO = "45568300";

void TUNumeroCartao::monta() {
    pNumeroCartao = new NumeroCartao();
    cout << "\033[32mOK (Monta)\n\033[0m";
}

void TUNumeroCartao::desmonta() {
    delete pNumeroCartao;
    cout << "\033[32mOK (Desmonta)\n\033[0m";
}

void TUNumeroCartao::testarCenarioSucesso() {
    try {
        pNumeroCartao->setNumero(VALOR_VALIDO);
        if (VALOR_VALIDO.compare(pNumeroCartao->getNumero()) != 0) {
            cout << "\033[31mERRO TestarCenarioSucesso | UNICO\n\033[0m";
        }
        cout << "\033[32mOK TestarCenarioSucesso | UNICO\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[31mERRO TestarCenarioSucesso | UNICO\n\033[0m";
    }
    return;
}

void TUNumeroCartao::testarCenarioFalha() {
    try {
        pNumeroCartao->setNumero(VALOR_INVALIDO);
        cout << "\033[31mERRO TestarCenarioFalha | DIGITO\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | DIGITO\n\033[0m";
    }
    try {
        pNumeroCartao->setNumero(VALOR_INVALIDO_SIMBOLO);
        cout << "\033[31mERRO TestarCenarioFalha | SIMBOLO\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | SIMBOLO\n\033[0m";
    }
    try {
        pNumeroCartao->setNumero(VALOR_INVALIDO_TAMANHO);
        cout << "\033[31mERRO TestarCenarioFalha | TAMANHO\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | TAMANHO\n\033[0m";
    }
    return;
}

void TUNumeroCartao::run() {
    cout << "\n\n\033[33;1mTestando NumeroCartao...\n\033[0m";
    monta();
    testarCenarioSucesso();
    testarCenarioFalha();
    desmonta();

    return;
}

// ------------------------------------------------------------------------------

const string TUCPF::VALOR_VALIDO = "529.982.247-25";
const string TUCPF::VALOR_INVALIDO = "173.859.290-86";
const string TUCPF::VALOR_INVALIDO_REPETIDO = "111.111.111-11";
const string TUCPF::VALOR_INVALIDO_SIMBOLO = "est.eem.euc-pf";
const string TUCPF::VALOR_INVALIDO_TAMANHO = "173.829.290-867";
const string TUCPF::VALOR_INVALIDO_PONTO = "17308291290286";

void TUCPF::monta() {
    pCPF = new CPF();
    cout << "\033[32mOK (Monta)\n\033[0m";
}

void TUCPF::desmonta() {
    delete pCPF;
    cout << "\033[32mOK (Desmonta)\n\033[0m";
}

void TUCPF::testarCenarioSucesso() {
    try {
        pCPF->setCPF(VALOR_VALIDO);
        if (VALOR_VALIDO.compare(pCPF->getCPF()) != 0) {
            cout << "\033[31mERRO TestarCenarioSucesso | UNICO\n\033[0m";
        }
        cout << "\033[32mOK TestarCenarioSucesso | UNICO\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[31mERRO TestarCenarioSucesso | UNICO\n\033[0m";
    }
    return;
}

void TUCPF::testarCenarioFalha() {
    try {
        pCPF->setCPF(VALOR_INVALIDO);
        cout << "\033[31mERRO TestarCenarioFalha | DIGITO\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | DIGITO\n\033[0m";
    }
    try {
        pCPF->setCPF(VALOR_INVALIDO_SIMBOLO);
        cout << "\033[31mERRO TestarCenarioFalha | SIMBOLO\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | SIMBOLO\n\033[0m";
    }
    try {
        pCPF->setCPF(VALOR_INVALIDO_REPETIDO);
        cout << "\033[31mERRO TestarCenarioFalha | REPETIDO\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | REPETIDO\n\033[0m";
    }
    try {
        pCPF->setCPF(VALOR_INVALIDO_TAMANHO);
        cout << "\033[31mERRO TestarCenarioFalha | TAMANHO\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | TAMANHO\n\033[0m";
    }
    try {
        pCPF->setCPF(VALOR_INVALIDO_PONTO);
        cout << "\033[31mERRO TestarCenarioFalha | PONTO\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[32mOK TestarCenarioFalha | PONTO\n\033[0m";
    }
    return;
}

void TUCPF::run() {
    cout << "\n\n\033[33;1mTestando CPF...\n\033[0m";
    monta();
    testarCenarioSucesso();
    testarCenarioFalha();
    desmonta();

    return;
}

// ----------------------------------------------------------------------------
// 								ENTIDADES
// ----------------------------------------------------------------------------

const EstruturaUsuario TUUsuario::ESTRUTURA_VALIDA = {
	"529.982.247-25",
	"Oi3ule"
};

void TUUsuario::monta() {
    pUsuario = new Usuario();
    cout << "\033[32mOK (Monta)\n\033[0m";
}

void TUUsuario::desmonta() {
    delete pUsuario;
    cout << "\033[32mOK (Desmonta)\n\033[0m";
}

void TUUsuario::testarCenarioSucesso() {
    EstruturaUsuario teste_out;
    try {
        pUsuario->setUsuario(ESTRUTURA_VALIDA);
        pUsuario->getUsuario(&teste_out);
        if (ESTRUTURA_VALIDA.cpf.compare(teste_out.cpf) != 0 ||
            ESTRUTURA_VALIDA.senha.compare(teste_out.senha) != 0) {
            cout << "\033[31mERRO TestarCenarioSucesso\n\033[0m";
        }
        cout << "\033[32mOK TestarCenarioSucesso\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[31mERRO TestarCenarioSucesso\n\033[0m";
    }
    return;
}

void TUUsuario::run() {
    cout << "\n\n\033[33;1mTestando Usuario...\n\033[0m";
    monta();
    testarCenarioSucesso();
    desmonta();

    return;
}

// ------------------------------------------------------------------------------

const EstruturaApresentacao TUApresentacao::ESTRUTURA_VALIDA = {
  	"0020",
  	"18/04/19",
  	"10:30",
  	"212,15",
  	"8",
  	"102"
};

void TUApresentacao::monta() {
    pApresentacao = new Apresentacao();
    cout << "\033[32mOK (Monta)\n\033[0m";
}

void TUApresentacao::desmonta() {
    delete pApresentacao;
    cout << "\033[32mOK (Desmonta)\n\033[0m";
}

void TUApresentacao::testarCenarioSucesso() {
    
    EstruturaApresentacao apresentacao;

    try {
        pApresentacao->setApresentacao(ESTRUTURA_VALIDA);
        pApresentacao->getApresentacao(&apresentacao);
        if (ESTRUTURA_VALIDA.codigo.compare(apresentacao.codigo) != 0 ||
            ESTRUTURA_VALIDA.data.compare(apresentacao.data) != 0 ||
            ESTRUTURA_VALIDA.horario.compare(apresentacao.horario) != 0 ||
            ESTRUTURA_VALIDA.preco.compare(apresentacao.preco) != 0 ||
            ESTRUTURA_VALIDA.sala.compare(apresentacao.sala) != 0 ||
            ESTRUTURA_VALIDA.disponibilidade.compare(apresentacao.disponibilidade) != 0) {
            cout << "\033[31mERRO TestarCenarioSucesso\n\033[0m";
        }
        cout << "\033[32mOK TestarCenarioSucesso\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[31mERRO TestarCenarioSucesso\n\033[0m";
    }
    return;
}

void TUApresentacao::run() {
    cout << "\n\n\033[33;1mTestando Apresentacao...\n\033[0m";
    monta();
    testarCenarioSucesso();
    desmonta();

    return;
}

// ------------------------------------------------------------------------------

const EstruturaEvento TUEvento::ESTRUTURA_VALIDA = {
  	"002",
  	"Evento do Joao Pedro",
  	"Parim do Brasil",
  	"MG",
  	"1",
  	"L"
};

void TUEvento::monta() {
    pEvento = new Evento();
    cout << "\033[32mOK (Monta)\n\033[0m";
}

void TUEvento::desmonta() {
    delete pEvento;
    cout << "\033[32mOK (Desmonta)\n\033[0m";
}

void TUEvento::testarCenarioSucesso() {
    
    EstruturaEvento evento;

    try {
        pEvento->setEvento(ESTRUTURA_VALIDA);
        pEvento->getEvento(&evento);
        if (ESTRUTURA_VALIDA.codigo.compare(evento.codigo) != 0 ||
            ESTRUTURA_VALIDA.nome.compare(evento.nome) != 0 ||
            ESTRUTURA_VALIDA.cidade.compare(evento.cidade) != 0 ||
            ESTRUTURA_VALIDA.estado.compare(evento.estado) != 0 ||
            ESTRUTURA_VALIDA.classe.compare(evento.classe) != 0 ||
            ESTRUTURA_VALIDA.faixa.compare(evento.faixa) != 0) {
            cout << "\033[31mERRO TestarCenarioSucesso\n\033[0m";
        }
        cout << "\033[32mOK TestarCenarioSucesso\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[31mERRO TestarCenarioSucesso\n\033[0m";
    }
    return;
}

void TUEvento::run() {
    cout << "\n\n\033[33;1mTestando Evento...\n\033[0m";
    monta();
    testarCenarioSucesso();
    desmonta();

    return;
}

// ------------------------------------------------------------------------------

const EstruturaCartaoCredito TUCartaoCredito::ESTRUTURA_VALIDA = {
  	"4539661491081288",
  	"857",
  	"06/22"
};

void TUCartaoCredito::monta() {
    pCartao = new CartaoCredito();
    cout << "\033[32mOK (Monta)\n\033[0m";
}

void TUCartaoCredito::desmonta() {
    delete pCartao;
    cout << "\033[32mOK (Desmonta)\n\033[0m";
}

void TUCartaoCredito::testarCenarioSucesso() {
    
    EstruturaCartaoCredito cartao;

    try {
        pCartao->setCartaoCredito(ESTRUTURA_VALIDA);
        pCartao->getCartaoCredito(&cartao);
        if (ESTRUTURA_VALIDA.numero.compare(cartao.numero) != 0 ||
            ESTRUTURA_VALIDA.codigo.compare(cartao.codigo) != 0 ||
            ESTRUTURA_VALIDA.data.compare(cartao.data) != 0) {
            cout << "\033[31mERRO TestarCenarioSucesso\n\033[0m";
        }
        cout << "\033[32mOK TestarCenarioSucesso\n\033[0m";
    }
    catch(invalid_argument excecao) {
        cout << "\033[31mERRO TestarCenarioSucesso\n\033[0m";
    }
    return;
}

void TUCartaoCredito::run() {
    cout << "\n\n\033[33;1mTestando Cartao de Credito...\n\033[0m";
    monta();
    testarCenarioSucesso();
    desmonta();

    return;
}
