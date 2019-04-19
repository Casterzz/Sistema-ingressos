#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>
#include <string>
#include <cmath>

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

class FaixaEtaria {
 private:
 	string faixa;

 	static const int TAMANHO_MAX = 2;
 	static const string LIVRE;
 	static const string DEZ;
 	static const string DOZE;
 	static const string QUATORZE;
 	static const string DEZESSEIS;
 	static const string DEZOITO;

 	void validar(string) throw (invalid_argument);
 
 public:
 	void setFaixa(string) throw (invalid_argument);
 	string getFaixa() {
 		return faixa;
 	}
};

class Estado {
 private:
 	string estado;

 	static const int TAMANHO_ESPERADO = 2;
 	static const string LISTA;

 	void validar(string) throw (invalid_argument);
 
 public:
 	void setEstado(string) throw (invalid_argument);
 	string getEstado() {
 		return estado;
 	}
};

class Horario {
 private:
 	string horario;

 	static const int TAMANHO_ESPERADO = 5;
 	static const int ASCII_OFFSET = 48;
    static const int LIMITE_INFERIOR_HORA = 7;
    static const int LIMITE_SUPERIOR_HORA = 22;
    static const int HORAS_POS1 = 0;
    static const int HORAS_POS2 = 1;
    static const int MEIO = 2;
    static const int MINUTOS_POS1 = 3;
    static const int MINUTOS_POS2 = 4;
    static const string MINUTOS;
    static const int LIMITE_INFERIOR_NUMERO = 48; // 0 EM ASCII
 	static const int LIMITE_SUPERIOR_NUMERO = 57; // 9 EM ASCII

 	void validar(string) throw (invalid_argument);
 
 public:
 	void setHorario(string) throw (invalid_argument);
 	string getHorario() {
 		return horario;
 	}
};

class DataValidade {
 private:
 	string dataValidade;

 	static const int TAMANHO_ESPERADO = 5;
 	static const int LIMITE_SUPERIOR_MESES = 12;
 	static const int LIMITE_INFERIOR_MESES = 1;
 	static const int ASCII_OFFSET = 48;
 	static const int MES_POS1 = 0;
 	static const int MES_POS2 = 1;
 	static const int MEIO = 2;
 	static const int ANO_POS1 = 3;
 	static const int ANO_POS2 = 4;
 	static const int LIMITE_INFERIOR_NUMERO = 48; // 0 EM ASCII
 	static const int LIMITE_SUPERIOR_NUMERO = 57; // 9 EM ASCII

 	void validar(string) throw (invalid_argument);
 
 public:
 	void setDataValidade(string) throw (invalid_argument);
 	string getDataValidade() {
 		return dataValidade;
 	}
};

/*
	static const int TAMANHO_MAX = 7;
	static const float VALOR_MAX = 1000.00;
	static const float VALOR_MIN = 0.00;
*/

class Preco {
 private:
 	string preco;

 	static const int TAMANHO_MAX = 7;
 	static const float VALOR_MAX;
	static const float VALOR_MIN;
	static const int POTENCIA_INICIAL = -2;
	static const int NUM_ALGARISMOS_DEC = 2;
 	static const int ASCII_OFFSET = 48;
 	static const int LIMITE_INFERIOR_NUMERO = 48; // 0 EM ASCII
 	static const int LIMITE_SUPERIOR_NUMERO = 57; // 9 EM ASCII
 	static const int VIRGULA = 44; // virgula em ASCII

 	void validar(string) throw (invalid_argument);
 
 public:
 	void setPreco(string) throw (invalid_argument);
 	string getPreco() {
 		return preco;
 	}
};

#endif
