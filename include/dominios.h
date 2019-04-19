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

class CodigoApresentacao {
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

class CodigoIngresso {
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

class NomeEvento {
 private:
 	string nome;

 	static const int ESPACO = 32; // ESPACO EM ASCII
 	static const int LIMITE_INFERIOR_NUMERO = 48; // 0 EM ASCII
 	static const int LIMITE_SUPERIOR_NUMERO = 57; // 9 EM ASCII
 	static const int LIMITE_INFERIOR_MAIUSCULAS = 65; // A EM ASCII
 	static const int LIMITE_SUPERIOR_MAIUSCULAS = 90; // Z EM ASCII
 	static const int LIMITE_INFERIOR_MINUSCULAS = 97; // a EM ASCII
 	static const int LIMITE_SUPERIOR_MINUSCULAS = 122; // z EM ASCII
 	static const int TAMANHO_ESPERADO = 20;

 	void validar(string) throw (invalid_argument);
 
 public:
 	void setNome(string) throw (invalid_argument);
 	string getNome() {
 		return nome;
 	}
};
#endif