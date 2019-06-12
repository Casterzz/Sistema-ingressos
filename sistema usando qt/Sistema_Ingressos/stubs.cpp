#include "stubs.h"

bool StubISAutenticacao::autenticar(Usuario usuario) throw(runtime_error) {

    EstruturaUsuario estrutura_usuario;
    usuario.getUsuario(&estrutura_usuario);
    if ((estrutura_usuario.cpf == "529.982.247-25" ||
         estrutura_usuario.cpf == "048.332.571-65" ||
         estrutura_usuario.cpf == "030.583.421-52") &&
        estrutura_usuario.senha == "Oi3ule") {
        return true;
    } else {
        return false;
    }
}

bool StubISUsuario::cadastrar(Usuario usuario, CartaoCredito cartao) throw(runtime_error) {

    EstruturaUsuario estrutura_usuario;
    EstruturaCartaoCredito estrutura_cartao;
    usuario.getUsuario(&estrutura_usuario);
    cartao.getCartaoCredito(&estrutura_cartao);
    if (estrutura_usuario.cpf == "529.982.247-25" &&
        estrutura_usuario.senha == "Oi3ule" &&
        estrutura_cartao.numero == "4556830088565320" &&
        estrutura_cartao.codigo == "020" &&
        estrutura_cartao.data == "04/19") {
        return true;
    } else {
        return false;
    }
}

bool StubISUsuario::excluir(CPF cpf) throw(runtime_error){
    return true;
}

bool StubISUsuario::mostrar_dados(Usuario &usuario, CartaoCredito &cartao) throw(runtime_error) {

    EstruturaUsuario estruturaUsuario;
    EstruturaCartaoCredito estruturaCartao;
    estruturaUsuario.cpf = "529.982.247-25";
    estruturaUsuario.senha = "Oi3ule";
    estruturaCartao.numero = "4556830088565320";
    estruturaCartao.codigo = "020";
    estruturaCartao.data = "04/19";
    usuario.setUsuario(estruturaUsuario);
    cartao.setCartaoCredito(estruturaCartao);

    return true;
}

bool StubISUsuario::alterar_cpf(CPF) throw(runtime_error){
    return true;
}

bool StubISUsuario::alterar_senha(Senha) throw(runtime_error){
    return true;
}

bool StubISUsuario::alterar_cartao(CartaoCredito&) throw(runtime_error){
    return true;
}
