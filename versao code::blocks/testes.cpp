#include "testes.h"
#include <iostream>

// -----------------------------------------------------------------------------
// 								DOMINIOS
// -----------------------------------------------------------------------------

const string TUCodigoEvento::VALOR_VALIDO = "020";
const string TUCodigoEvento::VALOR_INVALIDO_LETRA = "abc";
const string TUCodigoEvento::VALOR_INVALIDO_MAIOR = "0000";
const string TUCodigoEvento::VALOR_INVALIDO_MENOR = "00";

void TUCodigoEvento::monta() {
    pCodigo = new CodigoEvento();
    cout << "OK (Monta)\n";
    return;
}

void TUCodigoEvento::desmonta() {
    delete pCodigo;
    cout << "OK (Desmonta)\n";
    return;
}

void TUCodigoEvento::testarCenarioSucesso() {
    try {
        pCodigo->setCodigo(VALOR_VALIDO);
        if (VALOR_VALIDO.compare(pCodigo->getCodigo()) != 0) {
            cout << "ERRO TestarCenarioSucesso | UNICO\n";
        }
        cout << "OK TestarCenarioSucesso | UNICO\n";
    }
    catch(invalid_argument excecao) {
        cout << "ERRO TestarCenarioSucesso | UNICO\n";
    }
    return;
}

void TUCodigoEvento::testarCenarioFalha() {
    try {
        pCodigo->setCodigo(VALOR_INVALIDO_LETRA);
        cout << "ERRO TestarCenarioFalha | LETRA\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | LETRA\n";
    }
    try {
        pCodigo->setCodigo(VALOR_INVALIDO_MAIOR);
        cout << "ERRO TestarCenarioFalha | GRANDE\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | GRANDE\n";
    }
    try {
        pCodigo->setCodigo(VALOR_INVALIDO_MENOR);
        cout << "ERRO TestarCenarioFalha | MENOR\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | MENOR\n";
    }
    return;
}

void TUCodigoEvento::run() {
    cout << "\n\nTestando CodigoEvento...\n";
    monta();
    testarCenarioSucesso();
    testarCenarioFalha();
    desmonta();

    return;
}

// -----------------------------------------------------------------------------

const string TUCodigoSeguranca::VALOR_VALIDO = "020";
const string TUCodigoSeguranca::VALOR_INVALIDO_LETRA = "abc";
const string TUCodigoSeguranca::VALOR_INVALIDO_MAIOR = "0000";
const string TUCodigoSeguranca::VALOR_INVALIDO_MENOR = "00";

void TUCodigoSeguranca::monta() {
    pCodigo = new CodigoSeguranca();
    cout << "OK (Monta)\n";
    return;
}

void TUCodigoSeguranca::desmonta() {
    delete pCodigo;
    cout << "OK (Desmonta)\n";
    return;
}

void TUCodigoSeguranca::testarCenarioSucesso() {
    try {
        pCodigo->setCodigo(VALOR_VALIDO);
        if (VALOR_VALIDO.compare(pCodigo->getCodigo()) != 0) {
            cout << "ERRO TestarCenarioSucesso | UNICO\n";
        }
        cout << "OK TestarCenarioSucesso | UNICO\n";
    }
    catch(invalid_argument excecao) {
        cout << "ERRO TestarCenarioSucesso | UNICO\n";
    }
    return;
}

void TUCodigoSeguranca::testarCenarioFalha() {
    try {
        pCodigo->setCodigo(VALOR_INVALIDO_LETRA);
        cout << "ERRO TestarCenarioFalha | LETRA\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | LETRA\n";
    }
    try {
        pCodigo->setCodigo(VALOR_INVALIDO_MAIOR);
        cout << "ERRO TestarCenarioFalha | GRANDE\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | GRANDE\n";
    }
    try {
        pCodigo->setCodigo(VALOR_INVALIDO_MENOR);
        cout << "ERRO TestarCenarioFalha | MENOR\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | MENOR\n";
    }
    return;
}

void TUCodigoSeguranca::run() {
    cout << "\n\nTestando CodigoSeguranca...\n";
    monta();
    testarCenarioSucesso();
    testarCenarioFalha();
    desmonta();

    return;
}

// -----------------------------------------------------------------------------

const string TUCodigoApresentacao::VALOR_VALIDO = "0020";
const string TUCodigoApresentacao::VALOR_INVALIDO_LETRA = "abcd";
const string TUCodigoApresentacao::VALOR_INVALIDO_MAIOR = "00000";
const string TUCodigoApresentacao::VALOR_INVALIDO_MENOR = "000";

void TUCodigoApresentacao::monta() {
    pCodigo = new CodigoApresentacao();
    cout << "OK (Monta)\n";
    return;
}

void TUCodigoApresentacao::desmonta() {
    delete pCodigo;
    cout << "OK (Desmonta)\n";
    return;
}

void TUCodigoApresentacao::testarCenarioSucesso() {
    try {
        pCodigo->setCodigo(VALOR_VALIDO);
        if (VALOR_VALIDO.compare(pCodigo->getCodigo()) != 0) {
            cout << "ERRO TestarCenarioSucesso | UNICO\n";
        }
        cout << "OK TestarCenarioSucesso | UNICO\n";
    }
    catch(invalid_argument excecao) {
        cout << "ERRO TestarCenarioSucesso | UNICO\n";
    }
    return;
}

void TUCodigoApresentacao::testarCenarioFalha() {
    try {
        pCodigo->setCodigo(VALOR_INVALIDO_LETRA);
        cout << "ERRO TestarCenarioFalha | LETRA\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | LETRA\n";
    }
    try {
        pCodigo->setCodigo(VALOR_INVALIDO_MAIOR);
        cout << "ERRO TestarCenarioFalha | GRANDE\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | GRANDE\n";
    }
    try {
        pCodigo->setCodigo(VALOR_INVALIDO_MENOR);
        cout << "ERRO TestarCenarioFalha | MENOR\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | MENOR\n";
    }
    return;
}

