#include "dominios.h"

const string CodigoEvento::LIMITE_SUPERIOR = "999";
const string CodigoEvento::LIMITE_INFERIOR = "000";
    

void CodigoEvento::validar(string codigo) throw (invalid_argument) {

    if (LIMITE_INFERIOR.compare(codigo) > 0 || LIMITE_SUPERIOR.compare(codigo) < 0 ||
        codigo.length() != LIMITE_INFERIOR.length()) {
        throw invalid_argument("Argumento invalido");
    }
}

void CodigoEvento::setCodigo(string codigo) throw (invalid_argument) {
    validar(codigo);
    this->codigo = codigo;
}

// ------------------------------------------------------------------------

const string CodigoApresentacao::LIMITE_SUPERIOR = "9999";
const string CodigoApresentacao::LIMITE_INFERIOR = "0000";
    

void CodigoApresentacao::validar(string codigo) throw (invalid_argument) {

    if (LIMITE_INFERIOR.compare(codigo) > 0 || LIMITE_SUPERIOR.compare(codigo) < 0 ||
        codigo.length() != LIMITE_INFERIOR.length()) {
        throw invalid_argument("Argumento invalido");
    }
}

void CodigoApresentacao::setCodigo(string codigo) throw (invalid_argument) {
    validar(codigo);
    this->codigo = codigo;
}

// ------------------------------------------------------------------------

const string CodigoIngresso::LIMITE_SUPERIOR = "99999";
const string CodigoIngresso::LIMITE_INFERIOR = "00000";
    

void CodigoIngresso::validar(string codigo) throw (invalid_argument) {

    if (LIMITE_INFERIOR.compare(codigo) > 0 || LIMITE_SUPERIOR.compare(codigo) < 0 ||
        codigo.length() != LIMITE_INFERIOR.length()) {
        throw invalid_argument("Argumento invalido");
    }
}

void CodigoIngresso::setCodigo(string codigo) throw (invalid_argument) {
    validar(codigo);
    this->codigo = codigo;
}

// ------------------------------------------------------------------------  

void NomeEvento::validar(string nome) throw (invalid_argument) {

    // checa tamanho
    if (nome.length() != TAMANHO_ESPERADO) {
        throw invalid_argument("Argumento invalido");
    }

    int caracter;
    bool flag = false;
    for (int i = 0; i < TAMANHO_ESPERADO; i++) {
        caracter = int(nome[i]);
        // checa por simbolos
        if ((caracter != ESPACO && caracter < LIMITE_INFERIOR_NUMERO) || (caracter > LIMITE_SUPERIOR_NUMERO &&
            caracter < LIMITE_INFERIOR_MAIUSCULAS) || (caracter > LIMITE_SUPERIOR_MAIUSCULAS &&
            caracter < LIMITE_INFERIOR_MINUSCULAS) || caracter > LIMITE_SUPERIOR_MINUSCULAS) {
            throw invalid_argument("Argumento invalido");       
        } else {
            // checa por existencia de letras
            if (caracter > LIMITE_SUPERIOR_NUMERO) {
                flag = true;
            }
        }
    }
    if (flag == false) {
        throw invalid_argument("Argumento invalido");
    }

    // checa espacos
    string espacos = "  ";
    if (nome.find(espacos) != string::npos) {
        throw invalid_argument("Argumento invalido");   
    }
    return;
}

void NomeEvento::setNome(string nome) throw (invalid_argument) {
    validar(nome);
    this->nome = nome;
}