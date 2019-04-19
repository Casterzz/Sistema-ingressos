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