void TUCodigoApresentacao::run() {
    cout << "\n\nTestando CodigoApresentacao...\n";
    monta();
    testarCenarioSucesso();
    testarCenarioFalha();
    desmonta();

    return;
}

// -----------------------------------------------------------------------------

const string TUCodigoIngresso::VALOR_VALIDO = "00020";
const string TUCodigoIngresso::VALOR_INVALIDO_LETRA = "abcde";
const string TUCodigoIngresso::VALOR_INVALIDO_MAIOR = "000000";
const string TUCodigoIngresso::VALOR_INVALIDO_MENOR = "0000";

void TUCodigoIngresso::monta() {
    pCodigo = new CodigoIngresso();
    cout << "OK (Monta)\n";
}

void TUCodigoIngresso::desmonta() {
    delete pCodigo;
    cout << "OK (Desmonta)\n";
}

void TUCodigoIngresso::testarCenarioSucesso() {
    try {
        pCodigo->setCodigo(VALOR_VALIDO);
        if (VALOR_VALIDO.compare(pCodigo->getCodigo()) != 0) {
            cout << "ERRO TestarCenarioSucesso | UNICO\n";
        }
        cout << "OK TestarCenarioSucesso | UNICO\n";
    }
    catch(invalid_argument excecao) {
        cout << "ERRO TestarCenarioSucesso | UNICO\n";
    }
    return;
}

void TUCodigoIngresso::testarCenarioFalha() {
    try {
        pCodigo->setCodigo(VALOR_INVALIDO_LETRA);
        cout << "ERRO TestarCenarioFalha | LETRA\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | LETRA\n";
    }
    try {
        pCodigo->setCodigo(VALOR_INVALIDO_MAIOR);
        cout << "ERRO TestarCenarioFalha | GRANDE\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | GRANDE\n";
    }
    try {
        pCodigo->setCodigo(VALOR_INVALIDO_MENOR);
        cout << "ERRO TestarCenarioFalha | MENOR\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | MENOR\n";
    }
    return;
}

void TUCodigoIngresso::run() {
    cout << "\n\nTestando CodigoIngresso...\n";
    monta();
    testarCenarioSucesso();
    testarCenarioFalha();
    desmonta();

    return;
}

// -----------------------------------------------------------------------------

const string TUNomeEvento::NOME_VALIDO = "3v3nt0 d0 J040 P3dr0";
const string TUNomeEvento::NOME_INVALIDO_SIMBOLO = "&v&nto do Joao P&dro";
const string TUNomeEvento::NOME_INVALIDO_MAIOR = "Evento do Joao Pedro d'Avila";
const string TUNomeEvento::NOME_INVALIDO_MENOR = "Evento do Joao";
const string TUNomeEvento::NOME_INVALIDO_ESPACOS = "Evento do      Pedro";
const string TUNomeEvento::NOME_INVALIDO_NUMEROS = "43779487293874943545";

void TUNomeEvento::monta() {
    pNome = new NomeEvento();
    cout << "OK (Monta)\n";
    return;
}

void TUNomeEvento::desmonta() {
    delete pNome;
    cout << "OK (Desmonta)\n";
    return;
}

void TUNomeEvento::testarCenarioSucesso() {
    try {
        pNome->setNome(NOME_VALIDO);
        if (NOME_VALIDO.compare(pNome->getNome()) != 0) {
            cout << "ERRO TestarCenarioSucesso | UNICO\n";
        }
        cout << "OK TestarCenarioSucesso | UNICO\n";
    }
    catch(invalid_argument excecao) {
        cout << "ERRO TestarCenarioSucesso | UNICO\n";
    }
    return;
}

void TUNomeEvento::testarCenarioFalha() {
    try {
        pNome->setNome(NOME_INVALIDO_SIMBOLO);
        cout << "ERRO TestarCenarioFalha | SIMBOLO\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | SIMBOLO\n";
    }
    try {
        pNome->setNome(NOME_INVALIDO_MAIOR);
        cout << "ERRO TestarCenarioFalha | GRANDE\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | GRANDE\n";
    }
    try {
        pNome->setNome(NOME_INVALIDO_MENOR);
        cout << "ERRO TestarCenarioFalha | MENOR\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | MENOR\n";
    }
    try {
        pNome->setNome(NOME_INVALIDO_ESPACOS);
        cout << "ERRO TestarCenarioFalha | ESPACOS\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | ESPACOS\n";
    }
    try {
        pNome->setNome(NOME_INVALIDO_NUMEROS);
        cout << "ERRO TestarCenarioFalha | NUMEROS\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | NUMEROS\n";
    }
    return;
}

void TUNomeEvento::run() {
    cout << "\n\nTestando NomeEvento...\n";
    monta();
    testarCenarioSucesso();
    testarCenarioFalha();
    desmonta();

    return;
}

// -----------------------------------------------------------------------------

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
    cout << "OK (Monta)\n";
    return;
}

void TUData::desmonta() {
    delete pData;
    cout << "OK (Desmonta)\n";
    return;
}

void TUData::testarCenarioSucesso() {
    try {
        pData->setData(DATA_VALIDA_NORMAL);
        if (DATA_VALIDA_NORMAL.compare(pData->getData()) != 0) {
            cout << "ERRO TestarCenarioSucesso | NORMAL\n";
        }
        cout << "OK TestarCenarioSucesso | NORMAL\n";
    }
    catch(invalid_argument excecao) {
        cout << "ERRO TestarCenarioSucesso | NORMAL\n";
    }
    try {
        pData->setData(DATA_VALIDA_BISSEXTO);
        if (DATA_VALIDA_BISSEXTO.compare(pData->getData()) != 0) {
            cout << "ERRO TestarCenarioSucesso | BISSEXTO VALIDO\n";
        }
        cout << "OK TestarCenarioSucesso | BISSEXTO VALIDO\n";
    }
    catch(invalid_argument excecao) {
        cout << "ERRO TestarCenarioSucesso | BISSEXTO VALIDO\n";
    }
    return;
}

