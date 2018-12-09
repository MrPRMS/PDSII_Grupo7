#ifndef AGENDAMENTO_H_
#define AGENDAMENTO_H_

#include <iostream>
#include <stdio.h>
#include <map>
#include <functional>
#include <vector>
#include "Usuario.h"
#include "Material.h"
#include "PontoDeColeta.h"

class Agendamento{

private:
	
	unsigned int _id;		//id do agendamento
	static unsigned int next_id;
	std::string _data; 		//data do agendamento
	std::string _local; 	//local do agendamento
	Usuario _doador;		//nome do doador
	Usuario _receptor;		//nome do receptor
	Material _material;		//material a ser doado
	static std::map<unsigned int, Agendamento *> _agendamentos;
	bool _status;			//status do agendamento: 0-não realizado, 1-realizado

public:
	
	Agendamento();		//construtor
	
	unsigned int get_id(){		//acesso ao id
		return _id;
	} 
	
	void set_id(int identificador){				//definir id
		this->_id=identificador;
	}
	
	~Agendamento(){};			//destrutor
	
	std::map<unsigned int, Agendamento *> get_agendamentos(){
		return _agendamentos;
	}

	static void cadastrar(Agendamento *agendamento);	//cadastrar agendamento

	static void deletar();								//deletar agendamento

	static void modificar(Agendamento agendamento);							//modificar agendamento

	static std::vector<Agendamento *> listar();			//listar agendamentos cadastrados

	static void pesquisar();							//pesquisar agendamento
	
	std::string get_data(){								//obter data
		return _data;
	}
	
	void set_data(std::string dia){						//definir data
		this->_data=dia;
	}
	
	std::string get_local(){							//obter local
		return _local;
	}
	
	void set_local(std::string local){					//definir local
		this->_local=local;
	}
	
	Usuario get_doador(){								//obter doador
		return _doador;
	}
	
	void set_doador(Usuario doador){					//definir doador
		this->_doador=doador;
	}
	
	Usuario get_receptor(){								//obter receptor
		return _receptor;
	}
	
	void set_receptor(Usuario receptor){				//definir receptor
		this->_receptor=receptor;
	}
	
	Material get_material(){							//obter material
		return _material;
	}
	
	void set_material(Material material){				//definir material
		this->_material=material;
	}
	
	bool get_status(){							//obter status
		return _status;
	}
	
	void set_status(bool status){				//definir status
		this->_status=status;
	}
	
	static unsigned int get_new_id();
	
};

#endif
