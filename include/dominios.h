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
 *  @brief Classe que contém um código de segurança de cartão de crédito.
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

/**
 *  @brief Classe que contém uma senha.
 *  @author Victor Castor
 *
 *  @section DESCRIÇÃO
 *  Essa classe armazena uma string que representa uma senha.
 *
 *  @subsection FORMA
 *  A string obedece à forma "XXXXXX", onde:
 *  - X é digito de 0 a 9 ou uma letra (A - Z, a - z).
 *  - Não há caracteres repetidos.
 *  - Há pelo menos uma letra maiúscula, uma minúscula e um dígito.
 */

class Senha {
 private:
 	string senha;

 	static const int TAMANHO_ESPERADO = 6;

 	void validar(string) throw (invalid_argument);

 public:
    /**
     *  Atribui valor à variável "senha".
     *
     *  @param string[in]
     */
 	void setSenha(string) throw (invalid_argument);
 	
    /**
     *  Obtém a senha.
     *
     *  @return Uma string correspondente à variável "senha".
     */
    string getSenha() {
 		return senha;
 	}
};

/**
 *  @brief Classe que contém o nome da cidade.
 *  @author Victor Castor
 *
 *  @section DESCRIÇÃO
 *  Essa classe armazena uma string que representa o nome da cidade.
 *
 *  @subsection FORMA
 *  A string obedece à forma "XXXXXXXXXXXXXXX", onde:
 *  - X é letra, espaço ou ponto.
 *  - Pelo menos um caracter é ponto.
 *  - Não há espaços seguidos.
 *  - Ponto é precedido por letra.
 */

class Cidade {
 private:
 	string cidade;

 	static const int TAMANHO_ESPERADO = 15;

 	void validar(string) throw (invalid_argument);

 public:
    /**
     *  Atribui valor à variável "string".
     *
     *  @param string[in]
     */
 	void setCidade(string) throw (invalid_argument);
 	
    /**
     *  Obtém o nome da cidade.
     *
     *  @return Uma string correspondente à variável "cidade".
     */
    string getCidade() {
 		return cidade;
 	}
};

/**
 *  @brief Classe que contém o nome de evento.
 *  @author Victor Castor
 *
 *  @section DESCRIÇÃO
 *  Essa classe armazena uma string que representa o nome de evento.
 *
 *  @subsection FORMA
 *  A string obedece à forma "XXXXXXXXXXXXXXXXXXXX", onde:
 *  - X é letra, dígito ou espaço.
 *  - Pelo menos um caracter é letra.
 *  - Não há espaços seguidos.
 */

class ClasseEvento {
 private:
 	string evento;

 	static const int TAMANHO_ESPERADO = 1;

 	void validar(string) throw (invalid_argument);

 public:
    /**
     *  Atribui valor à variável "evento".
     *
     *  @param string[in]
     */
 	void setClasseEvento(string) throw (invalid_argument);
 	
    /**
     *  Obtém o nome de evento.
     *
     *  @return Uma string correspondente à variável "evento".
     */
    string getClasseEvento() {
 		return evento;
 	}
};

/**
 *  @brief Classe que contém o numero da sala.
 *  @author Victor Castor
 *
 *  @section DESCRIÇÃO
 *  Essa classe armazena uma string que representa o numero da sala.
 *
 *  @subsection FORMA
 *  A string é numero de 1 a 10.
 */

class NumeroSala {
 private:
 	string sala;

 	static const int TAMANHO_MAXIMO = 2;
 	static const int VALOR_MAX = 10;
 	static const int VALOR_MIN = 1;

 	void validar(string) throw (invalid_argument);

 public:
    /**
     *  Atribui valor à variável "sala".
     *
     *  @param string[in]
     */
 	void setSala(string) throw (invalid_argument);
 	
    /**
     *  Obtém o numero da sala.
     *
     *  @return Uma string correspondente à variável "sala".
     */
    string getSala() {
 		return sala;
 	}
};

/**
 *  @brief Classe que contém a disponinilidade.
 *  @author Victor Castor
 *
 *  @section DESCRIÇÃO
 *  Essa classe armazena uma string que representa o numero da disponibilidade.
 *
 *  @subsection FORMA
 *  A string é numero de 1 a 250.
 */

class Disponibilidade {
 private:
 	string disponibilidade;

 	static const int TAMANHO_MAXIMO = 3;
 	static const int VALOR_MAX = 250;
 	static const int VALOR_MIN = 0;

 	void validar(string) throw (invalid_argument);

 public:
    /**
     *  Atribui valor à variável "disponibilidade".
     *
     *  @param string[in]
     */
 	void setDisponibilidade(string) throw (invalid_argument);
 	
    /**
     *  Obtém o numero da disponibilidade.
     *
     *  @return Uma string correspondente à variável "disponibilidade".
     */
    string getDisponibilidade() {
 		return disponibilidade;
 	}
};

/**
 *  @brief Classe que contém uma faixa etária.
 *  @author Pedro Carvalho
 *
 *  @section DESCRIÇÃO
 *  Essa classe armazena uma string que representa uma faixa etária.
 *
 *  @subsection FORMA
 *  A string só pode assumir os valores "L", "10", "12", "14", "16" e "18".
 */

class FaixaEtaria {
 private:
 	string faixa;

 	static const int TAMANHO_MAX = 2;
 	static const string FAIXAS;

