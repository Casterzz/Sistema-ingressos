/**
 *  @file entidades.h
 *  @author Pedro Carvalho
 *  @author Victor Castor
 *  @version 1.0
 *
 *  @section DESCRIÇÃO
 *
 *  Este arquivo é parte de uma biblioteca de classes desenvolvida para um
 *  trabalho universitário e contém as declarações de classes de entidade.
 *
 *  Universidade de Brasília (UnB)
 *
 *  @subsection Período de Desenvolvimento
 *
 *  Primeiro semestre de 2019
 */

#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"
//#include <string>

using namespace std;

/**
 *  @brief Classe que representa um usuário.
 *  @author Pedro Carvalho
 *  @author Victor Castor
 *
 *  @section DESCRIÇÃO
 *  Essa classe armazena os atributos "cpf" e "senha".
 *
 *  @subsection FORMA
 *  Os atributos são objetos da biblioteca de domínios:
 *  -"cpf" é um objeto da classe CPF;
 *  -"senha" é um objeto da classe Senha.
 */

class Usuario {

 private:
 	CPF cpf;
 	Senha senha;

 public:
    /**
     *  Atribui valor aos atributos "cpf" e "senha".
     *
     *  @param cpf_in[in] String contendo o CPF a ser atribuido.
     *  @param senha_in[in] String contendo a senha a ser atribuida.
     */
 	void setUsuario(string cpf_in, string senha_in) throw (invalid_argument) {
 		this->cpf.setCPF(cpf_in);
 		this->senha.setSenha(senha_in);
 	}

    /**
     *  Obtém os dados do usuário.
     *
     *  @param cpf_out[in,out] É um ponteiro para um objeto da classe CPF no qual se
     *  armazenará o cpf do usuário.
     *  @param senha_out[in,out] É um ponteiro para um objeto da classe Senha no qual se
     *  armazenará a senha do usuário.
     */
 	void getUsuario(CPF *cpf_out, Senha *senha_out) {
 		cpf_out->setCPF(this->cpf.getCPF());
 		senha_out->setSenha(this->senha.getSenha());
 		return;
 	}
};

typedef struct Estrutura_Apresentacao {
    string codigo;
    string data;
    string horario;
    string preco;
    string sala;
    string disponibilidade;
}EstruturaApresentacao;


class Apresentacao {

 private:
    CodigoApresentacao codigo;
    Data data;
    Horario horario;
    Preco preco;
    NumeroSala sala;
    Disponibilidade disponibilidade;

 public:
    
    void setApresentacao(EstruturaApresentacao apresentacao) throw (invalid_argument) {
        this->codigo.setCodigo(apresentacao.codigo);
        this->data.setData(apresentacao.data);
        this->horario.setHorario(apresentacao.horario);
        this->preco.setPreco(apresentacao.preco);
        this->sala.setSala(apresentacao.sala);
        this->disponibilidade.setDisponibilidade(apresentacao.disponibilidade);
    }

    void getApresentacao(EstruturaApresentacao *apresentacao) {
        apresentacao->codigo = this->codigo.getCodigo();
        apresentacao->data = this->data.getData();
        apresentacao->horario = this->horario.getHorario();
        apresentacao->preco = this->preco.getPreco();
        apresentacao->sala = this->sala.getSala();
        apresentacao->disponibilidade = this->disponibilidade.getDisponibilidade();
        return;
    }
};

#endif
