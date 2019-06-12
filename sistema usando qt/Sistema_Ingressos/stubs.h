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
};

#endif // STUBS_H
