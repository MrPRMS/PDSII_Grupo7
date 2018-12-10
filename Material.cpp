#include "Material.h"
#include <iostream>
#include <stdio.h>

unsigned int Material::next_id=0;

Material::Material()
{
    _codigo=0;
    //ctor
	id=0;
}

Material::~Material()
{
    //dtor
}

int Material::EscolherTipoResiduo(){
    int codigo;
    std::string confirma;
    std::cout<<"***************************************"<<std::endl;
    std::cout<<"    ESCOLHA UM TIPO DE RESIDUO"<<std::endl;
    std::cout<<"***************************************"<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<"1. Metal"<<std::endl;
    std::cout<<"2. Papel"<<std::endl;
    std::cout<<"3. Plastico"<<std::endl;
    std::cout<<"4. Vidro"<<std::endl;
    std::cout<<"5. Sair"<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<"Digite o codigo do residuo: ";
    std::cin>>codigo;
    while(codigo!=1&&codigo!=2&&codigo!=3&&codigo!=4&&codigo!=5){
        std::cout<<"Codigo invalido. Digite novamente: ";
        std::cin>>codigo;
    }
    std::cout<<""<<std::endl;
    PodemSerReciclados(codigo);
    std::cout<<""<<std::endl;
    NaoPodemSerReciclados(codigo);
    std::cout<<""<<std::endl;
    std::cout<<"************************************************"<<std::endl;
    std::cout<<"Digite c para confirmar a escolha ou s para sair"<<std::endl;
    std::cout<<"************************************************"<<std::endl;


    std::cin>>confirma;

    while(1){
    _confirma=confirma;
    if(_confirma=="c"){
        _codigo=codigo;
        return _codigo;
    }
    if(_confirma=="s"){
        return 0;
    }else{
    std::cout<<"Opcao invalida. Digite novamente:"<<std::endl;
    std::cin>>confirma;
    }
    }
}

void Material::PodemSerReciclados(int codigo)
{
    if(codigo==1){

    std::cout<<"Metais que podem ser reciclados"<<std::endl;
    std::cout<<"-------------------------------"<<std::endl;
    std::cout<<"Latas de bebidas e alimentos;tampas de recipientes de vidro; bandejas; panelas; ferragens; grampos; fios eletricos; chapas embalagens de marmitex; cobre;aço; lata de produtos de limpeza."<<std::endl;
    }
    if(codigo==2){
    std::cout<<"Papeis que podem ser reciclados"<<std::endl;
    std::cout<<"-------------------------------"<<std::endl;
    std::cout<<"Jornal; papel de computador; saco de papel; papel de escritorio; cadernos."<<std::endl;
    }
    if(codigo==3){
    std::cout<<"Plasticos que podem ser reciclados"<<std::endl;
    std::cout<<"----------------------------------"<<std::endl;
    std::cout<<"Embalagens de alimentos, produtos de beleza, produtos de limpeza;tampas; brinquedos; peças plasticas; canetas esferograficas; escovas de dente; baldes; artigos de cozinha."<<std::endl;
    }
    if(codigo==4){
    std::cout<<"Vidros que podem ser reciclados"<<std::endl;
    std::cout<<"-------------------------------"<<std::endl;
    std::cout<<"Copo; frasco de remedio; jarras; garrafas; vidro colorido."<<std::endl;
    }
}

void Material::NaoPodemSerReciclados(int codigo)
{
    if(codigo==1){
    std::cout<<"Metais que NAO podem ser reciclados"<<std::endl;
    std::cout<<"-----------------------------------"<<std::endl;
    std::cout<<"Latas de aerosois, inseticidas, pesticidas e tintas; pilhas"<<std::endl;
    }
    if(codigo==2){
    std::cout<<"Papeis que NAO podem ser reciclados"<<std::endl;
    std::cout<<"-----------------------------------"<<std::endl;
    std::cout<<"Papel engordurado; carbono; celofane; papel plastificado ou parafinado (fax)"<<std::endl;
    }
    if(codigo==3){
    std::cout<<"Plasticos que NAO podem ser reciclados"<<std::endl;
    std::cout<<"--------------------------------------"<<std::endl;
    std::cout<<"Fraldas descartaveis; adesivos; embalagens engorduras ou siliconizadas"<<std::endl;
    }
    if(codigo==4){
    std::cout<<"Vidros que NAO podem ser reciclados"<<std::endl;
    std::cout<<"-----------------------------------"<<std::endl;
    std::cout<<"Vidro de automoveis e janelas; pirex; espelho; tubos de TV; lâmpadas; Óculos; ampolas de medicamentos; vidros temperados planos ou de utensílios domésticos"<<std::endl;
    }
}

std::map<unsigned int, Material *> Material::materiais={};

void Material::cadastrar(Material *material)
{
	Material::materiais.insert(std::pair<unsigned int, Material *>(material->get_id(),material));
}

void Material::deletar(Material * material)
{
	Material::materiais.erase(material->get_id());
}

void Material::modificar(Material *material)
{
	std::map<unsigned int, Material *>::iterator it = Material::materiais.find(material->get_id());
	it->second=material;
}

std::map<unsigned int, Material *>  Material::listar()
{
	return materiais;
}

void Material::pesquisar()
{
}

std::vector<Material *> Material::pesquisaNome(std::string nome){
	std::vector<Material *> materiais=std::vector<Material *>();
	for ( std::map<unsigned int, Material *>::iterator it=Material::materiais.begin(); it!=Material::materiais.end(); ++it){
		Material* material = dynamic_cast<Material*>(it->second);
		if(material){
			if (material->get_nome()==nome)
				materiais.push_back(material);
		}
	}
	return materiais;
	
}

unsigned int Material::get_new_id(){
    next_id++;
    return next_id;
}
