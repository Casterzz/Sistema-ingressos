/**
 *  @file dominios.h
 *  @author Pedro Carvalho
 *  @author Victor Castor
 *  @version 1.0
 *
 *  @section DESCRIÇÃO
 *
 *  Este arquivo é parte de uma biblioteca de classes desenvolvida para um
 *  trabalho universitário e contém as declarações das classes de domínio.
 *
 *  Universidade de Brasília (UnB)
 *
 *  @subsection Período de Desenvolvimento
 *
 *  Primeiro semestre de 2019
 */

#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>
#include <string>
#include <cmath>

using namespace std;

/**
 *  @brief Classe que contém um código de evento.
 *  @author Pedro Carvalho
 *  @author Victor Castor
 *
 *  @section DESCRIÇÃO
 *  Essa classe armazena uma string que representa o código de evento.
 *
 *  @subsection FORMA
 *  A string obedece à forma "XXX", em que X é dígito (0 a 9).
 */

class CodigoEvento {
 private:
 	string codigo;

 	static const string LIMITE_SUPERIOR;
 	static const string LIMITE_INFERIOR;

 	void validar(string) throw (invalid_argument);

 public:
    /**
     *  Atribui valor à variável "codigo".
     *
     *  @param string[in]
     */
 	void setCodigo(string) throw (invalid_argument);

    /**
     *  Obtém o código.
     *
     *  @return Uma string correspondente à variável "codigo".
     */
 	string getCodigo() {
 		return codigo;
 	}
};

/**
 *  @brief Classe que contém um código de segurança.
 *  @author Pedro Carvalho
 *  @author Victor Castor
 *
 *  @section DESCRIÇÃO
 *  Essa classe é equivalente à classe "CodigoEvento".
 *
 *  @subsection FORMA
 *  A string obedece à forma "XXX", em que X é dígito (0 a 9).
 */

class CodigoSeguranca : public CodigoEvento {
};

/**
 *  @brief Classe que contém um código de apresentação.
 *  @author Pedro Carvalho
 *  @author Victor Castor
 *
 *  @section DESCRIÇÃO
 *  Essa classe armazena uma string que representa o código de apresentação.
 *
 *  @subsection FORMA
 *  A string obedece à forma "XXXX", em que X é dígito (0 a 9).
 */

class CodigoApresentacao {
 private:
 	string codigo;

 	static const string LIMITE_SUPERIOR;
 	static const string LIMITE_INFERIOR;

 	void validar(string) throw (invalid_argument);

 public:
    /**
     *  Atribui valor à variável "codigo".
     *
     *  @param string[in]
     */
 	void setCodigo(string) throw (invalid_argument);

    /**
     *  Obtém o código.
     *
     *  @return Uma string correspondente à variável "codigo".
     */
 	string getCodigo() {
 		return codigo;
 	}
};

/**
 *  @brief Classe que contém um código de ingresso.
 *  @author Pedro Carvalho
 *  @author Victor Castor
 *
 *  @section DESCRIÇÃO
 *  Essa classe armazena uma string que representa o código de ingresso.
 *
 *  @subsection FORMA
 *  A string obedece à forma "XXXXX", em que X é dígito (0 a 9).
 */

class CodigoIngresso {
 private:
 	string codigo;

 	static const string LIMITE_SUPERIOR;
 	static const string LIMITE_INFERIOR;

 	void validar(string) throw (invalid_argument);

 public:
    /**
     *  Atribui valor à variável "codigo".
     *
     *  @param string[in]
     */
 	void setCodigo(string) throw (invalid_argument);

    /**
     *  Obtém o código.
     *
     *  @return Uma string correspondente à variável "codigo".
     */
 	string getCodigo() {
 		return codigo;
 	}
};

/**
 *  @brief Classe que contém um nome de evento.
 *  @author Pedro Carvalho
 *  @author Victor Castor
 *
 *  @section DESCRIÇÃO
 *  Essa classe armazena uma string que representa o nome de evento.
 *
 *  @subsection FORMA
 *  A string obedece à forma "XXXXXXXXXXXXXXXXXXXX" (20 caracteres), em que X
 *  pode ser letra, dígito ou espaço. Pelo menos um caracter é letra. Não podem
 *  existir espaços em sequência.
 */

class NomeEvento {
 private:
 	string nome;

 	static const int TAMANHO_ESPERADO = 20;

 	void validar(string) throw (invalid_argument);

 public:
    /**
     *  Atribui valor à variável "nome".
     *
     *  @param string[in]
     */
 	void setNome(string) throw (invalid_argument);

    /**
     *  Obtém o nome.
     *
     *  @return Uma string correspondente à variável "nome".
     */
 	string getNome() {
 		return nome;
 	}
};

