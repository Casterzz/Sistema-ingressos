#ifndef STUBS_H
#define STUBS_H

#include "interfaces.h"
#include "entidades.h"
#include <QObject>

class StubISAutenticacao:public QObject, public ISAutenticacao{

    Q_OBJECT

public:
    bool autenticar(Usuario) throw(runtime_error);
};

class StubISUsuario:public QObject, public ISUsuario{

    Q_OBJECT

public:
    bool cadastrar(Usuario, CartaoCredito) throw(runtime_error);
    bool excluir(CPF) throw(runtime_error);
    bool mostrar_dados(Usuario&, CartaoCredito&) throw(runtime_error);
    bool alterar_cpf(CPF) throw(runtime_error);
    bool alterar_senha(Senha) throw(runtime_error);
    bool alterar_cartao(CartaoCredito&) throw(runtime_error);
    list<Ingresso> obter_ingressos_usuario(CPF) throw(runtime_error);
    list<Evento> obter_evento_apresentacao(list<Apresentacao>) throw(runtime_error);
    list<Apresentacao> obter_apresentacoes_ingresso(list<Ingresso>) throw(runtime_error);
    list<Evento> obter_eventos_criados(CPF) throw(runtime_error);
    list<Apresentacao> obter_apresentacoes(CodigoEvento) throw(runtime_error);
    list<CPF> obter_compradores(CodigoApresentacao) throw(runtime_error);
    bool excluir_evento(CodigoEvento) throw(runtime_error);
    bool excluir_apresentacao(CodigoApresentacao) throw(runtime_error);
    Evento mostrar_evento(CodigoEvento) throw(runtime_error);
    Apresentacao mostrar_apresentacao(CodigoApresentacao) throw(runtime_error);
    bool alterar_evento(Evento) throw(runtime_error);
    bool alterar_apresentacao(Apresentacao) throw(runtime_error);
    bool criar_evento(Evento) throw(runtime_error);
    bool add_apresentacao(Apresentacao) throw(runtime_error);
    string gera_codigo_evento() throw(runtime_error);
    string gera_codigo_apresentacao() throw(runtime_error);
};

class StubISEventos:public QObject, public ISEventos{

    Q_OBJECT

public:
    list<Evento> pesquisar_todos_eventos() throw(runtime_error);
    list<Evento> pesquisar_eventos(string, int) throw(runtime_error);
    list<Apresentacao> obter_apresentacoes(CodigoEvento) throw(runtime_error);
};

class StubISVendas:public QObject, public ISVendas{

    Q_OBJECT

public:
    CartaoCredito obterCartao(CPF) throw(runtime_error);
    list<Ingresso> atualizar_apresentacao(CodigoEvento, CodigoApresentacao) throw(runtime_error);
    Apresentacao obterApresentacao(CodigoApresentacao) throw(runtime_error);
    Evento obterEvento(CodigoEvento) throw(runtime_error);
};

#endif // STUBS_H
