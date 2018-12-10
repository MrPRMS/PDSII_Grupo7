#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include "menuManterPessoaMain.h"
#include "menuManterMaterialMain.h"
#include "MenuAgendamento.h"
#include "PontoDeColeta.h"

/*
#include "PessoaJuridica.h"
#include "PessoaFisica.h"
#include <vector>
*/

int main(int argc, char **argv)
{
	carregaPessoasTeste();
	carregaMateriaisTeste();
	int _opcao=0;
	while(_opcao!=4){
		system("cls");
		std::cin.clear();
		std::cout << "\t**************************************************************"<<std::endl;
		std::cout << "\t*                        MENU PRINCIPAL                      *"<<std::endl;
		std::cout << "\t**************************************************************"<<std::endl;
		std::cout << "\n\tO que deseja fazer:"<<std::endl;
		std::cout <<
					 "\n\t1 - Manter Pessoa"
					 "\n\t2 - Manter Material"
					 "\n\t3 - Agendar Coleta"
					 "\n\t4 - Pontos de Coleta"
					 "\n\t5 - Sair" << std::endl;
		std::cout << "\n\tEscolha uma das alternativas e tecle enter: ";
		std::cin >> _opcao;
		
		switch(_opcao){
			case 1:
				menuManterPessoa();
				break;
			case 2:
				menuManterMaterial();
				break;
			case 3:
				menuAgendamento();
				break;
			case 4:
				printf("\n\tPontos de Coleta\n");
				printf("\n\tEm desenvolvimento ;) \n\n");;
				break;
			case 5:
				printf("\n\tDoe depois...tchau!\n\n");
				return 0;
				break;
			default:
				
				std::cout << "\n\tOpcao inexistente! Tente outra.\n\n" << std::endl;
				system("pause");
				break;
		}
	
	}
	return 0;
}