void TUData::testarCenarioFalha() {
    try {
        pData->setData(DATA_INVALIDA_MENOR);
        cout << "ERRO TestarCenarioFalha | MENOR\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | MENOR\n";
    }
    try {
        pData->setData(DATA_INVALIDA_MAIOR);
        cout << "ERRO TestarCenarioFalha | MAIOR\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | MAIOR\n";
    }
    try {
        pData->setData(DATA_INVALIDA_BARRAS);
        cout << "ERRO TestarCenarioFalha | BARRAS\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | BARRAS\n";
    }
    try {
        pData->setData(DATA_INVALIDA_ANO);
        cout << "ERRO TestarCenarioFalha | ANO\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | ANO\n";
    }
    try {
        pData->setData(DATA_INVALIDA_MES);
        cout << "ERRO TestarCenarioFalha | MES\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | MES\n";
    }
    try {
        pData->setData(DATA_INVALIDA_DIA_31);
        cout << "ERRO TestarCenarioFalha | DIA 31\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | DIA 31\n";
    }
    try {
        pData->setData(DATA_INVALIDA_DIA_30);
        cout << "ERRO TestarCenarioFalha | DIA 30\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | DIA 30\n";
    }
    try {
        pData->setData(DATA_INVALIDA_BISSEXTO);
        cout << "ERRO TestarCenarioFalha | BISSEXTO INVALIDO\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | BISSEXTO INVALIDO\n";
    }
    return;
}

void TUData::run() {
    cout << "\n\nTestando Data...\n";
    monta();
    testarCenarioSucesso();
    testarCenarioFalha();
    desmonta();

    return;
}

// -----------------------------------------------------------------------------

const string TUSenha::VALOR_VALIDO = "Oi3ule";
const string TUSenha::VALOR_INVALIDO_MAIOR = "Oi3uler";
const string TUSenha::VALOR_INVALIDO_MENOR = "Oi3ul";
const string TUSenha::VALOR_INVALIDO_REPETIDO = "Oi3iu3";
const string TUSenha::VALOR_INVALIDO_MINUS = "oi3iu3";
const string TUSenha::VALOR_INVALIDO_MAIUS = "ABACAX";
const string TUSenha::VALOR_INVALIDO_SIMBOLOS = "/>78!a";

void TUSenha::monta() {
    pSenha = new Senha();
    cout << "OK (Monta)\n";
    return;
}

void TUSenha::desmonta() {
    delete pSenha;
    cout << "OK (Desmonta)\n";
    return;
}

void TUSenha::testarCenarioSucesso() {
    try {
        pSenha->setSenha(VALOR_VALIDO);
        if (VALOR_VALIDO.compare(pSenha->getSenha()) != 0) {
            cout << "ERRO TestarCenarioSucesso | UNICO\n";
        }
        cout << "OK TestarCenarioSucesso | UNICO\n";
    }
    catch(invalid_argument excecao) {
        cout << "ERRO TestarCenarioSucesso | UNICO\n";
    }
    return;
}

void TUSenha::testarCenarioFalha() {
    try {
        pSenha->setSenha(VALOR_INVALIDO_MAIOR);
        cout << "ERRO TestarCenarioFalha | MAIOR\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | MAIOR\n";
    }
    try {
        pSenha->setSenha(VALOR_INVALIDO_MENOR);
        cout << "ERRO TestarCenarioFalha | MENOR\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | MENOR\n";
    }
    try {
        pSenha->setSenha(VALOR_INVALIDO_REPETIDO);
        cout << "ERRO TestarCenarioFalha | REPETIDO\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | REPETIDO\n";
    }
    try {
        pSenha->setSenha(VALOR_INVALIDO_MAIUS);
        cout << "ERRO TestarCenarioFalha | MAIUSCULO\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | MAIUSCULO\n";
    }
    try {
        pSenha->setSenha(VALOR_INVALIDO_MINUS);
        cout << "ERRO TestarCenarioFalha | MINUSCULO\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | MINUSCULO\n";
    }
    try {
        pSenha->setSenha(VALOR_INVALIDO_SIMBOLOS);
        cout << "ERRO TestarCenarioFalha | SIMBOLO\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | SIMBOLO\n";
    }
    return;
}

void TUSenha::run() {
    cout << "\n\nTestando Senha...\n";
    monta();
    testarCenarioSucesso();
    testarCenarioFalha();
    desmonta();

    return;
}

// -----------------------------------------------------------------------------

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
    cout << "OK (Monta)\n";
    return;
}

void TUCidade::desmonta() {
    delete pCidade;
    cout << "OK (Desmonta)\n";
    return;
}

void TUCidade::testarCenarioSucesso() {
    try {
        pCidade->setCidade(VALOR_VALIDO);
        if (VALOR_VALIDO.compare(pCidade->getCidade()) != 0) {
            cout << "ERRO TestarCenarioSucesso | UNICO\n";
        }
        cout << "OK TestarCenarioSucesso | UNICO\n";
    }
    catch(invalid_argument excecao) {
        cout << "ERRO TestarCenarioSucesso | UNICO\n";
    }
    return;
}

void TUCidade::testarCenarioFalha() {
    try {
        pCidade->setCidade(VALOR_INVALIDO_PONTO);
        cout << "ERRO TestarCenarioFalha | PONTO\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | PONTO\n";
    }
    try {
        pCidade->setCidade(VALOR_INVALIDO_ESPACOS);
        cout << "ERRO TestarCenarioFalha | ESPACOS\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | ESPACOS\n";
    }
    try {
        pCidade->setCidade(VALOR_INVALIDO_MENOR);
        cout << "ERRO TestarCenarioFalha | MENOR\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | MENOR\n";
    }
    try {
        pCidade->setCidade(VALOR_INVALIDO_MAIOR);
        cout << "ERRO TestarCenarioFalha | MAIOR\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | MAIOR\n";
    }
    try {
        pCidade->setCidade(VALOR_INVALIDO_SIMBOLOS);
        cout << "ERRO TestarCenarioFalha | SIMBOLOS\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | SIMBOLOS\n";
    }
    try {
        pCidade->setCidade(VALOR_INVALIDO_NUMEROS);
        cout << "ERRO TestarCenarioFalha | NUMEROS\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | NUMEROS\n";
    }
    try {
        pCidade->setCidade(VALOR_INVALIDO_PONTO2);
        cout << "ERRO TestarCenarioFalha | PONTO2\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | PONTO2\n";
    }
    return;
}

