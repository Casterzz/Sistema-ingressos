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

// ------------------------------------------------------------------------------

const string TUFaixaEtaria::VALOR_VALIDO_LETRA = "L";
const string TUFaixaEtaria::VALOR_VALIDO_NUMERO = "10";
const string TUFaixaEtaria::VALOR_INVALIDO_LETRA = "M";
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
