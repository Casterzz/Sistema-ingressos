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
    return false;
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

list<Ingresso> StubISUsuario::obter_ingressos_usuario(CPF) throw(runtime_error) {
    list<Ingresso> lista;
    Ingresso ingresso;
    EstruturaIngresso estrutura_ingresso;
    estrutura_ingresso.codigo = "00111";
    ingresso.setIngresso(estrutura_ingresso);
    lista.push_back(ingresso);
    return lista;
}

list<Apresentacao> StubISUsuario::obter_apresentacoes_ingresso(list<Ingresso>) throw(runtime_error) {
    list<Apresentacao> lista;
    Apresentacao apresentacao;
    EstruturaApresentacao estrutura_apresentacao;
    estrutura_apresentacao.codigo = "1234";
    estrutura_apresentacao.data = "12/05/23";
    estrutura_apresentacao.sala = "2";
    estrutura_apresentacao.preco = "999,99";
    estrutura_apresentacao.horario = "22:30";
    estrutura_apresentacao.disponibilidade = "249";
    apresentacao.setApresentacao(estrutura_apresentacao);
    lista.push_back(apresentacao);
    return lista;
}

list<Evento> StubISUsuario::obter_evento_apresentacao(list<Apresentacao>) throw(runtime_error) {
    list<Evento> lista;
    Evento evento;
    EstruturaEvento estrutura_evento;
    estrutura_evento.codigo = "777";
    estrutura_evento.nome = "Vingadores Ultraball";
    estrutura_evento.faixa = "18";
    estrutura_evento.cidade = "Aguas Claras 23";
    estrutura_evento.classe = "2";
    estrutura_evento.estado = "DF";
    evento.setEvento(estrutura_evento);
    lista.push_back(evento);
    return lista;
}

list<Evento> StubISUsuario::obter_eventos_criados(CPF) throw(runtime_error) {
    list<Evento> lista;
    Evento evento;
    EstruturaEvento estrutura_evento;
    estrutura_evento.codigo = "777";
    estrutura_evento.nome = "Vingadores Ultraball";
    estrutura_evento.faixa = "18";
    estrutura_evento.cidade = "Aguas Claras 23";
    estrutura_evento.classe = "2";
    estrutura_evento.estado = "DF";
    evento.setEvento(estrutura_evento);
    lista.push_back(evento);
    return lista;
}

list<Apresentacao> StubISUsuario::obter_apresentacoes(CodigoEvento) throw(runtime_error) {
    list<Apresentacao> lista;
    Apresentacao apresentacao;
    EstruturaApresentacao estrutura_apresentacao;
    estrutura_apresentacao.codigo = "1234";
    estrutura_apresentacao.data = "12/05/23";
    estrutura_apresentacao.sala = "2";
    estrutura_apresentacao.preco = "999,99";
    estrutura_apresentacao.horario = "22:30";
    estrutura_apresentacao.disponibilidade = "249";
    apresentacao.setApresentacao(estrutura_apresentacao);
    lista.push_back(apresentacao);
    return lista;
}

list<CPF> StubISUsuario::obter_compradores(CodigoApresentacao) throw(runtime_error) {
    list<CPF> lista;
    CPF cpf;
    cpf.setCPF("529.982.247-25");
    lista.push_back(cpf);
    return lista;
}

bool StubISUsuario::excluir_evento(CodigoEvento) throw(runtime_error) {
    return false;
}

Evento StubISUsuario::mostrar_evento(CodigoEvento) throw(runtime_error) {
    Evento evento;
    EstruturaEvento estrutura_evento;
    estrutura_evento.codigo = "777";
    estrutura_evento.nome = "Vingadores Ultraball";
    estrutura_evento.faixa = "18";
    estrutura_evento.cidade = "Aguas Claras 23";
    estrutura_evento.classe = "2";
    estrutura_evento.estado = "DF";
    evento.setEvento(estrutura_evento);
    return evento;
}

Apresentacao StubISUsuario::mostrar_apresentacao(CodigoApresentacao) throw(runtime_error) {
    Apresentacao apresentacao;
    EstruturaApresentacao estrutura_apresentacao;
    estrutura_apresentacao.codigo = "1234";
    estrutura_apresentacao.data = "12/05/23";
    estrutura_apresentacao.sala = "2";
    estrutura_apresentacao.preco = "999,99";
    estrutura_apresentacao.horario = "22:30";
    estrutura_apresentacao.disponibilidade = "249";
    apresentacao.setApresentacao(estrutura_apresentacao);
    return apresentacao;
}

bool StubISUsuario::alterar_evento(Evento) throw(runtime_error) {
    return false;
}

bool StubISUsuario::alterar_apresentacao(Apresentacao) throw(runtime_error) {
    return false;
}

bool StubISUsuario::excluir_apresentacao(CodigoApresentacao codigo) throw(runtime_error) {
    return false;
}