void TUCidade::run() {
    cout << "\n\nTestando Cidade...\n";
    monta();
    testarCenarioSucesso();
    testarCenarioFalha();
    desmonta();

    return;
}

// -----------------------------------------------------------------------------

const string TUClasseEvento::VALOR_VALIDO = "2";
const string TUClasseEvento::VALOR_INVALIDO_LETRA = "a";
const string TUClasseEvento::VALOR_INVALIDO_MAIOR = "22";
const string TUClasseEvento::VALOR_INVALIDO_OVERFLOW = "7";

void TUClasseEvento::monta() {
    pEvento = new ClasseEvento();
    cout << "OK (Monta)\n";
    return;
}

void TUClasseEvento::desmonta() {
    delete pEvento;
    cout << "OK (Desmonta)\n";
    return;
}

void TUClasseEvento::testarCenarioSucesso() {
    try {
        pEvento->setClasseEvento(VALOR_VALIDO);
        if (VALOR_VALIDO.compare(pEvento->getClasseEvento()) != 0) {
            cout << "ERRO TestarCenarioSucesso | UNICO\n";
        }
        cout << "OK TestarCenarioSucesso | UNICO\n";
    }
    catch(invalid_argument excecao) {
        cout << "ERRO TestarCenarioSucesso | UNICO\n";
    }
    return;
}

void TUClasseEvento::testarCenarioFalha() {
    try {
        pEvento->setClasseEvento(VALOR_INVALIDO_LETRA);
        cout << "ERRO TestarCenarioFalha | LETRA\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | LETRA\n";
    }
    try {
        pEvento->setClasseEvento(VALOR_INVALIDO_MAIOR);
        cout << "ERRO TestarCenarioFalha | MAIOR\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | MAIOR\n";
    }
    try {
        pEvento->setClasseEvento(VALOR_INVALIDO_OVERFLOW);
        cout << "ERRO TestarCenarioFalha | OVERFLOW\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | OVERFLOW\n";
    }
    return;
}

void TUClasseEvento::run() {
    cout << "\n\nTestando ClasseEvento...\n";
    monta();
    testarCenarioSucesso();
    testarCenarioFalha();
    desmonta();
}
// -----------------------------------------------------------------------------

const string TUNumeroSala::VALOR_VALIDO = "2";
const string TUNumeroSala::VALOR_VALIDO_LIMITE = "10";
const string TUNumeroSala::VALOR_VALIDO_NPADRAO = "02";
const string TUNumeroSala::VALOR_INVALIDO_LETRA = "a";
const string TUNumeroSala::VALOR_INVALIDO_OVERFLOW = "11";
const string TUNumeroSala::VALOR_INVALIDO_MAIOR = "222";

void TUNumeroSala::monta() {
    pSala = new NumeroSala();
    cout << "OK (Monta)\n";
    return;
}

void TUNumeroSala::desmonta() {
    delete pSala;
    cout << "OK (Desmonta)\n";
    return;
}

void TUNumeroSala::testarCenarioSucesso() {
    try {
        pSala->setSala(VALOR_VALIDO);
        if (VALOR_VALIDO.compare(pSala->getSala()) != 0) {
            cout << "ERRO TestarCenarioSucesso | INTERMEDIARIO\n";
        }
        cout << "OK TestarCenarioSucesso | INTERMEDIARIO\n";
    }
    catch(invalid_argument excecao) {
        cout << "ERRO TestarCenarioSucesso | INTERMEDIARIO\n";
    }
    try {
        pSala->setSala(VALOR_VALIDO_LIMITE);
        if (VALOR_VALIDO_LIMITE.compare(pSala->getSala()) != 0) {
            cout << "ERRO TestarCenarioSucesso | LIMITE\n";
        }
        cout << "OK TestarCenarioSucesso | LIMITE\n";
    }
    catch(invalid_argument excecao) {
        cout << "ERRO TestarCenarioSucesso | LIMITE\n";
    }
    try {
        pSala->setSala(VALOR_VALIDO_NPADRAO);
        if (VALOR_VALIDO_NPADRAO.compare(pSala->getSala()) != 0) {
            cout << "ERRO TestarCenarioSucesso | NPADRAO\n";
        }
        cout << "OK TestarCenarioSucesso | NPADRAO\n";
    }
    catch(invalid_argument excecao) {
        cout << "ERRO TestarCenarioSucesso | NPADRAO\n";
    }
    return;
}

void TUNumeroSala::testarCenarioFalha() {
    try {
        pSala->setSala(VALOR_INVALIDO_LETRA);
        cout << "ERRO TestarCenarioFalha | LETRA\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | LETRA\n";
    }
    try {
        pSala->setSala(VALOR_INVALIDO_OVERFLOW);
        cout << "ERRO TestarCenarioFalha | OVERFLOW\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | OVERFLOW\n";
    }
    try {
        pSala->setSala(VALOR_INVALIDO_MAIOR);
        cout << "ERRO TestarCenarioFalha | MAIOR\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | MAIOR\n";
    }
    return;
}

void TUNumeroSala::run() {
    cout << "\n\nTestando NumeroSala...\n";
    monta();
    testarCenarioSucesso();
    testarCenarioFalha();
    desmonta();

    return;
}

// -----------------------------------------------------------------------------

const string TUDisponibilidade::VALOR_VALIDO = "2";
const string TUDisponibilidade::VALOR_VALIDO_LIMITE = "250";
const string TUDisponibilidade::VALOR_VALIDO_NPADRAO = "07";
const string TUDisponibilidade::VALOR_INVALIDO_LETRA = "abc";
const string TUDisponibilidade::VALOR_INVALIDO_OVERFLOW = "256";
const string TUDisponibilidade::VALOR_INVALIDO_TAMANHO = "9999";

