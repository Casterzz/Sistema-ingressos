#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED

#include "dominios.h"
#include "entidades.h"

using namespace std;

class IAAutenticacao;
class ISAutenticacao;
class IAUsuario;
class ISUsuario;
class IAEventos;
class ISEventos;
class IAVendas;
class ISVendas;

class IUAutenticacao {
public:

    virtual bool autenticar(&CPF) throw(runtime_error) = 0;

    virtual void setCntrIAAutenticacao(IAAutenticacao *) = 0;

    //virtual ~IAAutenticacao(){}
};

class ISAutenticacao {
public:

    virtual bool autenticar(Usuario) throw(runtime_error) = 0;

    virtual void setCntrISAutenticacao(ISAutenticacao *) = 0;

    //virtual ~ISAutenticacao(){}
};

class IAUsuario {
public:

    virtual void executar_autenticado(CPF) throw(runtime_error) = 0;
    virtual void executar_novo() throw(runtime_error) = 0;

    virtual void setCntrIAUsuario(IAUsuario *) = 0;

    //virtual ~IAUsuario(){}
};

class ISUsuario {
public:

    virtual bool cadastrar(Usuario, CartaoCredito) throw(runtime_error) = 0;
    virtual bool excluir(CPF) throw(runtime_error) = 0; //fazer deslogar
    virtual bool mostrar_dados(&Usuario, &CartaoCredito) throw(runtime_error) = 0;
    virtual bool alterar_cpf(&CPF) throw(runtime_error) = 0;
    virtual bool alterar_senha(&Senha) throw(runtime_error) = 0;
    virtual bool alterar_cartao(&CartaoCredito) throw(runtime_error) = 0;
    virtual lista_ingresso *obter_ingressos(CPF) throw(runtime_error) = 0;
    virtual lista_evento *obter_eventos(CPF) throw(runtime_error) = 0;
    virtual lista_apresentacao *obter_apresentacoes(CodigoEvento) throw(runtime_error) = 0;
    virtual lista_cpf *obter_compradores(CodigoEvento, CodigoApresentacao) throw(runtime_error) = 0;
    virtual bool atualizar_evento(Evento, lista_apresentacao *) throw(runtime_error) = 0;
    virtual bool excluir_evento(CodigoEvento) throw(runtime_error) = 0;
    virtual bool criar_evento(Evento, lista_apresentacao *) throw(runtime_error) = 0;

    virtual void setCntrISUsuario(ISUsuario *) = 0;

    //virtual ~ISUsuario(){}
};

class IAEventos {
public:

    virtual void executar_autenticado(CPF) throw(runtime_error) = 0;
    virtual void executar_novo() throw(runtime_error) = 0;

    virtual void setCntrIAEventos(IAEventos *) = 0;

    //virtual ~IAEventos(){}
};

class ISEventos {
public:

    virtual lista_evento *pesquisar_nome(Nome) throw(runtime_error) = 0;
    virtual lista_evento *pesquisar_ciade(Cidade) throw(runtime_error) = 0;
    virtual lista_evento *pesquisar_estado(Estado) throw(runtime_error) = 0;
    virtual lista_evento *pesquisar_data(Data) throw(runtime_error) = 0;
    virtual lista_apresentacao *mostrar_dados(CodigoEvento) throw(runtime_error) = 0;
    virtual lista_evento *mostrar_disponiveis() throw(runtime_error) = 0;

    virtual void setCntrISEventos(ISEventos *) = 0;

    //virtual ~ISEventos(){}
};

class IAVendas {
public:

    virtual void executar(CPF, Evento, Apresentacao, qtd_ingressos) throw(runtime_error) = 0;

    virtual void setCntrIAVendas(ISEventos *) = 0;

    //virtual ~IAVendas(){}
};

class ISVendas {
public:

    virtual CartaoCredito obter_cartao(CPF) throw(runtime_error) = 0;
    virtual lista_ingresso *atualizar_apresentacao(CodigoEvento, CodigoApresentacao) throw(runtime_error) = 0;

    virtual void setCntrISVendas(ISEventos *) = 0;

    //virtual ~ISVendas(){}
};
#endif // INTERFACES_H_INCLUDED
