#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED

#include "dominios.h"
#include "entidades.h"
#include <list>

using namespace std;

class IAAutenticacao;
class ISAutenticacao;
class IAUsuario;
class ISUsuario;
class IAEventos;
class ISEventos;
class IAVendas;
class ISVendas;

class IAAutenticacao {
public:

    virtual bool executar_autenticacao(CPF&) throw(runtime_error) = 0;
    virtual void setCntrISAutenticacao(ISAutenticacao *) = 0;
    virtual CPF fornecer_cpf() throw(runtime_error) = 0;

    virtual ~IAAutenticacao(){}
};

class ISAutenticacao {
public:

    virtual bool autenticar(Usuario) throw(runtime_error) = 0;

    virtual ~ISAutenticacao(){}
};

class IAUsuario {
public:

    //1 significa deslogar
    virtual bool executar_autenticado(CPF) throw(runtime_error) = 0;
    virtual void executar_novo() throw(runtime_error) = 0;
    virtual void setCntrISUsuario(ISUsuario *) = 0;

    virtual ~IAUsuario(){}
};

class ISUsuario {
public:

    virtual bool cadastrar(Usuario, CartaoCredito) throw(runtime_error) = 0;
    virtual bool excluir(CPF) throw(runtime_error) = 0;
    virtual bool mostrar_dados(Usuario&, CartaoCredito&) throw(runtime_error) = 0;
    virtual bool alterar_cpf(CPF) throw(runtime_error) = 0;
    virtual bool alterar_senha(Senha) throw(runtime_error) = 0;
    virtual bool alterar_cartao(CartaoCredito&) throw(runtime_error) = 0;

    virtual list<Ingresso> obter_ingressos_usuario(CPF) throw(runtime_error) = 0;
    virtual list<Evento> obter_evento_apresentacao(list<Apresentacao>) throw(runtime_error) = 0;
    virtual list<Apresentacao> obter_apresentacoes_ingresso(list<Ingresso>) throw(runtime_error) = 0;
    virtual list<Evento> obter_eventos_criados(CPF) throw(runtime_error) = 0;
    virtual list<Apresentacao> obter_apresentacoes(CodigoEvento) throw(runtime_error) = 0;
    virtual list<CPF> obter_compradores(CodigoApresentacao) throw(runtime_error) = 0;
    virtual bool excluir_evento(CodigoEvento) throw(runtime_error) = 0;
    virtual bool excluir_apresentacao(CodigoApresentacao) throw(runtime_error) = 0;
    virtual Evento mostrar_evento(CodigoEvento) throw(runtime_error) = 0;
    virtual Apresentacao mostrar_apresentacao(CodigoApresentacao) throw(runtime_error) = 0;
    virtual bool alterar_evento(Evento) throw(runtime_error) = 0;
    virtual bool alterar_apresentacao(Apresentacao) throw(runtime_error) = 0;
    virtual bool criar_evento(Evento) throw(runtime_error) = 0;
    virtual bool add_apresentacao(Apresentacao) throw(runtime_error) = 0;
    virtual string gera_codigo_evento() throw(runtime_error) = 0;
    virtual string gera_codigo_apresentacao() throw(runtime_error) = 0;

    virtual ~ISUsuario(){}
};

class IAEventos {
public:

    virtual void executar(CPF, bool) throw(runtime_error) = 0;
    virtual void setCntrIAVendas(IAVendas *) = 0;
    virtual void setCntrISEventos(ISEventos *) = 0;

    virtual ~IAEventos(){}
};

class ISEventos {
public:

    virtual list<Evento> pesquisar_eventos(string, int) throw(runtime_error) = 0;
    virtual list<Evento> pesquisar_todos_eventos() throw(runtime_error) = 0;
    virtual list<Apresentacao> obter_apresentacoes(CodigoEvento) throw(runtime_error) = 0;

    virtual ~ISEventos(){}
};

class IAVendas {
public:

    //Disponibilidade eh a quantidade de ingressos a serem compradas pelo usuario
    virtual void executar(CPF, CodigoEvento, CodigoApresentacao) throw(runtime_error) = 0;

    virtual void setCntrISVendas(ISVendas *) = 0;

    virtual ~IAVendas(){}
};

class ISVendas {
public:


    virtual CartaoCredito obterCartao(CPF) throw(runtime_error) = 0;
    virtual list<Ingresso> atualizar_apresentacao(CodigoEvento, CodigoApresentacao) throw(runtime_error) = 0;
    virtual Apresentacao obterApresentacao(CodigoApresentacao) throw(runtime_error) = 0;
    virtual Evento obterEvento(CodigoEvento) throw(runtime_error) = 0;

    virtual ~ISVendas(){}
};
#endif // INTERFACES_H_INCLUDED