void TUDisponibilidade::monta() {
    pDisponibilidade = new Disponibilidade();
    cout << "OK (Monta)\n";
    return;
}

void TUDisponibilidade::desmonta() {
    delete pDisponibilidade;
    cout << "OK (Desmonta)\n";
    return;
}

void TUDisponibilidade::testarCenarioSucesso() {
    try {
        pDisponibilidade->setDisponibilidade(VALOR_VALIDO);
        if (VALOR_VALIDO.compare(pDisponibilidade->getDisponibilidade()) != 0) {
            cout << "ERRO TestarCenarioSucesso | INTERMEDIARIO\n";
        }
        cout << "OK TestarCenarioSucesso | INTERMEDIARIO\n";
    }
    catch(invalid_argument excecao) {
        cout << "ERRO TestarCenarioSucesso | INTERMEDIARIO\n";
    }
    try {
        pDisponibilidade->setDisponibilidade(VALOR_VALIDO_LIMITE);
        if (VALOR_VALIDO_LIMITE.compare(pDisponibilidade->getDisponibilidade()) != 0) {
            cout << "ERRO TestarCenarioSucesso | LIMITE\n";
        }
        cout << "OK TestarCenarioSucesso | LIMITE\n";
    }
    catch(invalid_argument excecao) {
        cout << "ERRO TestarCenarioSucesso | LIMITE\n";
    }
    try {
        pDisponibilidade->setDisponibilidade(VALOR_VALIDO_NPADRAO);
        if (VALOR_VALIDO_NPADRAO.compare(pDisponibilidade->getDisponibilidade()) != 0) {
            cout << "ERRO TestarCenarioSucesso | NPADRAO\n";
        }
        cout << "OK TestarCenarioSucesso | NPADRAO\n";
    }
    catch(invalid_argument excecao) {
        cout << "ERRO TestarCenarioSucesso | NPADRAO\n";
    }
    return;
}

void TUDisponibilidade::testarCenarioFalha() {
    try {
        pDisponibilidade->setDisponibilidade(VALOR_INVALIDO_LETRA);
        cout << "ERRO TestarCenarioFalha | LETRA\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | LETRA\n";
    }
    try {
        pDisponibilidade->setDisponibilidade(VALOR_INVALIDO_OVERFLOW);
        cout << "ERRO TestarCenarioFalha | OVERFLOW\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | OVERFLOW\n";
    }
    try {
        pDisponibilidade->setDisponibilidade(VALOR_INVALIDO_TAMANHO);
        cout << "ERRO TestarCenarioFalha | MAIOR\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | MAIOR\n";
    }
    return;
}

void TUDisponibilidade::run() {
    cout << "\n\nTestando Disponibilidade...\n";
    monta();
    testarCenarioSucesso();
    testarCenarioFalha();
    desmonta();

    return;
}

// -----------------------------------------------------------------------------

const string TUFaixaEtaria::VALOR_VALIDO_LETRA = "L";
const string TUFaixaEtaria::VALOR_VALIDO_NUMERO = "10";
const string TUFaixaEtaria::VALOR_INVALIDO_LETRA = "M";
const string TUFaixaEtaria::VALOR_INVALIDO_BARRA = "L/";
const string TUFaixaEtaria::VALOR_INVALIDO_NUMERO = "00";
const string TUFaixaEtaria::VALOR_INVALIDO_TAMANHO = "1800";

void TUFaixaEtaria::monta() {
    pFaixa = new FaixaEtaria();
    cout << "OK (Monta)\n";
}

void TUFaixaEtaria::desmonta() {
    delete pFaixa;
    cout << "OK (Desmonta)\n";
}

void TUFaixaEtaria::testarCenarioSucesso() {
    try {
        pFaixa->setFaixa(VALOR_VALIDO_LETRA);
        if (VALOR_VALIDO_LETRA.compare(pFaixa->getFaixa()) != 0) {
            cout << "ERRO TestarCenarioSucesso | LETRA\n";
        }
        cout << "OK TestarCenarioSucesso | LETRA\n";
    }
    catch(invalid_argument excecao) {
        cout << "ERRO TestarCenarioSucesso | LETRA\n";
    }
    try {
        pFaixa->setFaixa(VALOR_VALIDO_NUMERO);
        if (VALOR_VALIDO_NUMERO.compare(pFaixa->getFaixa()) != 0) {
            cout << "ERRO TestarCenarioSucesso | NUMERO\n";
        }
        cout << "OK TestarCenarioSucesso | NUMERO\n";
    }
    catch(invalid_argument excecao) {
        cout << "ERRO TestarCenarioSucesso | NUMERO\n";
    }
    return;
}

void TUFaixaEtaria::testarCenarioFalha() {
    try {
        pFaixa->setFaixa(VALOR_INVALIDO_LETRA);
        cout << "ERRO TestarCenarioFalha | LETRA\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | LETRA\n";
    }
    try {
        pFaixa->setFaixa(VALOR_INVALIDO_BARRA);
        cout << "ERRO TestarCenarioFalha | BARRA\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | BARRA\n";
    }
    try {
        pFaixa->setFaixa(VALOR_INVALIDO_NUMERO);
        cout << "ERRO TestarCenarioFalha | NUMERO\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | NUMERO\n";
    }
    try {
        pFaixa->setFaixa(VALOR_INVALIDO_TAMANHO);
        cout << "ERRO TestarCenarioFalha | TAMANHO\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | TAMANHO\n";
    }
    return;
}

void TUFaixaEtaria::run() {
    cout << "\n\nTestando FaixaEtaria...\n";
    monta();
    testarCenarioSucesso();
    testarCenarioFalha();
    desmonta();

    return;
}

// -----------------------------------------------------------------------------

