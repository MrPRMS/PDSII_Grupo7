#ifndef PONTODECOLETA_H_
#define PONTODECOLETA_H_

#include <iostream>
#include <iostream>
#include <map>
#include <functional>
#include <vector>

class PontoDeColeta{

private:
	std::string _rua;
	std::string _numero;
	std::string _complemento;
	std::string _bairro;
	std::string _cep;
	std::string _cidade;
	
public:
	PontoDeColeta(std::string rua, std::string bairro, std::string numero, std::string complemento, std::string cep, std::string cidade);
	~PontoDeColeta();

	std::string get_rua();
	void set_rua(std::string rua);
	
	std::string get_numero();
	void set_numero(std::string numero);
	
	std::string get_complemento();
    void set_complemento(std::string complemento);
	
	std::string get_bairro();
	void set_bairro(std::string bairro);
	
	std::string get_cep();
	void set_cep(std::string cep);
	
	std::string get_cidade();
	void set_cidade(std::string cidade);

};



#endif

