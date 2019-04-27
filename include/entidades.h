#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"
//#include <string>

using namespace std;

class Usuario {

 private:
 	CPF cpf;
 	Senha senha;

 public:
 	void setUsuario(string cpf_in, string senha_in) throw (invalid_argument) {
 		this->cpf.setCPF(cpf_in);
 		this->senha.setSenha(senha_in);
 	}
 	void getUsuario(CPF *cpf_out, Senha *senha_out) {
 		cpf_out->setCPF(this->cpf.getCPF());
 		senha_out->setSenha(this->senha.getSenha());
 		return;
 	}
 
};

#endif