const string TUEstado::VALOR_VALIDO = "DF";
const string TUEstado::VALOR_INVALIDO_LETRA = "LS";
const string TUEstado::VALOR_INVALIDO_BARRA = "F/";
const string TUEstado::VALOR_INVALIDO_NUMERO = "R2";
const string TUEstado::VALOR_INVALIDO_TAMANHO = "LEIA";

void TUEstado::monta() {
    pEstado = new Estado();
    cout << "OK (Monta)\n";
}

void TUEstado::desmonta() {
    delete pEstado;
    cout << "OK (Desmonta)\n";
}

void TUEstado::testarCenarioSucesso() {
    try {
        pEstado->setEstado(VALOR_VALIDO);
        if (VALOR_VALIDO.compare(pEstado->getEstado()) != 0) {
            cout << "ERRO TestarCenarioSucesso | UNICO\n";
        }
        cout << "OK TestarCenarioSucesso | UNICO\n";
    }
    catch(invalid_argument excecao) {
        cout << "ERRO TestarCenarioSucesso | UNICO\n";
    }
    return;
}

void TUEstado::testarCenarioFalha() {
    try {
        pEstado->setEstado(VALOR_INVALIDO_LETRA);
        cout << "ERRO TestarCenarioFalha | LETRA\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | LETRA\n";
    }
    try {
        pEstado->setEstado(VALOR_INVALIDO_NUMERO);
        cout << "ERRO TestarCenarioFalha | NUMERO\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | NUMERO\n";
    }
    try {
        pEstado->setEstado(VALOR_INVALIDO_TAMANHO);
        cout << "ERRO TestarCenarioFalha | TAMANHO\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | TAMANHO\n";
    }
    return;
}

void TUEstado::run() {
    cout << "\n\nTestando Estado...\n";
    monta();
    testarCenarioSucesso();
    testarCenarioFalha();
    desmonta();

    return;
}

// -----------------------------------------------------------------------------

const string TUHorario::VALOR_VALIDO = "08:30";
const string TUHorario::VALOR_INVALIDO_LETRA = "08:E0";
const string TUHorario::VALOR_INVALIDO_HORA = "05:30";
const string TUHorario::VALOR_INVALIDO_MINUTO = "08:34";
const string TUHorario::VALOR_INVALIDO_TAMANHO = "08:302";

void TUHorario::monta() {
    pHorario = new Horario();
    cout << "OK (Monta)\n";
}

void TUHorario::desmonta() {
    delete pHorario;
    cout << "OK (Desmonta)\n";
}

void TUHorario::testarCenarioSucesso() {
    try {
        pHorario->setHorario(VALOR_VALIDO);
        if (VALOR_VALIDO.compare(pHorario->getHorario()) != 0) {
            cout << "ERRO TestarCenarioSucesso | UNICO\n";
        }
        cout << "OK TestarCenarioSucesso | UNICO\n";
    }
    catch(invalid_argument excecao) {
        cout << "ERRO TestarCenarioSucesso | UNICO\n";
    }
    return;
}

void TUHorario::testarCenarioFalha() {
    try {
        pHorario->setHorario(VALOR_INVALIDO_LETRA);
        cout << "ERRO TestarCenarioFalha | LETRA\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | LETRA\n";
    }
    try {
        pHorario->setHorario(VALOR_INVALIDO_HORA);
        cout << "ERRO TestarCenarioFalha | HORA\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | HORA\n";
    }
    try {
        pHorario->setHorario(VALOR_INVALIDO_MINUTO);
        cout << "ERRO TestarCenarioFalha | MINUTO\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | MINUTO\n";
    }
    try {
        pHorario->setHorario(VALOR_INVALIDO_TAMANHO);
        cout << "ERRO TestarCenarioFalha | TAMANHO\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | TAMANHO\n";
    }
    return;
}

void TUHorario::run() {
    cout << "\n\nTestando Horario...\n";
    monta();
    testarCenarioSucesso();
    testarCenarioFalha();
    desmonta();

    return;
}

// -----------------------------------------------------------------------------

const string TUDataValidade::VALOR_VALIDO = "04/19";
const string TUDataValidade::VALOR_INVALIDO_LETRA = "04/E9";
const string TUDataValidade::VALOR_INVALIDO_MES = "14/19";
const string TUDataValidade::VALOR_INVALIDO_TAMANHO = "04/192";

void TUDataValidade::monta() {
    pDataValidade = new DataValidade();
    cout << "OK (Monta)\n";
}

void TUDataValidade::desmonta() {
    delete pDataValidade;
    cout << "OK (Desmonta)\n";
}

void TUDataValidade::testarCenarioSucesso() {
    try {
        pDataValidade->setDataValidade(VALOR_VALIDO);
        if (VALOR_VALIDO.compare(pDataValidade->getDataValidade()) != 0) {
            cout << "ERRO TestarCenarioSucesso | UNICO\n";
        }
        cout << "OK TestarCenarioSucesso | UNICO\n";
    }
    catch(invalid_argument excecao) {
        cout << "ERRO TestarCenarioSucesso | UNICO\n";
    }
    return;
}

void TUDataValidade::testarCenarioFalha() {
    try {
        pDataValidade->setDataValidade(VALOR_INVALIDO_LETRA);
        cout << "ERRO TestarCenarioFalha | LETRA\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | LETRA\n";
    }
    try {
        pDataValidade->setDataValidade(VALOR_INVALIDO_MES);
        cout << "ERRO TestarCenarioFalha | MES\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | MES\n";
    }
    try {
        pDataValidade->setDataValidade(VALOR_INVALIDO_TAMANHO);
        cout << "ERRO TestarCenarioFalha | TAMANHO\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | TAMANHO\n";
    }
    return;
}

void TUDataValidade::run() {
    cout << "\n\nTestando DataValidade...\n";
    monta();
    testarCenarioSucesso();
    testarCenarioFalha();
    desmonta();

    return;
}

// -----------------------------------------------------------------------------

