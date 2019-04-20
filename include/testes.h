#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "dominios.h"

using namespace std;
/*
class TUgeral {
 private:
    int estado;

    void monta();
    void desmonta();
    void testarCenarioSucesso();
    void testarCenarioFalha();

 public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;
    
    int run();
};
*/
class TUCodigoEvento {
 private:

    void monta();
    void desmonta();
    void testarCenarioSucesso();
    void testarCenarioFalha();

    static const string VALOR_VALIDO;
    static const string VALOR_INVALIDO_LETRA;
    static const string VALOR_INVALIDO_MAIOR;
    static const string VALOR_INVALIDO_MENOR;

    CodigoEvento *pCodigo;
 
 public:
    
    void run();
};

class TUCodigoSeguranca {
 private:

    void monta();
    void desmonta();
    void testarCenarioSucesso();
    void testarCenarioFalha();

    static const string VALOR_VALIDO;
    static const string VALOR_INVALIDO_LETRA;
    static const string VALOR_INVALIDO_MAIOR;
    static const string VALOR_INVALIDO_MENOR;

    CodigoSeguranca *pCodigo;

 public:

    void run();
};

class TUCodigoApresentacao {
 private:

    void monta();
    void desmonta();
    void testarCenarioSucesso();
    void testarCenarioFalha();

    static const string VALOR_VALIDO;
    static const string VALOR_INVALIDO_LETRA;
    static const string VALOR_INVALIDO_MAIOR;
    static const string VALOR_INVALIDO_MENOR;

    CodigoApresentacao *pCodigo;
 
 public:
    
    void run();
};

class TUCodigoIngresso {
 private:

    void monta();
    void desmonta();
    void testarCenarioSucesso();
    void testarCenarioFalha();

    static const string VALOR_VALIDO;
    static const string VALOR_INVALIDO_LETRA;
    static const string VALOR_INVALIDO_MAIOR;
    static const string VALOR_INVALIDO_MENOR;

    CodigoIngresso *pCodigo;
 
 public:
    
    void run();
};

class TUNomeEvento {
 private:

    void monta();
    void desmonta();
    void testarCenarioSucesso();
    void testarCenarioFalha();

    static const string NOME_VALIDO;
    static const string NOME_INVALIDO_SIMBOLO;
    static const string NOME_INVALIDO_MAIOR;
    static const string NOME_INVALIDO_MENOR;
    static const string NOME_INVALIDO_ESPACOS;
    static const string NOME_INVALIDO_NUMEROS;

    NomeEvento *pNome;
 
 public:
    
    void run();
};

class TUData {
 private:

    void monta();
    void desmonta();
    void testarCenarioSucesso();
    void testarCenarioFalha();

    static const string DATA_VALIDA_NORMAL;
    static const string DATA_VALIDA_BISSEXTO;
    static const string DATA_INVALIDA_MAIOR;
    static const string DATA_INVALIDA_MENOR;
    static const string DATA_INVALIDA_BARRAS;
    static const string DATA_INVALIDA_ANO;
    static const string DATA_INVALIDA_MES;
    static const string DATA_INVALIDA_DIA_31;
    static const string DATA_INVALIDA_DIA_30;
    static const string DATA_INVALIDA_BISSEXTO;

    Data *pData;
 
 public:
    
    void run();
};

class TUSenha {
 private:

    void monta();
    void desmonta();
    void testarCenarioSucesso();
    void testarCenarioFalha();

    static const string VALOR_VALIDO;
    static const string VALOR_INVALIDO_MAIOR;
    static const string VALOR_INVALIDO_MENOR;
    static const string VALOR_INVALIDO_REPETIDO;
    static const string VALOR_INVALIDO_MINUS;
    static const string VALOR_INVALIDO_MAIUS;
    static const string VALOR_INVALIDO_SIMBOLOS;

    Senha *pSenha;
 
 public:
    
    void run();
};

class TUCidade {
 private:

    void monta();
    void desmonta();
    void testarCenarioSucesso();
    void testarCenarioFalha();

