#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <menuManterPessoaMain.h>
/*
#include "PessoaJuridica.h"
#include "PessoaFisica.h"
#include <vector>
*/

int main(int argc, char **argv)
{
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
					 "\n\t4 - Sair" << std::endl;
		std::cout << "\n\tEscolha uma das alternativas e tecle enter: ";
		std::cin >> _opcao;
		
		switch(_opcao){
			case 1:
				menuManterPessoa();
				break;
			case 2:
				printf("Manter Material:\n");
				break;
			case 3:
				printf("Agendar Coleta:\n");
				break;
			case 4:
				printf("\n\tDoe depois...tchau!\n");
				return 0;
				break;
			default:
				
				std::cout << "\n\tOpcao inexistente! Tente outra.\n" << std::endl;
				system("pause");
				break;
		}
	
	}
	return 0;
}