bool StubISUsuario::criar_evento(Evento) throw(runtime_error) {
    return true;
}

bool StubISUsuario::add_apresentacao(Apresentacao) throw(runtime_error) {
    return true;
}

string StubISUsuario::gera_codigo_evento() throw(runtime_error) {
    return "777";
}

string StubISUsuario::gera_codigo_apresentacao() throw(runtime_error) {
    return "1234";
}

//------------------------------

list<Evento> StubISEventos::pesquisar_todos_eventos() throw(runtime_error) {
    list<Evento> lista;
    Evento evento;
    EstruturaEvento estrutura_evento;
    estrutura_evento.codigo = "777";
    estrutura_evento.nome = "Vingadores Ultraball";
    estrutura_evento.faixa = "18";
    estrutura_evento.cidade = "Aguas Claras 23";
    estrutura_evento.classe = "2";
    estrutura_evento.estado = "DF";
    evento.setEvento(estrutura_evento);
    lista.push_back(evento);
    return lista;
}

list<Evento> StubISEventos::pesquisar_eventos(string pesquisa, int tipo) throw(runtime_error) {
    list<Evento> lista;
    Evento evento;
    EstruturaEvento estrutura_evento;
    estrutura_evento.codigo = "777";
    estrutura_evento.nome = "Vingadores Ultraball";
    estrutura_evento.faixa = "18";
    estrutura_evento.cidade = "Aguas Claras 23";
    estrutura_evento.classe = "2";
    estrutura_evento.estado = "DF";
    evento.setEvento(estrutura_evento);
    switch (tipo) {
    case 1: if (pesquisa != estrutura_evento.nome) break; else lista.push_back(evento); break;
    case 2: if (pesquisa != estrutura_evento.classe) break; else lista.push_back(evento); break;
    case 3: if (pesquisa != estrutura_evento.faixa) break; else lista.push_back(evento); break;
    case 4: if (pesquisa != estrutura_evento.estado) break; else lista.push_back(evento); break;
    default: break;
    }
    return lista;
}

list<Apresentacao> StubISEventos::obter_apresentacoes(CodigoEvento) throw(runtime_error) {
    list<Apresentacao> lista;
    Apresentacao apresentacao;
    EstruturaApresentacao estrutura_apresentacao;
    estrutura_apresentacao.codigo = "1234";
    estrutura_apresentacao.data = "12/05/23";
    estrutura_apresentacao.sala = "2";
    estrutura_apresentacao.preco = "999,99";
    estrutura_apresentacao.horario = "22:30";
    estrutura_apresentacao.disponibilidade = "249";
    apresentacao.setApresentacao(estrutura_apresentacao);
    lista.push_back(apresentacao);
    return lista;
}

//------------------------------------

CartaoCredito StubISVendas::obterCartao(CPF) throw(runtime_error) {
    CartaoCredito cartao;
    EstruturaUsuario estrutura_usuario;
    EstruturaCartaoCredito estrutura_cartao;
    cartao.getCartaoCredito(&estrutura_cartao);
    estrutura_cartao.numero = "4556830088565320";
    estrutura_cartao.codigo = "020";
    estrutura_cartao.data = "04/19";
    cartao.setCartaoCredito(estrutura_cartao);
    return cartao;
}

list<Ingresso> StubISVendas:: atualizar_apresentacao(CodigoEvento, CodigoApresentacao) throw(runtime_error) {
    list<Ingresso> lista;
    Ingresso ingresso;
    EstruturaIngresso estrutura_ingressos;
    ingresso.getIngresso(&estrutura_ingressos);
    estrutura_ingressos.codigo = "12345";
    ingresso.setIngresso(estrutura_ingressos);
    lista.push_back(ingresso);
    return lista;
}

Apresentacao StubISVendas::obterApresentacao(CodigoApresentacao) throw(runtime_error) {
    Apresentacao apresentacao;
    EstruturaApresentacao estrutura_apresentacao;
    estrutura_apresentacao.codigo = "1234";
    estrutura_apresentacao.data = "12/05/23";
    estrutura_apresentacao.sala = "2";
    estrutura_apresentacao.preco = "999,99";
    estrutura_apresentacao.horario = "22:30";
    estrutura_apresentacao.disponibilidade = "249";
    apresentacao.setApresentacao(estrutura_apresentacao);
    return apresentacao;
}

Evento StubISVendas::obterEvento(CodigoEvento) throw(runtime_error) {
    Evento evento;
    EstruturaEvento estrutura_evento;
    estrutura_evento.codigo = "777";
    estrutura_evento.nome = "Vingadores Ultraball";
    estrutura_evento.faixa = "18";
    estrutura_evento.cidade = "Aguas Claras 23";
    estrutura_evento.classe = "2";
    estrutura_evento.estado = "DF";
    evento.setEvento(estrutura_evento);
    return evento;
}