    static const string VALOR_VALIDO;
    static const string VALOR_INVALIDO_PONTO;
    static const string VALOR_INVALIDO_ESPACOS;
    static const string VALOR_INVALIDO_MENOR;
    static const string VALOR_INVALIDO_MAIOR;
    static const string VALOR_INVALIDO_SIMBOLOS;
    static const string VALOR_INVALIDO_NUMEROS;
    static const string VALOR_INVALIDO_PONTO2;

    Cidade *pCidade;
 
 public:
    
    void run();
};

class TUClasseEvento {
 private:

    void monta();
    void desmonta();
    void testarCenarioSucesso();
    void testarCenarioFalha();

    static const string VALOR_VALIDO;
    static const string VALOR_INVALIDO_LETRA;
    static const string VALOR_INVALIDO_MAIOR;
    static const string VALOR_INVALIDO_OVERFLOW;

    ClasseEvento *pEvento;
 
 public:
    
    void run();
};

class TUNumeroSala {
 private:

    void monta();
    void desmonta();
    void testarCenarioSucesso();
    void testarCenarioFalha();

    static const string VALOR_VALIDO;
    static const string VALOR_VALIDO_LIMITE;
    static const string VALOR_VALIDO_NPADRAO;
    static const string VALOR_INVALIDO_LETRA;
    static const string VALOR_INVALIDO_OVERFLOW;
    static const string VALOR_INVALIDO_MAIOR;

    NumeroSala *pSala;
 
 public:
    
    void run();
};

class TUDisponibilidade {
 private:

    void monta();
    void desmonta();
    void testarCenarioSucesso();
    void testarCenarioFalha();

    static const string VALOR_VALIDO;
    static const string VALOR_VALIDO_LIMITE;
    static const string VALOR_VALIDO_NPADRAO;
    static const string VALOR_INVALIDO_LETRA;
    static const string VALOR_INVALIDO_OVERFLOW;
    static const string VALOR_INVALIDO_TAMANHO;

    Disponibilidade *pDisponibilidade;
 
 public:
    
    void run();
};

class TUFaixaEtaria {
 private:

    void monta();
    void desmonta();
    void testarCenarioSucesso();
    void testarCenarioFalha();

    static const string VALOR_VALIDO_LETRA;
    static const string VALOR_VALIDO_NUMERO;    
    static const string VALOR_INVALIDO_LETRA;
    static const string VALOR_INVALIDO_NUMERO;
    static const string VALOR_INVALIDO_TAMANHO;

    FaixaEtaria *pFaixa;

 public:

    void run();
};

class TUEstado {
 private:

    void monta();
    void desmonta();
    void testarCenarioSucesso();
    void testarCenarioFalha();

    static const string VALOR_VALIDO;   
    static const string VALOR_INVALIDO_LETRA;
    static const string VALOR_INVALIDO_NUMERO;
    static const string VALOR_INVALIDO_TAMANHO;

    Estado *pEstado;

 public:

    void run();
};

class TUHorario {
 private:

    void monta();
    void desmonta();
    void testarCenarioSucesso();
    void testarCenarioFalha();

    static const string VALOR_VALIDO;
    static const string VALOR_INVALIDO_LETRA;
    static const string VALOR_INVALIDO_HORA;
    static const string VALOR_INVALIDO_MINUTO;
    static const string VALOR_INVALIDO_TAMANHO;

    Horario *pHorario;

 public:

    void run();
};

class TUDataValidade {
 private:

    void monta();
    void desmonta();
    void testarCenarioSucesso();
    void testarCenarioFalha();

    static const string VALOR_VALIDO;
    static const string VALOR_INVALIDO_LETRA;
    static const string VALOR_INVALIDO_MES;
    static const string VALOR_INVALIDO_TAMANHO;

    DataValidade *pDataValidade;

 public:

    void run();
};

class TUPreco {
 private:

    void monta();
    void desmonta();
    void testarCenarioSucesso();
    void testarCenarioFalha();

    static const string VALOR_VALIDO;
    static const string VALOR_INVALIDO_SIMBOLO;
    static const string VALOR_INVALIDO_VIRGULAS;
    static const string VALOR_INVALIDO_CENTAVOS;
    static const string VALOR_INVALIDO_PRECO;
    static const string VALOR_INVALIDO_TAMANHO;

    Preco *pPreco;

 public:

    void run();
};

#endif // TESTES_H_INCLUDED
