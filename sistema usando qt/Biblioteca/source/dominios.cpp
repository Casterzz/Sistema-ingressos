/**
 *  @file dominios.cpp
 *  @author Pedro Carvalho
 *  @author Victor Castor
 *  @version 1.0
 *
 *  @section DESCRIÇÃO
 *
 *  Este arquivo é parte de uma biblioteca de classes desenvolvida para um
 *  trabalho universitário e contém as implementações dos métodos das classes
 *  de domínio.
 *
 *  Universidade de Brasília (UnB)
 *
 *  @subsection Período de Desenvolvimento
 *
 *  Primeiro semestre de 2019
 */

#include "dominios.h"

const string CodigoEvento::LIMITE_SUPERIOR = "999";
const string CodigoEvento::LIMITE_INFERIOR = "000";

void CodigoEvento::validar(string codigo) throw (invalid_argument) {

    if (LIMITE_INFERIOR.compare(codigo) > 0 || LIMITE_SUPERIOR.compare(codigo) < 0 ||
        codigo.length() != LIMITE_INFERIOR.length()) {
        throw invalid_argument("Argumento invalido");
    }
}

void CodigoEvento::setCodigo(string codigo) throw (invalid_argument) {
    validar(codigo);
    this->codigo = codigo;
}

// -----------------------------------------------------------------------------

const string CodigoApresentacao::LIMITE_SUPERIOR = "9999";
const string CodigoApresentacao::LIMITE_INFERIOR = "0000";

void CodigoApresentacao::validar(string codigo) throw (invalid_argument) {

    if (LIMITE_INFERIOR.compare(codigo) > 0 || LIMITE_SUPERIOR.compare(codigo) < 0 ||
        codigo.length() != LIMITE_INFERIOR.length()) {
        throw invalid_argument("Argumento invalido");
    }
}

void CodigoApresentacao::setCodigo(string codigo) throw (invalid_argument) {
    validar(codigo);
    this->codigo = codigo;
}

// ------------------------------------------------------------------------

const string CodigoIngresso::LIMITE_SUPERIOR = "99999";
const string CodigoIngresso::LIMITE_INFERIOR = "00000";

void CodigoIngresso::validar(string codigo) throw (invalid_argument) {

    if (LIMITE_INFERIOR.compare(codigo) > 0 || LIMITE_SUPERIOR.compare(codigo) < 0 ||
        codigo.length() != LIMITE_INFERIOR.length()) {
        throw invalid_argument("Argumento invalido");
    }
}

void CodigoIngresso::setCodigo(string codigo) throw (invalid_argument) {
    validar(codigo);
    this->codigo = codigo;
}

// ------------------------------------------------------------------------

void NomeEvento::validar(string nome) throw (invalid_argument) {

    // checa tamanho
    if (nome.length() != TAMANHO_ESPERADO) {
        throw invalid_argument("Argumento invalido");
    }

    int caracter;
    bool flag = false;
    for (int i = 0; i < TAMANHO_ESPERADO; i++) {
        caracter = int(nome[i]);
        // checa por simbolos
        if ((caracter != ' ' && caracter < '0') || (caracter > '9' &&
            caracter < 'A') || (caracter > 'Z' &&
            caracter < 'a') || caracter > 'z') {
            throw invalid_argument("Argumento invalido");
        } else {
            // checa por existencia de letras
            if (caracter > '9') {
                flag = true;
            }
        }
    }
    if (flag == false) {
        throw invalid_argument("Argumento invalido");
    }

    // checa espacos
    string espacos = "  ";
    if (nome.find(espacos) != string::npos) {
        throw invalid_argument("Argumento invalido");
    }
    return;
}

void NomeEvento::setNome(string nome) throw (invalid_argument) {
    validar(nome);
    this->nome = nome;
}

// ------------------------------------------------------------------------

