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

class Data {
 private:
 	string data;

 	static const int TAMANHO_ESPERADO = 8;
 	static const int BARRA_POS1 = 2;
 	static const int BARRA_POS2 = 5;
 	static const int INTERVALO_BARRAS = 3;
 	static const int ANO_POS1 = 6;
 	static const int ANO_POS2 = 7;
 	static const int MES_POS1 = 3;
 	static const int MES_POS2 = 4;
 	static const int DIA_POS1 = 0;
 	static const int DIA_POS2 = 1;
 	static const int ASCII_OFFSET = 48;
 	static const int LIMITE_INFERIOR_NUMERO = 48; // 0 EM ASCII
 	static const int LIMITE_SUPERIOR_NUMERO = 57; // 9 EM ASCII
 	static const int JAN = 1;
 	static const int FEV = 2;
 	static const int MAR = 3;
 	static const int ABR = 4;
 	static const int MAI = 5;
 	static const int JUN = 6;
 	static const int JUL = 7;
 	static const int AGO = 8;
 	static const int SET = 9;
 	static const int OUT = 10;
 	static const int NOV = 11;
 	static const int DEZ = 12;

 	void validar(string) throw (invalid_argument);
 
 public:
 	void setData(string) throw (invalid_argument);
 	string getData() {
 		return data;
 	}
};

#endif
