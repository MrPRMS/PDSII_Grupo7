#ifndef MATERIAL_H
#define MATERIAL_H

#include <string>
#include <map>
#include <functional>
#include <vector>

enum TipoMaterial{RESIDUO,ALIMENTO};

class Material
{

public:
	
	int get_codigo(){								//obter codigo
		return _codigo;
	}
	
	void set_codigo(int codigo){						//definir codigo
		this->_codigo=codigo;
	}


        Material();
        virtual ~Material();
        int EscolherTipoResiduo();//Esse metodo deve ser chamado para que o usuario escolha um tipo de residuo que vai doar ou receber. So existem 4 possibilidades: retorna 1 para metal,2 para papel, 3 para plastico , 4 para vidro e 0 quando desiste de escolher um material
        void PodemSerReciclados (int codigo); // Esse metodo e o seguinte servem apenas para apresentar ao usuario os objetos que podem ou não ser recolhidos. Depois que o usuario ler a relacao deverá confirmar ou nao a escolha daquele material
        void NaoPodemSerReciclados (int codigo);

		unsigned int get_id(){return id;};
	
		void set_id(unsigned int id){this->id=id;};
		
		void set_nome(std::string nome){this->nome=nome;};
		
		std::string get_nome(){return nome;};
		
		void set_textoReciclavel(std::string texto){textoReciclavel=texto;};
		
		void set_textNaoReciclavel(std::string texto){textoNaoReciclavel=texto;};
		
		std::string get_textoReciclavel(){return textoReciclavel;};
		
		std::string get_textoNaoReciclavel(){return textoNaoReciclavel;};
		
		TipoMaterial get_tipoMaterial(){if (tipoMaterial == TipoMaterial::RESIDUO) return TipoMaterial::RESIDUO; else return TipoMaterial::ALIMENTO;};
		
		void set_tipoMaterial(int tipo){this->tipoMaterial= tipo;};
	
		static unsigned int get_new_id();
		
		static std::map<unsigned int, Material *> get_materiais(){return materiais;};

		static void cadastrar(Material *material);

		static void deletar(Material *material);

		static void modificar(Material * material);

		static std::map<unsigned int, Material *> listar();

		static void pesquisar();
		
		static std::vector<Material *> pesquisaNome(std::string nome);

protected:

	int _codigo;
	std::string _confirma;

		unsigned int id;
		
		int tipoMaterial;
	
		static unsigned int next_id;
		
		std::string nome;
		
		std::string textoReciclavel;
		
		std::string textoNaoReciclavel;
		
		static std::map<unsigned int, Material *> materiais;
    private:
};

#endif // MATERIAL_H