void Data::validar(string data) throw (invalid_argument) {

    // checa tamanho
    if (data.length() != TAMANHO_ESPERADO) {
        throw invalid_argument("Argumento invalido");
    }

    // checa por numeros
    int caracter;
    for (int i = 0; i < TAMANHO_ESPERADO; i++) {
        caracter = int(data[i]);
        if ((caracter < '0' || caracter > '9') &&
            (i+1)%INTERVALO_BARRAS != 0) {
            throw invalid_argument("Argumento invalido");
        }
    }

    // checa barras
    if (data[BARRA_POS1] != '/' || data[BARRA_POS2] != '/') {
        throw invalid_argument("Argumento invalido");
    }

    // checa ano bissexto
    int ano = (data[ANO_POS1] - '0')*10 + (data[ANO_POS2] - '0');
    int mes = (data[MES_POS1] - '0')*10 + (data[MES_POS2] - '0');
    int dia = (data[DIA_POS1] - '0')*10 + (data[DIA_POS2] - '0');
    bool bissexto = false;
    if (ano%4 == 0 && (ano%10 || ano/10)) {
        bissexto = true;
    }

    if (mes > 12 || dia > 31) {
        throw invalid_argument("Argumento invalido");
    }

    if (mes == ABR || mes == JUN || mes == SET || mes == NOV) {
        // tratamento 30 dias
        if (dia > 30) {
            throw invalid_argument("Argumento invalido");
        }
    } else if (mes == FEV && bissexto) {
        // tratamento 29 dias
        if (dia > 29) {
            throw invalid_argument("Argumento invalido");
        }
      } else if (mes == FEV && !bissexto){
        // tratamento 28 dias
        if (dia > 28) {
            throw invalid_argument("Argumento invalido");
        }
    }

    return;
}

void Data::setData(string data) throw (invalid_argument) {
    validar(data);
    this->data = data;
}

// -----------------------------------------------------------------------------

void Senha::validar(string senha) throw (invalid_argument) {

    // checa tamanho
    if (senha.length() != TAMANHO_ESPERADO) {
        throw invalid_argument("Argumento invalido");
    }

    string caracteres_usados = "&";
    int caracter;
    bool flag_numero = false;
    bool flag_maiuscula = false;
    bool flag_minuscula = false;
    for (int i = 0; i < TAMANHO_ESPERADO; i++) {
        caracter = int(senha[i]);
        // checa por simbolos
        if ((caracter < '0') || (caracter > '9' &&
            caracter < 'A') || (caracter > 'Z' &&
            caracter < 'a') || caracter > 'z') {
            throw invalid_argument("Argumento invalido");
        } else {
            // checa caracteres repetidos
            for (int j = 0; j < caracteres_usados.length(); j++) {
                if (caracteres_usados.find(senha[i]) != string::npos) {
                    throw invalid_argument("Argumento invalido");
                }
            }
            caracteres_usados.push_back(senha[i]);
            // garante a existência de pelo menos um numero, uma letra maiuscula e minuscula
            if (caracter >= '0' && caracter <= '9') {
                flag_numero = true;
            } else {
                if (caracter >= 'A' && caracter <= 'Z') {
                    flag_maiuscula = true;
                } else {
                    flag_minuscula = true;
                }
            }
        }
    }
    if (!flag_numero || !flag_minuscula || !flag_maiuscula) {
        throw invalid_argument("Argumento invalido");
    }
}

void Senha::setSenha(string senha) throw (invalid_argument) {
    validar(senha);
    this->senha = senha;
}

// -----------------------------------------------------------------------------

void Cidade::validar(string cidade) throw (invalid_argument) {

    // checa tamanho
    if (cidade.length() != TAMANHO_ESPERADO) {
        throw invalid_argument("Argumento invalido");
    }

    int caracter;
    bool flag_numero = false;
    bool flag_letra = false;
    for (int i = 0; i < TAMANHO_ESPERADO; i++) {
        caracter = int(cidade[i]);
        // checa por simbolos nao previstos
        if ((caracter != ' ' && caracter != '.' && caracter < '0') ||
            (caracter > '9' && caracter < 'A') ||
            (caracter > 'Z' && caracter < 'a') ||
            caracter > 'z') {
            throw invalid_argument("Argumento invalido");
        } else {
            // garante a existência de pelo menos um numero, uma letra maiuscula e minuscula
            if (caracter >= '0' && caracter <= '9') {
                flag_numero = true;
            } else {
                if (caracter != ' ' && caracter != '.') {
                    flag_letra = true;
                } else {
                    if (caracter == '.') {
                        if (i == 0) {
                            throw invalid_argument("Argumento invalido");
                        } else {
                            if (cidade[i-1] >= '0' && cidade[i-1] <= '9' ||
                                cidade[i-1] == ' ') {
                                throw invalid_argument("Argumento invalido");
                            }
                        }
                    }
                }
            }
        }
    }

    if (!flag_letra) {
        throw invalid_argument("Argumento invalido");
    }

    // checa espacos
    string espacos = "  ";
    if (cidade.find(espacos) != string::npos) {
        throw invalid_argument("Argumento invalido");
    }
}

