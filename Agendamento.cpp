#include <iostream>
#include <map>
#include <functional>
#include <vector>
#include "Usuario.h"
#include "Material.h"
#include "Agendamento.hpp"

Agendamento::Agendamento(){
	_id=0;
	}

std::map<unsigned int, Agendamento *> Agendamento::_agendamentos={};

void Agendamento::cadastrar(Agendamento *agendamento){
	std::cout<<"Função Agendamento::cadastrar";
	Agendamento::_agendamentos.insert(std::pair<unsigned int, Agendamento *>(agendamento->get_id(),agendamento));
}

void Agendamento::deletar(){
	std::cout<<"Função Agendamento::deletar";
}

void Agendamento::modificar(Agendamento agendamento){
	std::cout<<"Função Agendamento::modificar";
}

std::vector<Agendamento *> Agendamento::listar(){
	std::cout<<"Função Agendamento::listar";
}

void Agendamento::pesquisar(){
	std::cout<<"Função Agendamento::pesquisar";
}

unsigned int Agendamento::next_id=0;

unsigned int Agendamento::get_new_id(){
    next_id++;
    return next_id;
}