 	void validar(string) throw (invalid_argument);

 public:

    /**
     *  Atribui valor à variável "faixa".
     *
     *  @param string[in]
     */
 	void setFaixa(string) throw (invalid_argument);

    /**
     *  Obtém a faixa etária.
     *
     *  @return Uma string correspondente à variável "faixa".
     */
 	string getFaixa() {
 		return faixa;
 	}
};

/**
 *  @brief Classe que contém um estado.
 *  @author Pedro Carvalho
 *
 *  @section DESCRIÇÃO
 *  Essa classe armazena uma string que representa a sigla de um estado.
 *
 *  @subsection FORMA
 *  A string só pode assumir os valores que sejam siglas de estados brasileiros.
 */

class Estado {
 private:
 	string estado;

 	static const int TAMANHO_ESPERADO = 2;
 	static const string LISTA;

 	void validar(string) throw (invalid_argument);

 public:

    /**
     *  Atribui valor à variável "estado".
     *
     *  @param string[in]
     */
 	void setEstado(string) throw (invalid_argument);

    /**
     *  Obtém a sigla de estado.
     *
     *  @return Uma string correspondente à variável "estado".
     */
 	string getEstado() {
 		return estado;
 	}
};

/**
 *  @brief Classe que contém um horário.
 *  @author Pedro Carvalho
 *
 *  @section DESCRIÇÃO
 *  Essa classe armazena uma string que representa um horário, com hora e
 *  minuto.
 *
 *  @subsection FORMA
 *  A string obedece à forma "HH:MM", em que:
 *  - HH é um número de 7 a 22;
 *  - MM é um número igual a 00, 15, 30 ou 45.
 */

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
    /**
     *  Atribui valor à variável "horario".
     *
     *  @param string[in]
     */
 	void setHorario(string) throw (invalid_argument);

    /**
     *  Obtém a hora e minuto.
     *
     *  @return Uma string correspondente à variável "horario".
     */
 	string getHorario() {
 		return horario;
 	}
};

/**
 *  @brief Classe que contém uma data de validade de cartão de crédito.
 *  @author Pedro Carvalho
 *
 *  @section DESCRIÇÃO
 *  Essa classe armazena uma string que representa uma data de validade
 *  pertencente a um cartão de crédito.
 *
 *  @subsection FORMA
 *  A string obedece à forma "MM/AA", em que:
 *  - MM é um número de 1 a 12;
 *  - AA é um número de 00 a 99.
 */

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

    /**
     *  Atribui valor à variável "dataValidade".
     *
     *  @param string[in]
     */
 	void setDataValidade(string) throw (invalid_argument);

    /**
     *  Obtém a data de validade.
     *
     *  @return Uma string correspondente à variável "dataValidade".
     */
 	string getDataValidade() {
 		return dataValidade;
 	}
};

/**
 *  @brief Classe que contém um preço.
 *  @author Pedro Carvalho
 *
 *  @section DESCRIÇÃO
 *  Essa classe armazena uma string que representa o valor de um preço.
 *
 *  @subsection FORMA
 *  A string obedece à forma "X,DD", em que:
 *  - X é um número de 0 a 1000, podendo ter de 1 a 4 algarismos;
 *  - DD é um número de 00 a 99.
 */

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

    /**
     *  Atribui valor à variável "preco".
     *
     *  @param string[in]
     */
 	void setPreco(string) throw (invalid_argument);

    /**
     *  Obtém o preço.
     *
     *  @return Uma string correspondente à variável "preco".
     */
 	string getPreco() {
 		return preco;
 	}
};

/**
 *  @brief Classe que contém um número de cartão de crédito.
 *  @author Pedro Carvalho
 *
 *  @section DESCRIÇÃO
 *  Essa classe armazena uma string que representa o número de um cartão de
 *  crédito.
 *
 *  @subsection FORMA
 *  A string obedece à forma "XXXXXXXXXXXXXXXX" (16 caracteres), em que X é
 *  dígito (0 a 9).
 */

class NumeroCartao {
 private:
 	string numero;

 	static const int TAMANHO_ESPERADO = 16;

 	void validar_entrada(string) throw (invalid_argument);
 	void validar_logica(string) throw (invalid_argument);

 public:

    /**
     *  Atribui valor à variável "numero".
     *
     *  @param string[in]
     */
 	void setNumero(string) throw (invalid_argument);

    /**
     *  Obtém o número do cartão de crédito.
     *
     *  @return Uma string correspondente à variável "numero".
     */
 	string getNumero() {
 		return numero;
 	}
};

/**
 *  @brief Classe que contém um cpf.
 *  @author Pedro Carvalho
 *
 *  @section DESCRIÇÃO
 *  Essa classe armazena uma string que representa um CPF.
 *
 *  @subsection FORMA
 *  A string obedece à forma "XXX.XXX.XXX-XX", em que X é dígito (0 a 9). Os
 *  dígitos devem ser válidos de acordo com o algoritmo de validação de CPF.
 */

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

    /**
     *  Atribui valor à variável "cpf".
     *
     *  @param string[in]
     */
 	void setCPF(string) throw (invalid_argument);

    /**
     *  Obtém o CPF.
     *
     *  @return Uma string correspondente à variável "cpf".
     */
 	string getCPF() {
 		return cpf;
 	}
};

#endif