void Cidade::setCidade(string cidade) throw (invalid_argument) {
    validar(cidade);
    this->cidade = cidade;
}

// ------------------------------------------------------------------

void ClasseEvento::validar(string evento) throw (invalid_argument) {

    // checa tamanho
    if (evento.length() != TAMANHO_ESPERADO) {
        throw invalid_argument("Argumento invalido");
    }
    int caracter;
    bool flag = false;
    caracter = int(evento[0]);
    // checa por simbolos
    if (caracter < '0' || caracter > '9'){
        throw invalid_argument("Argumento invalido");
    } else {
        if ((caracter - '0') < 1 || (caracter - '0') > 4) {
            throw invalid_argument("Argumento invalido");
        }
    }
}

void ClasseEvento::setClasseEvento(string evento) throw (invalid_argument) {
    validar(evento);
    this->evento = evento;
}

// ------------------------------------------------------------------

void NumeroSala::validar(string sala) throw (invalid_argument) {

    // checa tamanho
    if (sala.length() > TAMANHO_MAXIMO || sala.length() == 0) {
        throw invalid_argument("Argumento invalido");
    }
    int caracter;
    int num = 0;
    // checa por simbolos
    for (int i = 0; i < sala.length(); i++) {
        caracter = int(sala[i]);
        if (caracter < '0' || caracter > '9'){
            throw invalid_argument("Argumento invalido");
        }
    }

    int expoente;
    for (int i = sala.length() - 1; i >= 0; i--) {
        expoente = (sala.length() - 1)-i;
        num += (sala[i] - '0') * pow(10, expoente);
    }

    if (num < VALOR_MIN || num > VALOR_MAX) {
        throw invalid_argument("Argumento invalido");
    }
    return;
}

void NumeroSala::setSala(string sala) throw (invalid_argument) {
    validar(sala);
    this->sala = sala;
}

// ------------------------------------------------------------------

void Disponibilidade::validar(string disponibilidade) throw (invalid_argument) {

    // checa tamanho
    if (disponibilidade.length() > TAMANHO_MAXIMO || disponibilidade.length() == 0) {
        throw invalid_argument("Argumento invalido");
    }
    int caracter;
    int num = 0;
    // checa por simbolos
    for (int i = 0; i < disponibilidade.length(); i++) {
        caracter = int(disponibilidade[i]);
        if (caracter < '0' || caracter > '9'){
            throw invalid_argument("Argumento invalido");
        }
    }

    int expoente;
    for (int i = disponibilidade.length() - 1; i >= 0; i--) {
        expoente = (disponibilidade.length() - 1)-i;
        num += (disponibilidade[i] - '0') * pow(10, expoente);
    }

    if (num < VALOR_MIN || num > VALOR_MAX) {
        throw invalid_argument("Argumento invalido");
    }
    return;
}

void Disponibilidade::setDisponibilidade(string disponibilidade) throw (invalid_argument) {
    validar(disponibilidade);
    this->disponibilidade = disponibilidade;
}

// ------------------------------------------------------------------------

const string FaixaEtaria::FAIXAS = "L/10/12/14/16/18/";

void FaixaEtaria::validar(string faixa) throw (invalid_argument) {

    // checa tamanho maximo
    if (faixa.length() > TAMANHO_MAX) {
        throw invalid_argument("Argumento invalido");
    }

    // checa caracteres
    for (int i = 0; i < faixa.length(); i++) {
        if (faixa[i] != 'L' && (faixa[i] < '0' || faixa[i] > '9'))
            throw invalid_argument("Argumento invalido");
    }

    // checa existencia
    string copia = faixa;
    copia.push_back('/');
    if (FAIXAS.find(copia) == string::npos) {
        throw invalid_argument("Argumento invalido");
    }
    return;
}

void FaixaEtaria::setFaixa(string faixa) throw (invalid_argument) {
    validar(faixa);
    this->faixa = faixa;
}

// ------------------------------------------------------------------------

