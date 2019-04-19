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

// ------------------------------------------------------------------------  

void Data::validar(string data) throw (invalid_argument) {

    // checa tamanho
    if (data.length() != TAMANHO_ESPERADO) {
        throw invalid_argument("Argumento invalido");
    }

    // checa por numeros
    int caracter;
    for (int i = 0; i < TAMANHO_ESPERADO; i++) {
        caracter = int(data[i]);
        if ((caracter < LIMITE_INFERIOR_NUMERO || caracter > LIMITE_SUPERIOR_NUMERO) &&
            (i+1)%INTERVALO_BARRAS != 0) {
            throw invalid_argument("Argumento invalido");       
        }
    }

    // checa barras
    if (data[BARRA_POS1] != '/' || data[BARRA_POS2] != '/') {
        throw invalid_argument("Argumento invalido");
    }

    // checa ano bissexto
    int ano = (int(data[ANO_POS1])-ASCII_OFFSET)*10 + (int(data[ANO_POS2])-ASCII_OFFSET);
    int mes = (int(data[MES_POS1])-ASCII_OFFSET)*10 + (int(data[MES_POS2])-ASCII_OFFSET);
    int dia = (int(data[DIA_POS1])-ASCII_OFFSET)*10 + (int(data[DIA_POS2])-ASCII_OFFSET);
    bool bissexto = false;
    if (ano%4 == 0) {
        bissexto = true;
    }

    if (mes > 12 || dia > 31) {
        throw invalid_argument("Argumento invalido");
    }

    if (mes == ABR || mes == JUN || mes == SET || mes == NOV) {
        // tratamento 30 dias
        if (dia > 30) {
            throw invalid_argument("Argumento invalido");
        }
    } else if (bissexto) {
        // tratamento 29 dias
        if (dia > 29) {
            throw invalid_argument("Argumento invalido");
        }
    } else {
        // tratamento 28 dias
        if (dia > 28) {
            throw invalid_argument("Argumento invalido");
        }
    }
    
    return;
}

void Data::setData(string data) throw (invalid_argument) {
    validar(data);
    this->data = data;
}
