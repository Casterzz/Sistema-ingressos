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
};

#endif // STUBS_H
