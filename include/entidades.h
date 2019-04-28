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

typedef struct Estrutura_Usuario {
    string cpf;
    string senha;
}EstruturaUsuario;

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
     *  @param usuario[in] É uma instância da estrutura "EstruturaUsuario" na qual
     *  há valores para serem colocados nos membros do objeto dessa classe.
     */
 	void setUsuario(EstruturaUsuario usuario) throw (invalid_argument) {
 		this->cpf.setCPF(usuario.cpf);
 		this->senha.setSenha(usuario.senha);
 	}

    /**
     *  Obtém os dados do usuário.
     *
     *  @param usuario[in,out] é um ponteiro para uma instância da estrutura
     *  "EstruturaUsuario" na qual os valores do objeto dessa classe serão
     *  escritos.
     */
 	void getUsuario(EstruturaUsuario *usuario) {
 		usuario->cpf = this->cpf.getCPF();
 		usuario->senha = this->senha.getSenha();
 		return;
 	}
};

// ----------------------------------------------------------------------------

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
        return;
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

// ----------------------------------------------------------------------------

typedef struct Estrutura_Evento {
    string codigo;
    string nome;
    string cidade;
    string estado;
    string classe;
    string faixa;
}EstruturaEvento;

class Evento {
 private:
    CodigoEvento codigo;
    NomeEvento nome;
    Cidade cidade;
    Estado estado;
    ClasseEvento classe;
    FaixaEtaria faixa;

 public:

    void setEvento(EstruturaEvento evento) throw (invalid_argument) {
        this->codigo.setCodigo(evento.codigo);
        this->nome.setNome(evento.nome);
        this->cidade.setCidade(evento.cidade);
        this->estado.setEstado(evento.estado);
        this->classe.setClasseEvento(evento.classe);
        this->faixa.setFaixa(evento.faixa);
        return;
    }

    void getEvento(EstruturaEvento *evento) {
        evento->codigo = this->codigo.getCodigo();
        evento->nome = this->nome.getNome();
        evento->cidade = this->cidade.getCidade();
        evento->estado = this->estado.getEstado();
        evento->classe = this->classe.getClasseEvento();
        evento->faixa = this->faixa.getFaixa();
        return;
    }
};

// ----------------------------------------------------------------------------

typedef struct Estrutura_Cartao_Credito {
    string numero;
    string codigo;
    string data;
}EstruturaCartaoCredito;

class CartaoCredito {
 private:
    NumeroCartao numero;
    CodigoSeguranca codigo;
    DataValidade data;

 public:

    void setCartaoCredito(EstruturaCartaoCredito cartao) throw (invalid_argument) {
        this->numero.setNumero(cartao.numero);
        this->codigo.setCodigo(cartao.codigo);
        this->data.setDataValidade(cartao.data);
        return;
    }

    void getCartaoCredito(EstruturaCartaoCredito *cartao) {
        cartao->numero = this->numero.getNumero();
        cartao->codigo = this->codigo.getCodigo();
        cartao->data = this->data.getDataValidade();
        return;
    }
};

#endif
