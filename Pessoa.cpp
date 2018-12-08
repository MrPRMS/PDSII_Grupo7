#include "Pessoa.h"

std::map<unsigned int, Pessoa *> Pessoa::pessoas={};

void Pessoa::cadastrar(Pessoa *pessoa)
{
	Pessoa::pessoas.insert(std::pair<unsigned int, Pessoa *>(pessoa->get_id(),pessoa));
}

void Pessoa::deletar(Pessoa * pessoa)
{
	Pessoa::pessoas.erase(pessoa->get_id());
}

void Pessoa::modificar(Pessoa *pessoa)
{
	std::map<unsigned int, Pessoa *>::iterator it = Pessoa::pessoas.find(pessoa->get_id());
	it->second=pessoa;
}

std::map<unsigned int, Pessoa *>  Pessoa::listar()
{
	return pessoas;
}

void Pessoa::pesquisar()
{
}
