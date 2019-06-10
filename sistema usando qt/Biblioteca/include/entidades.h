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

using namespace std;

/**
 *  @brief Estrutura que contém atributos da entidade Usuario.
 *  @author Pedro Carvalho
 *  @author Victor Castor
 *
 *  @section DESCRIÇÃO
 *  Essa estrutura armazena os atributos "cpf" e "senha".
 *
 *  @subsection FORMA
 *  Os atributos são strings.
 */

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

/**
 *  @brief Estrutura que contém atributos da entidade Apresentacao
 *  @author Victor Castor
 *
 *  @section DESCRIÇÃO
 *  Essa estrutura armazena os atributos "codigo", "data", "horario", "preco", "sala" e "disponibilidade".
 *
 *  @subsection FORMA
 *  Os atributos são strings.
 */

typedef struct Estrutura_Apresentacao {
    string codigo;
    string data;
    string horario;
    string preco;
    string sala;
    string disponibilidade;
}EstruturaApresentacao;

/**
 *  @brief Classe que representa uma apresentação.
 *  @author Victor Castor
 *
 *  @section DESCRIÇÃO
 *  Essa classe armazena os atributos "codigo", "data", "horario", "preco", "sala" e "disponibilidade".
 *
 *  @subsection FORMA
 *  Os atributos são objetos da biblioteca de domínios:
 *  - "codigo" é um objeto da classe CodigoApresentacao.
 *  - "data" é um objeto da classe Data.
 *  - "horario" é um objeto da classe Horario.
 *  - "preco" é um objeto da classe Preco.
 *  - "sala" é um objeto da classe NumeroSala.
 *  - "disponibilidade" é um objeto da classe Disponibilidade.
 */

class Apresentacao {

 private:
    CodigoApresentacao codigo;
    Data data;
    Horario horario;
    Preco preco;
    NumeroSala sala;
    Disponibilidade disponibilidade;

 public:
    /**
     *  Atribui valor aos atributos "codigo", "data", "horario", "preco", "sala" e "disponibilidade".
     *
     *  @param apresentacao[in] É uma instância da estrutura "EstruturaApresentacao" na qual
     *  há valores para serem colocados nos membros do objeto dessa classe.
     */
    void setApresentacao(EstruturaApresentacao apresentacao) throw (invalid_argument) {
        this->codigo.setCodigo(apresentacao.codigo);
        this->data.setData(apresentacao.data);
        this->horario.setHorario(apresentacao.horario);
        this->preco.setPreco(apresentacao.preco);
        this->sala.setSala(apresentacao.sala);
        this->disponibilidade.setDisponibilidade(apresentacao.disponibilidade);
        return;
    }

    /**
     *  Obtém os dados da apresentação.
     *
     *  @param apresentacao[in,out] é um ponteiro para uma instância da estrutura
     *  "EstruturaApresentacao" na qual os valores do objeto dessa classe serão
     *  escritos.
     */
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

/**
 *  @brief Estrutura que contém atributos da entidade Evento
 *  @author Pedro Victor
 *
 *  @section DESCRIÇÃO
 *  Essa estrutura armazena os atributos "codigo", "nome", "cidade", "estado",
 *  "classe" e "faixa".
 *
 *  @subsection FORMA
 *  Os atributos são strings.
 */

typedef struct Estrutura_Evento {
    string codigo;
    string nome;
    string cidade;
    string estado;
    string classe;
    string faixa;
}EstruturaEvento;

/**
 *  @brief Classe que representa um evento.
 *  @author Pedro Carvalho
 *
 *  @section DESCRIÇÃO
 *  Essa classe armazena os atributos "codigo", "nome", "cidade", "estado",
 *  "classe" e "faixa".
 *
 *  @subsection FORMA
 *  Os atributos são objetos da biblioteca de domínios:
 *  - "codigo" é um objeto da classe CodigoEvento.
 *  - "nome" é um objeto da classe NomeEvento.
 *  - "cidade" é um objeto da classe Cidade.
 *  - "estado" é um objeto da classe Estado.
 *  - "classe" é um objeto da classe ClasseEvento.
 *  - "faixa" é um objeto da classe FaixaEtaria.
 */

class Evento {
 private:
    CodigoEvento codigo;
    NomeEvento nome;
    Cidade cidade;
    Estado estado;
    ClasseEvento classe;
    FaixaEtaria faixa;

 public:

