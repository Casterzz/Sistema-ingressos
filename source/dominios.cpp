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

// ------------------------------------------------------------------------

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
        if ((caracter != ESPACO && caracter < LIMITE_INFERIOR_NUMERO) || (caracter > LIMITE_SUPERIOR_NUMERO &&
            caracter < LIMITE_INFERIOR_MAIUSCULAS) || (caracter > LIMITE_SUPERIOR_MAIUSCULAS &&
            caracter < LIMITE_INFERIOR_MINUSCULAS) || caracter > LIMITE_SUPERIOR_MINUSCULAS) {
            throw invalid_argument("Argumento invalido");       
        } else {
            // checa por existencia de letras
            if (caracter > LIMITE_SUPERIOR_NUMERO) {
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
        if ((caracter < LIMITE_INFERIOR_NUMERO || caracter > LIMITE_SUPERIOR_NUMERO) &&
            (i+1)%INTERVALO_BARRAS != 0) {
            throw invalid_argument("Argumento invalido");       
        }
    }

    // checa barras
    if (data[BARRA_POS1] != '/' || data[BARRA_POS2] != '/') {
        throw invalid_argument("Argumento invalido");
    }

    // checa ano bissexto
    int ano = (int(data[ANO_POS1])-ASCII_OFFSET)*10 + (int(data[ANO_POS2])-ASCII_OFFSET);
    int mes = (int(data[MES_POS1])-ASCII_OFFSET)*10 + (int(data[MES_POS2])-ASCII_OFFSET);
    int dia = (int(data[DIA_POS1])-ASCII_OFFSET)*10 + (int(data[DIA_POS2])-ASCII_OFFSET);
    bool bissexto = false;
    if (ano%4 == 0) {
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
    } else if (bissexto) {
        // tratamento 29 dias
        if (dia > 29) {
            throw invalid_argument("Argumento invalido");
        }
    } else {
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

// ------------------------------------------------------------------------

const string FaixaEtaria::LIVRE = "L";
const string FaixaEtaria::DEZ = "10";
const string FaixaEtaria::DOZE = "12";
const string FaixaEtaria::QUATORZE = "14";
const string FaixaEtaria::DEZESSEIS = "16";
const string FaixaEtaria::DEZOITO = "18";
   

void FaixaEtaria::validar(string faixa) throw (invalid_argument) {

    // checa tamanho maximo
    if (faixa.length() > TAMANHO_MAX) {
        throw invalid_argument("Argumento invalido");
    }

    // checa validade
    if (LIVRE.compare(faixa) != 0 && DEZ.compare(faixa) != 0 &&
        DOZE.compare(faixa) != 0 && QUATORZE.compare(faixa) != 0 &&
        DEZESSEIS.compare(faixa) != 0 && DEZOITO.compare(faixa) != 0) {
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
    if (horario[HORAS_POS1] < LIMITE_INFERIOR_NUMERO || horario[HORAS_POS1] > LIMITE_SUPERIOR_NUMERO ||
        horario[HORAS_POS2] < LIMITE_INFERIOR_NUMERO || horario[HORAS_POS2] > LIMITE_SUPERIOR_NUMERO ||
        horario[MINUTOS_POS1] < LIMITE_INFERIOR_NUMERO || horario[MINUTOS_POS1] > LIMITE_SUPERIOR_NUMERO ||
        horario[MINUTOS_POS2] < LIMITE_INFERIOR_NUMERO || horario[MINUTOS_POS2] > LIMITE_SUPERIOR_NUMERO ||
        horario[MEIO] != ':') {
        throw invalid_argument("Argumento invalido");
    }

    // checa horas
    int hora = (horario[HORAS_POS1]-ASCII_OFFSET)*10 + (horario[HORAS_POS2]-ASCII_OFFSET);
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
    if (dataValidade[MES_POS1] < LIMITE_INFERIOR_NUMERO || dataValidade[MES_POS1] > LIMITE_SUPERIOR_NUMERO ||
        dataValidade[MES_POS2] < LIMITE_INFERIOR_NUMERO || dataValidade[MES_POS2] > LIMITE_SUPERIOR_NUMERO ||
        dataValidade[ANO_POS1] < LIMITE_INFERIOR_NUMERO || dataValidade[ANO_POS1] > LIMITE_SUPERIOR_NUMERO ||
        dataValidade[ANO_POS2] < LIMITE_INFERIOR_NUMERO || dataValidade[ANO_POS2] > LIMITE_SUPERIOR_NUMERO ||
        dataValidade[MEIO] != '/') {
        throw invalid_argument("Argumento invalido");
    }

    // checa mes
    int mes = (dataValidade[MES_POS1]-ASCII_OFFSET)*10 + (dataValidade[MES_POS2]-ASCII_OFFSET);
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
    int numero_virgulas = 0;
    for (int i = 0; i < preco.length(); i++) {

        if (preco[i] == VIRGULA) {
            // checa posicao da virgula
            diferenca = preco.length() - (i+1);
            if (diferenca != NUM_ALGARISMOS_DEC) {
                throw invalid_argument("Argumento invalido");
            }
            numero_virgulas++;
        }

        if ((preco[i] < LIMITE_INFERIOR_NUMERO && preco[i] != VIRGULA) ||
            preco[i] > LIMITE_SUPERIOR_NUMERO) {
            throw invalid_argument("Argumento invalido");
        }
    }

    if (numero_virgulas != 1) {
        throw invalid_argument("Argumento invalido");
    }

    // checa valor
    string algarismos;
    for (int i = 0; i < preco.length(); i++) {
        if (preco[i] != VIRGULA) {
            algarismos.push_back(preco[i]);
        }
    }

    int expoente;
    float valor = 0.00;
    for (int i = algarismos.length(); i >0; i--) {
        expoente = algarismos.length() - i + POTENCIA_INICIAL;
        valor += (int(algarismos[i]) - ASCII_OFFSET) * pow(10, expoente);
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