const string TUPreco::VALOR_VALIDO = "850,99";
const string TUPreco::VALOR_INVALIDO_SIMBOLO = "85%,99";
const string TUPreco::VALOR_INVALIDO_VIRGULAS = "8,50,99";
const string TUPreco::VALOR_INVALIDO_CENTAVOS = "8,5099";
const string TUPreco::VALOR_INVALIDO_PRECO = "1850,99";
const string TUPreco::VALOR_INVALIDO_TAMANHO = "824550,99";

void TUPreco::monta() {
    pPreco = new Preco();
    cout << "OK (Monta)\n";
}

void TUPreco::desmonta() {
    delete pPreco;
    cout << "OK (Desmonta)\n";
}

void TUPreco::testarCenarioSucesso() {
    try {
        pPreco->setPreco(VALOR_VALIDO);
        if (VALOR_VALIDO.compare(pPreco->getPreco()) != 0) {
            cout << "ERRO TestarCenarioSucesso | UNICO\n";
        }
        cout << "OK TestarCenarioSucesso | UNICO\n";
    }
    catch(invalid_argument excecao) {
        cout << "ERRO TestarCenarioSucesso | UNICO\n";
    }
    return;
}

void TUPreco::testarCenarioFalha() {
    try {
        pPreco->setPreco(VALOR_INVALIDO_SIMBOLO);
        cout << "ERRO TestarCenarioFalha | SIMBOLO\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | SIMBOLO\n";
    }
    try {
        pPreco->setPreco(VALOR_INVALIDO_VIRGULAS);
        cout << "ERRO TestarCenarioFalha | VIRGULAS\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | VIRGULAS\n";
    }
    try {
        pPreco->setPreco(VALOR_INVALIDO_CENTAVOS);
        cout << "ERRO TestarCenarioFalha | CENTAVOS\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | CENTAVOS\n";
    }
    try {
        pPreco->setPreco(VALOR_INVALIDO_PRECO);
        cout << "ERRO TestarCenarioFalha | PRECO\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | PRECO\n";
    }
    try {
        pPreco->setPreco(VALOR_INVALIDO_TAMANHO);
        cout << "ERRO TestarCenarioFalha | TAMANHO\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | TAMANHO\n";
    }
    return;
}

void TUPreco::run() {
    cout << "\n\nTestando Preco...\n";
    monta();
    testarCenarioSucesso();
    testarCenarioFalha();
    desmonta();

    return;
}

// -----------------------------------------------------------------------------

const string TUNumeroCartao::VALOR_VALIDO = "4556830088565320";
const string TUNumeroCartao::VALOR_INVALIDO = "4556830188565320";
const string TUNumeroCartao::VALOR_INVALIDO_SIMBOLO = "a55683o188565320";
const string TUNumeroCartao::VALOR_INVALIDO_TAMANHO = "45568300";

void TUNumeroCartao::monta() {
    pNumeroCartao = new NumeroCartao();
    cout << "OK (Monta)\n";
}

void TUNumeroCartao::desmonta() {
    delete pNumeroCartao;
    cout << "OK (Desmonta)\n";
}

void TUNumeroCartao::testarCenarioSucesso() {
    try {
        pNumeroCartao->setNumero(VALOR_VALIDO);
        if (VALOR_VALIDO.compare(pNumeroCartao->getNumero()) != 0) {
            cout << "ERRO TestarCenarioSucesso | UNICO\n";
        }
        cout << "OK TestarCenarioSucesso | UNICO\n";
    }
    catch(invalid_argument excecao) {
        cout << "ERRO TestarCenarioSucesso | UNICO\n";
    }
    return;
}

void TUNumeroCartao::testarCenarioFalha() {
    try {
        pNumeroCartao->setNumero(VALOR_INVALIDO);
        cout << "ERRO TestarCenarioFalha | DIGITO\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | DIGITO\n";
    }
    try {
        pNumeroCartao->setNumero(VALOR_INVALIDO_SIMBOLO);
        cout << "ERRO TestarCenarioFalha | SIMBOLO\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | SIMBOLO\n";
    }
    try {
        pNumeroCartao->setNumero(VALOR_INVALIDO_TAMANHO);
        cout << "ERRO TestarCenarioFalha | TAMANHO\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | TAMANHO\n";
    }
    return;
}

void TUNumeroCartao::run() {
    cout << "\n\nTestando NumeroCartao...\n";
    monta();
    testarCenarioSucesso();
    testarCenarioFalha();
    desmonta();

    return;
}

// -----------------------------------------------------------------------------

const string TUCPF::VALOR_VALIDO = "529.982.247-25";
const string TUCPF::VALOR_INVALIDO = "173.859.290-86";
const string TUCPF::VALOR_INVALIDO_REPETIDO = "111.111.111-11";
const string TUCPF::VALOR_INVALIDO_SIMBOLO = "est.eem.euc-pf";
const string TUCPF::VALOR_INVALIDO_TAMANHO = "173.829.290-867";
const string TUCPF::VALOR_INVALIDO_PONTO = "17308291290286";

void TUCPF::monta() {
    pCPF = new CPF();
    cout << "OK (Monta)\n";
}

void TUCPF::desmonta() {
    delete pCPF;
    cout << "OK (Desmonta)\n";
}

void TUCPF::testarCenarioSucesso() {
    try {
        pCPF->setCPF(VALOR_VALIDO);
        if (VALOR_VALIDO.compare(pCPF->getCPF()) != 0) {
            cout << "ERRO TestarCenarioSucesso | UNICO\n";
        }
        cout << "OK TestarCenarioSucesso | UNICO\n";
    }
    catch(invalid_argument excecao) {
        cout << "ERRO TestarCenarioSucesso | UNICO\n";
    }
    return;
}