const string Estado::LISTA =
"AC/AL/AP/AM/BA/CE/DF/ES/GO/MA/MT/MS/MG/PA/PB/PR/PE/PI/RJ/RN/RS/RO/RR/SC/SP/SE/TO/";

void Estado::validar(string estado) throw (invalid_argument) {

    // checa tamanho
    if (estado.length() != TAMANHO_ESPERADO) {
        throw invalid_argument("Argumento invalido");
    }

    // checa caracteres
    for (int i = 0; i < estado.length(); i++) {
        if (estado[i] < 'A' || estado[i] > 'Z')
            throw invalid_argument("Argumento invalido");
    }

    // checa existencia
    string copia = estado;
    copia.push_back('/');
    if (LISTA.find(copia) == string::npos) {
        throw invalid_argument("Argumento invalido");
    }
    return;
}

void Estado::setEstado(string estado) throw (invalid_argument) {
    validar(estado);
    this->estado = estado;
}

// ------------------------------------------------------------------------

const string Horario::MINUTOS = "00/15/30/45/";

void Horario::validar(string horario) throw (invalid_argument) {

    // checa tamanho
    if (horario.length() != TAMANHO_ESPERADO) {
        throw invalid_argument("Argumento invalido");
    }

    // checa caracteres
    if (horario[HORAS_POS1] < '0' || horario[HORAS_POS1] > '9' ||
        horario[HORAS_POS2] < '0' || horario[HORAS_POS2] > '9' ||
        horario[MINUTOS_POS1] < '0' || horario[MINUTOS_POS1] > '9' ||
        horario[MINUTOS_POS2] < '0' || horario[MINUTOS_POS2] > '9' ||
        horario[MEIO] != ':') {
        throw invalid_argument("Argumento invalido");
    }

    // checa horas
    int hora = (horario[HORAS_POS1] - '0') * 10 + (horario[HORAS_POS2] - '0');
    if (hora < LIMITE_INFERIOR_HORA || hora > LIMITE_SUPERIOR_HORA) {
        throw invalid_argument("Argumento invalido");
    }

    // checa minutos
    string minutos;
    minutos.push_back(horario[MINUTOS_POS1]);
    minutos.push_back(horario[MINUTOS_POS2]);
    minutos.push_back('/');
    if (MINUTOS.find(minutos) == string::npos) {
        throw invalid_argument("Argumento invalido");
    }
    return;
}

void Horario::setHorario(string horario) throw (invalid_argument) {
    validar(horario);
    this->horario = horario;
}

// ------------------------------------------------------------------------

void DataValidade::validar(string dataValidade) throw (invalid_argument) {

    // checa tamanho
    if (dataValidade.length() != TAMANHO_ESPERADO) {
        throw invalid_argument("Argumento invalido");
    }

    // checa caracteres
    if (dataValidade[MES_POS1] < '0' || dataValidade[MES_POS1] > '9' ||
        dataValidade[MES_POS2] < '0' || dataValidade[MES_POS2] > '9' ||
        dataValidade[ANO_POS1] < '0' || dataValidade[ANO_POS1] > '9' ||
        dataValidade[ANO_POS2] < '0' || dataValidade[ANO_POS2] > '9' ||
        dataValidade[MEIO] != '/') {
        throw invalid_argument("Argumento invalido");
    }

    // checa mes
    int mes = (dataValidade[MES_POS1] - '0') * 10 + (dataValidade[MES_POS2] - '0');
    if (mes < LIMITE_INFERIOR_MESES || mes > LIMITE_SUPERIOR_MESES) {
        throw invalid_argument("Argumento invalido");
    }

    return;
}

void DataValidade::setDataValidade(string dataValidade) throw (invalid_argument) {
    validar(dataValidade);
    this->dataValidade = dataValidade;
}

// ------------------------------------------------------------------------

const float Preco::VALOR_MAX = 1000.00;
const float Preco::VALOR_MIN = 0.00;

