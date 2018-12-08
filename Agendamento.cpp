#include <iostream>
#include <map>
#include <functional>
#include <vector>
#include "Usuario.h"
#include "Material.h"
#include "Agendamento.hpp"

Agendamento::Agendamento(){
	_id++;
	}

std::map<unsigned int, Agendamento *> Agendamento::_agendamentos={};

void Agendamento::cadastrar(Agendamento *agendamento){
	Agendamento::_agendamentos.insert(std::pair<unsigned int, Agendamento *>(agendamento->get_id(),agendamento));
}

void Agendamento::deletar(){
}

void Agendamento::modificar(Agendamento agendamento){
}

std::vector<Agendamento *> Agendamento::listar(){
}

void Agendamento::pesquisar(){
}