void TUCPF::testarCenarioFalha() {
    try {
        pCPF->setCPF(VALOR_INVALIDO);
        cout << "ERRO TestarCenarioFalha | DIGITO\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | DIGITO\n";
    }
    try {
        pCPF->setCPF(VALOR_INVALIDO_SIMBOLO);
        cout << "ERRO TestarCenarioFalha | SIMBOLO\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | SIMBOLO\n";
    }
    try {
        pCPF->setCPF(VALOR_INVALIDO_REPETIDO);
        cout << "ERRO TestarCenarioFalha | REPETIDO\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | REPETIDO\n";
    }
    try {
        pCPF->setCPF(VALOR_INVALIDO_TAMANHO);
        cout << "ERRO TestarCenarioFalha | TAMANHO\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | TAMANHO\n";
    }
    try {
        pCPF->setCPF(VALOR_INVALIDO_PONTO);
        cout << "ERRO TestarCenarioFalha | PONTO\n";
    }
    catch(invalid_argument excecao) {
        cout << "OK TestarCenarioFalha | PONTO\n";
    }
    return;
}

void TUCPF::run() {
    cout << "\n\nTestando CPF...\n";
    monta();
    testarCenarioSucesso();
    testarCenarioFalha();
    desmonta();

    return;
}

// -----------------------------------------------------------------------------
// 								ENTIDADES
// -----------------------------------------------------------------------------

const EstruturaUsuario TUUsuario::ESTRUTURA_VALIDA = {
	"529.982.247-25",
	"Oi3ule"
};

void TUUsuario::monta() {
    pUsuario = new Usuario();
    cout << "OK (Monta)\n";
}

void TUUsuario::desmonta() {
    delete pUsuario;
    cout << "OK (Desmonta)\n";
}

void TUUsuario::testarCenarioSucesso() {
    EstruturaUsuario teste_out;
    try {
        pUsuario->setUsuario(ESTRUTURA_VALIDA);
        pUsuario->getUsuario(&teste_out);
        if (ESTRUTURA_VALIDA.cpf.compare(teste_out.cpf) != 0 ||
            ESTRUTURA_VALIDA.senha.compare(teste_out.senha) != 0) {
            cout << "ERRO TestarCenarioSucesso\n";
        }
        cout << "OK TestarCenarioSucesso\n";
    }
    catch(invalid_argument excecao) {
        cout << "ERRO TestarCenarioSucesso\n";
    }
    return;
}

void TUUsuario::run() {
    cout << "\n\nTestando Usuario...\n";
    monta();
    testarCenarioSucesso();
    desmonta();

    return;
}

// -----------------------------------------------------------------------------

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
    cout << "OK (Monta)\n";
}

void TUApresentacao::desmonta() {
    delete pApresentacao;
    cout << "OK (Desmonta)\n";
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
            cout << "ERRO TestarCenarioSucesso\n";
        }
        cout << "OK TestarCenarioSucesso\n";
    }
    catch(invalid_argument excecao) {
        cout << "ERRO TestarCenarioSucesso\n";
    }
    return;
}

void TUApresentacao::run() {
    cout << "\n\nTestando Apresentacao...\n";
    monta();
    testarCenarioSucesso();
    desmonta();

    return;
}

// -----------------------------------------------------------------------------

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
    cout << "OK (Monta)\n";
}

void TUEvento::desmonta() {
    delete pEvento;
    cout << "OK (Desmonta)\n";
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
            cout << "ERRO TestarCenarioSucesso\n";
        }
        cout << "OK TestarCenarioSucesso\n";
    }
    catch(invalid_argument excecao) {
        cout << "ERRO TestarCenarioSucesso\n";
    }
    return;
}

void TUEvento::run() {
    cout << "\n\nTestando Evento...\n";
    monta();
    testarCenarioSucesso();
    desmonta();

    return;
}

// -----------------------------------------------------------------------------

const EstruturaIngresso TUIngresso::ESTRUTURA_VALIDA = {
	"12345"
};

void TUIngresso::monta() {
    pIngresso = new Ingresso();
    cout << "OK (Monta)\n";
}

void TUIngresso::desmonta() {
    delete pIngresso;
    cout << "OK (Desmonta)\n";
}

void TUIngresso::testarCenarioSucesso() {
    EstruturaIngresso ingresso;
    try {
        pIngresso->setIngresso(ESTRUTURA_VALIDA);
        pIngresso->getIngresso(&ingresso);
        if (ESTRUTURA_VALIDA.codigo.compare(ingresso.codigo) != 0) {
            cout << "ERRO TestarCenarioSucesso\n";
        }
        cout << "OK TestarCenarioSucesso\n";
    }
    catch(invalid_argument excecao) {
        cout << "ERRO TestarCenarioSucesso\n";
    }
    return;
}

void TUIngresso::run() {
    cout << "\n\nTestando Ingresso...\n";
    monta();
    testarCenarioSucesso();
    desmonta();

    return;
}

// -----------------------------------------------------------------------------


const EstruturaCartaoCredito TUCartaoCredito::ESTRUTURA_VALIDA = {
  	"4539661491081288",
  	"857",
  	"06/22"
};

void TUCartaoCredito::monta() {
    pCartao = new CartaoCredito();
    cout << "OK (Monta)\n";
}

void TUCartaoCredito::desmonta() {
    delete pCartao;
    cout << "OK (Desmonta)\n";
}

void TUCartaoCredito::testarCenarioSucesso() {

    EstruturaCartaoCredito cartao;

    try {
        pCartao->setCartaoCredito(ESTRUTURA_VALIDA);
        pCartao->getCartaoCredito(&cartao);
        if (ESTRUTURA_VALIDA.numero.compare(cartao.numero) != 0 ||
            ESTRUTURA_VALIDA.codigo.compare(cartao.codigo) != 0 ||
            ESTRUTURA_VALIDA.data.compare(cartao.data) != 0) {
            cout << "ERRO TestarCenarioSucesso\n";
        }
        cout << "OK TestarCenarioSucesso\n";
    }
    catch(invalid_argument excecao) {
        cout << "ERRO TestarCenarioSucesso\n";
    }
    return;
}

void TUCartaoCredito::run() {
    cout << "\n\nTestando Cartao de Credito...\n";
    monta();
    testarCenarioSucesso();
    desmonta();

    return;
}
