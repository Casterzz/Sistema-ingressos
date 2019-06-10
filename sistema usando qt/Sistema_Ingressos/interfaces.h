#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED

#include "dominios.h"
#include "entidades.h"
//#include "containers.h"
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

    virtual ~IAAutenticacao(){}
};

class ISAutenticacao {
public:

    virtual bool autenticar(Usuario) throw(runtime_error) = 0;

    //virtual void setCntrISAutenticacao(ISAutenticacao *) = 0;

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
/*
    virtual bool excluir(CPF) throw(runtime_error) = 0; //fazer deslogar
    virtual bool mostrar_dados(Usuario&, CartaoCredito&) throw(runtime_error) = 0;
    virtual bool alterar_cpf(CPF) throw(runtime_error) = 0;
    virtual bool alterar_senha(Senha&) throw(runtime_error) = 0;
    virtual bool alterar_cartao(CartaoCredito&) throw(runtime_error) = 0;
    virtual list<Ingresso> obter_ingressos(CPF) throw(runtime_error) = 0;
    virtual list<Evento> obter_eventos(CPF) throw(runtime_error) = 0;
    virtual list<Apresentacao> obter_apresentacoes(CodigoEvento) throw(runtime_error) = 0;
    virtual list<CPF> obter_compradores(CodigoEvento, CodigoApresentacao) throw(runtime_error) = 0;
    virtual bool atualizar_evento(Evento, list<Apresentacao>) throw(runtime_error) = 0;
    virtual bool excluir_evento(CodigoEvento) throw(runtime_error) = 0;
    virtual bool criar_evento(Evento, list<Apresentacao>) throw(runtime_error) = 0;
*/
    //virtual void setCntrISUsuario(ISUsuario *) = 0;

    virtual ~ISUsuario(){}
};

class IAEventos {
public:

    virtual void executar_autenticado(CPF) throw(runtime_error) = 0;
    virtual void executar_novo() throw(runtime_error) = 0;

    virtual void setCntrISEventos(IAEventos *) = 0;

    virtual ~IAEventos(){}
};

class ISEventos {
public:

    virtual list<Evento> pesquisar_nome(NomeEvento) throw(runtime_error) = 0;
    virtual list<Evento> pesquisar_ciade(Cidade) throw(runtime_error) = 0;
    virtual list<Evento> pesquisar_estado(Estado) throw(runtime_error) = 0;
    virtual list<Evento> pesquisar_data(Data) throw(runtime_error) = 0;
    virtual list<Apresentacao> mostrar_dados(CodigoEvento) throw(runtime_error) = 0;
    virtual list<Evento> mostrar_disponiveis() throw(runtime_error) = 0;

    //virtual void setCntrISEventos(ISEventos *) = 0;

    //virtual ~ISEventos(){}
};

class IAVendas {
public:

    //Disponibilidade eh a quantidade de ingressos a serem compradas pelo usuario
    virtual void executar(CPF, Evento, Apresentacao, Disponibilidade) throw(runtime_error) = 0;

    virtual void setCntrISVendas(ISEventos *) = 0;

    virtual ~IAVendas(){}
};

class ISVendas {
public:

    virtual CartaoCredito obter_cartao(CPF) throw(runtime_error) = 0;
    virtual list<Ingresso> atualizar_apresentacao(CodigoEvento, CodigoApresentacao) throw(runtime_error) = 0;

    //virtual void setCntrISVendas(ISEventos *) = 0;

    virtual ~ISVendas(){}
};
#endif // INTERFACES_H_INCLUDED
