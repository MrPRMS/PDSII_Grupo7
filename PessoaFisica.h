#ifndef PESSOAFISICA_H
#define PESSOAFISICA_H

#include "Pessoa.h"
#include <vector>

class PessoaFisica : public Pessoa
{
protected:
	std::string cpf;
	std::string removeMascara(std::string cpf);
public:
	PessoaFisica(){};
	~PessoaFisica(){};
	std::string get_cpf(){ return cpf;};
	static std::vector<PessoaFisica *> pesquisaPessoaCPF(std::string cpf);
	static std::map<unsigned int, PessoaFisica*> listar();
	void set_cpf(std::string cpf){this->cpf=removeMascara(cpf);};
};
#endif
