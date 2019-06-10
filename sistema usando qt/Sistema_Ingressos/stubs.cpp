#include "stubs.h"

bool StubISAutenticacao::autenticar(Usuario usuario) throw(runtime_error) {

    EstruturaUsuario estrutura_usuario;
    usuario.getUsuario(&estrutura_usuario);
    if (estrutura_usuario.cpf == "529.982.247-25" &&
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
