#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>
#include <string>

using namespace std;

class CodigoEvento {
 private:
 	string codigo;

 	static const string LIMITE_SUPERIOR;
 	static const string LIMITE_INFERIOR;

 	void validar(string) throw (invalid_argument);
 public:
 	void setCodigo(string) throw (invalid_argument);
 	string getCodigo() {
 		return codigo;
 	}
};

#endif