void Preco::validar(string preco) throw (invalid_argument) {

    // checa tamanho
    if (preco.length() > TAMANHO_MAX) {
        throw invalid_argument("Argumento invalido");
    }

    // checa caracteres
    int diferenca;
    for (int i = 0; i < preco.length(); i++) {

        if (preco[i] == ',') {
            // checa posicao da virgula
            diferenca = preco.length() - (i+1);
            if (diferenca != NUM_ALGARISMOS_DEC) {
                throw invalid_argument("Argumento invalido");
            }
        }

        if ((preco[i] < '0' && preco[i] != ',') || preco[i] > '9') {
            throw invalid_argument("Argumento invalido");
        }
    }

    // checa valor
    string algarismos;
    for (int i = 0; i < preco.length(); i++) {
        if (preco[i] != ',') {
            algarismos.push_back(preco[i]);
        }
    }

    int expoente;
    float valor = 0.00;
    for (int i = algarismos.length(); i >0; i--) {
        expoente = algarismos.length() - i + POTENCIA_INICIAL;
        valor += (algarismos[i] - '0') * pow(10, expoente);
    }

    if (valor < VALOR_MIN || valor > VALOR_MAX) {
        throw invalid_argument("Argumento invalido");
    }

    return;
}

void Preco::setPreco(string preco) throw (invalid_argument) {
    validar(preco);
    this->preco = preco;
}

// ------------------------------------------------------------------------

void NumeroCartao::validar_entrada(string numero) throw (invalid_argument) {

    // checa tamanho
    if (numero.length() != TAMANHO_ESPERADO) {
        throw invalid_argument("Argumento invalido");
    }

    // checa digitos
    for (int i = 0; i < numero.length(); i++) {
        if (numero[i] < '0' || numero[i] > '9'){
            throw invalid_argument("Argumento invalido");
        }
    }

    return;
}

void NumeroCartao::validar_logica(string numero) throw (invalid_argument) {

    int digito;
    int soma = 0;
    bool multiplica = false;
    for (int i = numero.length() - 1; i >= 0; i--) {
        digito = numero[i] - '0';
        if (multiplica)
            digito *= 2;
        if (digito > 9) {
            soma += digito/10;
            soma += digito%10;
        } else {
            soma += digito;
        }
        multiplica = !multiplica;
    }

    if (soma%10 != 0) throw invalid_argument("Argumento invalido");

    return;
}

void NumeroCartao::setNumero(string numero) throw (invalid_argument) {
    validar_entrada(numero);
    validar_logica(numero);
    this->numero = numero;
}

// ------------------------------------------------------------------------

void CPF::validar_entrada(string cpf) throw (invalid_argument) {

    // checa tamanho
    if (cpf.length() != TAMANHO_ESPERADO) {
        throw invalid_argument("Argumento invalido");
    }

    // checa digitos
    for (int i = 0; i < cpf.length(); i++) {
        if ((i == POS_PONTO1 || i == POS_PONTO2) && cpf[i] != '.') {
            throw invalid_argument("Argumento invalido");
        } else if (i == POS_TRACO && cpf[i] != '-') {
            throw invalid_argument("Argumento invalido");
        } else if ((cpf[i] < '0' || cpf[i] > '9') &&
                   (i != POS_PONTO1 && i != POS_PONTO2 && i != POS_TRACO)) {
            throw invalid_argument("Argumento invalido");
        }
    }

    return;
}

void CPF::validar_logica(string cpf) throw (invalid_argument) {

    int soma1 = 0;
    int soma2 = 0;
    int verificador1;
    int verificador2;
    int anterior = cpf[0];
    bool repetido = true;
    int j = 10;
    for (int i = 0; i < cpf.length(); i++) {
        if (i != POS_PONTO1 && i != POS_PONTO2 && i != POS_TRACO) {
            if (j > 1) soma1 += (cpf[i] - '0') * j;
            if (j >= 1) soma2 += (cpf[i] - '0') * (j+1);
            j--;

            if (i > 0 && anterior != cpf[i]) {
                repetido = false;
            }
        }
    }

    if (repetido) throw invalid_argument("Argumento invalido");

    if ((soma1*10)%11 == 10) {
        verificador1 = 0;
    } else {
        verificador1 = (soma1*10)%11;
    }
    if ((soma2*10)%11 == 10) {
        verificador2 = 0;
    } else {
        verificador2 = (soma2*10)%11;
    }

    if (verificador1 != cpf[cpf.length()-2] - '0') {
        throw invalid_argument("Argumento invalido");
    }
    if (verificador2 != cpf[cpf.length()-1] - '0') {
        throw invalid_argument("Argumento invalido");
    }
    return;
}

void CPF::setCPF(string cpf) throw (invalid_argument) {
    validar_entrada(cpf);
    validar_logica(cpf);
    this->cpf = cpf;
}