/**
 *  @brief Classe que contém uma data.
 *  @author Pedro Carvalho
 *  @author Victor Castor
 *
 *  @section DESCRIÇÃO
 *  Essa classe armazena uma string que representa uma data.
 *
 *  @subsection FORMA
 *  A string obedece à forma "DD/MM/AA", em que:
 *  - DD é um número de 1 a 31;
 *  - MM é um número de 1 a 12;
 *  - AA é um número de 0 a 99.
 */

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
 	static const string MESES;
 	static const int ABR = 4;
 	static const int JUN = 6;
 	static const int SET = 9;
 	static const int NOV = 11;

 	void validar(string) throw (invalid_argument);

 public:
    /**
     *  Atribui valor à variável "data".
     *
     *  @param string[in]
     */
 	void setData(string) throw (invalid_argument);

    /**
     *  Obtém a data.
     *
     *  @return Uma string correspondente à variável "data".
     */
 	string getData() {
 		return data;
 	}
};

class Senha {
 private:
 	string senha;

 	static const int TAMANHO_ESPERADO = 6;

 	void validar(string) throw (invalid_argument);

 public:
 	void setSenha(string) throw (invalid_argument);
 	string getSenha() {
 		return senha;
 	}
};

class Cidade {
 private:
 	string cidade;

 	static const int TAMANHO_ESPERADO = 15;

 	void validar(string) throw (invalid_argument);

 public:
 	void setCidade(string) throw (invalid_argument);
 	string getCidade() {
 		return cidade;
 	}
};

class ClasseEvento {
 private:
 	string evento;

 	static const int TAMANHO_ESPERADO = 1;

 	void validar(string) throw (invalid_argument);

 public:
 	void setEvento(string) throw (invalid_argument);
 	string getEvento() {
 		return evento;
 	}
};

class NumeroSala {
 private:
 	string sala;

 	static const int TAMANHO_MAXIMO = 2;
 	static const int VALOR_MAX = 10;
 	static const int VALOR_MIN = 1;

 	void validar(string) throw (invalid_argument);

 public:
 	void setSala(string) throw (invalid_argument);
 	string getSala() {
 		return sala;
 	}
};

class Disponibilidade {
 private:
 	string disponibilidade;

 	static const int TAMANHO_MAXIMO = 3;
 	static const int VALOR_MAX = 250;
 	static const int VALOR_MIN = 0;

 	void validar(string) throw (invalid_argument);

 public:
 	void setDisponibilidade(string) throw (invalid_argument);
 	string getDisponibilidade() {
 		return disponibilidade;
 	}
};

class FaixaEtaria {
 private:
 	string faixa;

 	static const int TAMANHO_MAX = 2;
 	static const string FAIXAS;

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
    static const int LIMITE_INFERIOR_HORA = 7;
    static const int LIMITE_SUPERIOR_HORA = 22;
    static const int HORAS_POS1 = 0;
    static const int HORAS_POS2 = 1;
    static const int MEIO = 2;
    static const int MINUTOS_POS1 = 3;
    static const int MINUTOS_POS2 = 4;
    static const string MINUTOS;

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
 	static const int MES_POS1 = 0;
 	static const int MES_POS2 = 1;
 	static const int MEIO = 2;
 	static const int ANO_POS1 = 3;
 	static const int ANO_POS2 = 4;

 	void validar(string) throw (invalid_argument);

 public:
 	void setDataValidade(string) throw (invalid_argument);
 	string getDataValidade() {
 		return dataValidade;
 	}
};

class Preco {
 private:
 	string preco;

 	static const int TAMANHO_MAX = 7;
 	static const float VALOR_MAX;
	static const float VALOR_MIN;
	static const int POTENCIA_INICIAL = -2;
	static const int NUM_ALGARISMOS_DEC = 2;

 	void validar(string) throw (invalid_argument);

 public:
 	void setPreco(string) throw (invalid_argument);
 	string getPreco() {
 		return preco;
 	}
};

class NumeroCartao {
 private:
 	string numero;

 	static const int TAMANHO_ESPERADO = 16;

 	void validar_entrada(string) throw (invalid_argument);
 	void validar_logica(string) throw (invalid_argument);

 public:
 	void setNumero(string) throw (invalid_argument);
 	string getNumero() {
 		return numero;
 	}
};

class CPF {
 private:
 	string cpf;

 	static const int TAMANHO_ESPERADO = 14;
 	static const int POS_PONTO1 = 3;
 	static const int POS_PONTO2 = 7;
 	static const int POS_TRACO = 11;

 	void validar_entrada(string) throw (invalid_argument);
 	void validar_logica(string) throw (invalid_argument);

 public:
 	void setCPF(string) throw (invalid_argument);
 	string getCPF() {
 		return cpf;
 	}
};

#endif