    /**
     *  Atribui valor aos atributos "codigo", "nome", "cidade", "estado",
     *  "classe" e "faixa".
     *
     *  @param evento[in] É uma instância da estrutura "EstruturaEvento" na qual
     *  há valores para serem colocados nos membros do objeto dessa classe.
     */
    void setEvento(EstruturaEvento evento) throw (invalid_argument) {
        this->codigo.setCodigo(evento.codigo);
        this->nome.setNome(evento.nome);
        this->cidade.setCidade(evento.cidade);
        this->estado.setEstado(evento.estado);
        this->classe.setClasseEvento(evento.classe);
        this->faixa.setFaixa(evento.faixa);
        return;
    }

    /**
     *  Obtém os dados do evento.
     *
     *  @param evento[in,out] é um ponteiro para uma instância da estrutura
     *  "EstruturaEvento" na qual os valores do objeto dessa classe serão
     *  escritos.
     */

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

/**
 *  @brief Estrutura que contém atributos da entidade Ingresso
 *  @author Victor Castor
 *
 *  @section DESCRIÇÃO
 *  Essa estrutura armazena o atributo "codigo".
 *
 *  @subsection FORMA
 *  O atributo é uma string.
 */

typedef struct Estrutura_Ingresso {
    string codigo;
}EstruturaIngresso;

/**
 *  @brief Classe que representa um ingresso.
 *  @author Victor Castor
 *
 *  @section DESCRIÇÃO
 *  Essa classe armazena o atributo "codigo".
 *
 *  @subsection FORMA
 *  O atributo é um objeto da biblioteca de domínios:
 *  - "codigo" é um objeto da classe CodigoIngresso.
 */

class Ingresso {

 private:
    CodigoIngresso codigo;

 public:
    /**
     *  Atribui valor ao atributo "codigo"
     *
     *  @param codigo[in] É uma instância da estrutura "EstruturaIngresso" na qual
     *  há valor para ser colocado no membro do objeto dessa classe.
     */
    void setIngresso(EstruturaIngresso ingresso) throw (invalid_argument) {
        this->codigo.setCodigo(ingresso.codigo);
        return;
    }

    /**
     *  Obtém o dado do Ingresso.
     *
     *  @param ingresso[in,out] é um ponteiro para uma instância da estrutura
     *  "EstruturaIngresso" na qual o valor do objeto dessa classe é
     *  escrito.
     */
    void getIngresso(EstruturaIngresso *ingresso) {
        ingresso->codigo = this->codigo.getCodigo();
        return;
    }
};

// ----------------------------------------------------------------------------

/**
 *  @brief Estrutura que contém atributos da entidade CartaoCredito
 *  @author Pedro Victor
 *
 *  @section DESCRIÇÃO
 *  Essa estrutura armazena os atributos "numero", "codigo" e "data".
 *
 *  @subsection FORMA
 *  Os atributos são strings.
 */

typedef struct Estrutura_Cartao_Credito {
    string numero;
    string codigo;
    string data;
}EstruturaCartaoCredito;

/**
 *  @brief Classe que representa um cartão de crédito.
 *  @author Pedro Carvalho
 *
 *  @section DESCRIÇÃO
 *  Essa classe armazena os atributos "numero", "codigo" e "data".
 *
 *  @subsection FORMA
 *  Os atributos são objetos da biblioteca de domínios:
 *  - "numero" é um objeto da classe NumeroCartao.
 *  - "codigo" é um objeto da classe CodigoSeguranca.
 *  - "data" é um objeto da classe DataValidade.
 */

class CartaoCredito {
 private:
    NumeroCartao numero;
    CodigoSeguranca codigo;
    DataValidade data;

 public:

    /**
     *  Atribui valor aos atributos "numero", "codigo" e "data".
     *
     *  @param cartao[in] É uma instância da estrutura "EstruturaCartaoCredito"
     *  na qual há valores para serem colocados nos membros do objeto dessa
     *  classe.
     */

    void setCartaoCredito(EstruturaCartaoCredito cartao) throw (invalid_argument) {
        this->numero.setNumero(cartao.numero);
        this->codigo.setCodigo(cartao.codigo);
        this->data.setDataValidade(cartao.data);
        return;
    }

    /**
     *  Obtém os dados do cartão de crédito.
     *
     *  @param cartao[in,out] é um ponteiro para uma instância da estrutura
     *  "EstruturaCartaoCredito" na qual os valores do objeto dessa classe serão
     *  escritos.
     */

    void getCartaoCredito(EstruturaCartaoCredito *cartao) {
        cartao->numero = this->numero.getNumero();
        cartao->codigo = this->codigo.getCodigo();
        cartao->data = this->data.getDataValidade();
        return;
    }
};

#endif
