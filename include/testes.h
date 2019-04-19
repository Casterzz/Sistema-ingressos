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
#endif // TESTES_H_INCLUDED
