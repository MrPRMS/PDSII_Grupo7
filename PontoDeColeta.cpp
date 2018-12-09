#include <iostream>
#include <string>
//#include <vector>
#include "PontoDeColeta.h"

PontoDeColeta::PontoDeColeta(std::string rua, std::string numero, std::string complemento,
							 std::string bairro, std::string cep, std::string cidade){
    _rua=rua;
    _bairro=bairro;
    _numero=numero;
    _complemento=complemento;
}

PontoDeColeta::~PontoDeColeta(){
}

std::string PontoDeColeta::get_rua(){
	return _rua;
}

void PontoDeColeta::set_rua(std::string rua){
	_rua=rua;
}

std::string PontoDeColeta::get_numero(){
	return _numero;
}

void PontoDeColeta::set_numero(std::string numero){
	_numero=numero;
}

std::string PontoDeColeta::get_complemento(){
	return _complemento;
}

void PontoDeColeta::set_complemento(std::string complemento){
	_complemento=complemento;
}

std::string PontoDeColeta::get_bairro(){
	return _bairro;
}

void PontoDeColeta::set_bairro(std::string bairro){
	_bairro=bairro;
}

std::string PontoDeColeta::get_cep(){
	return _cep;
}

void PontoDeColeta::set_cep(std::string cep){
	_cep=cep;
}

std::string PontoDeColeta::get_cidade(){
	return _cidade;
}

void PontoDeColeta::set_cidade(std::string cidade){
	_cidade=cidade;
}




