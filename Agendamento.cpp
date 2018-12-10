#include <iostream>
#include <map>
#include <functional>
#include <vector>
#include "Usuario.h"
#include "Material.h"
#include "Agendamento.hpp"

//construtor
Agendamento::Agendamento(){
	_id=0;
	}

//mapa de objetos Agendamento
std::map<unsigned int, Agendamento *> Agendamento::_agendamentos={};

//cadastrar agendamento no mapa
void Agendamento::cadastrar(Agendamento *agendamento){
	//std::cout<<"Função Agendamento::cadastrar";
	Agendamento::_agendamentos.insert(std::pair<unsigned int, Agendamento *>(agendamento->get_id(),agendamento));
}

//excluir agendamento do mapa
void Agendamento::deletar(){
	//std::cout<<"Função Agendamento::deletar";
}

//alterar um agendamento no mapa
void Agendamento::modificar(Agendamento agendamento){
	//std::cout<<"Função Agendamento::modificar";
}

//listar os agendamentos do mapa
std::vector<Agendamento *> Agendamento::listar(){
	//std::cout<<"Função Agendamento::listar";
}

//pesquisar por um agendamento no mapa;
void Agendamento::pesquisar(){
	//std::cout<<"Função Agendamento::pesquisar";
}

//atribuição de valor à variável next+id
unsigned int Agendamento::next_id=0;

//definição do id do próximo objeto Agendamento
unsigned int Agendamento::get_new_id(){
    next_id++;
    return next_id;
}
