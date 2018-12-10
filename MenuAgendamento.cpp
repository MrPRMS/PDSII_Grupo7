#include "MenuAgendamento.h"

void deletarAgendamento(){
	//std::cout<<"\n\t\tFunção MenuAgendamento::deletarAgendamento\n";
	std::cout<<"\n\t\tFuncao em desenvolvimento ;)\n\n";
	system("pause");
}

void listarAgendamentos(){ 
	//std::cout<<"n\\t\tFunção MenuAgendamento::listarAgendamentos\n\n";
	std::cout<<"\n\t\tFuncao em desenvolvimento ;)\n\n";
	system("pause");
}

void alterarAgendamento(){
	//std::cout<<"\n\t\tFunção MenuAgendamento::alterarAgendamento\n";
	std::cout<<"\n\t\tFuncao em desenvolvimento ;)\n\n";
	system("pause");
}

void cadastrarAgendamento(){
	//std::cout<<"\n\t\tFunção MenuAgendamento::cadastrarAgendamento\n";
	system("pause");

	system("cls");
	std::cin.clear();
	std::cout << "\t*************************************************************"<<std::endl;
	std::cout << "\t*                  CADASTRAR AGENDAMENTO                    *"<<std::endl;
	std::cout << "\t*************************************************************"<<std::endl;

	Agendamento *agendamento=new Agendamento();			//ponteiro para objeto tipo Agendamento
	std::cout <<"\n\tDigite a data: ";
	
	std::string data;
	std::cin >> data;
	agendamento->set_data(data);
	std::cin.clear();
	
	std::cout <<"\n\tDigite o local: ";
	std::string local;
	std::cin.ignore();
	std::getline(std::cin, local);
	agendamento->set_local(local);
	std::cin.clear();
	
	std::cout <<"\n\tDigite o nome do doador: ";
	Pessoa doador;									//objeto doador
	std::string nomeDoador;							//nome do doador
	std::cin.ignore();								//
	std::getline(std::cin, nomeDoador);				//lê o nome do doador
	//std::cin.ignore();							//
	doador.set_nome(nomeDoador);					//atribui o nome ao doador
	agendamento->set_doador(doador);				//repassa o doador ao agendamento
	std::cin.clear();								//
	
	std::cout <<"\n\tDigite o nome do receptor: ";
	Pessoa receptor;									//objeto receptor
	std::string nomeReceptor;							//nome do receptor
	std::cin.ignore();									//
	std::getline(std::cin, nomeReceptor);				//lê o nome do receptor
	//std::cin.ignore();								//
	receptor.set_nome(nomeReceptor);					//atribui o nome ao receptor
	agendamento->set_receptor(receptor);				//repassa o receptor ao agendamento
	std::cin.clear();									//

	std::cout <<"\n\tDigite o material: ";
	Material material;								//objeto doador
	int numMaterial;								//nome do doador
	std::cin.ignore();								//
	std::cin>>numMaterial;							//lê o número do material
	//std::cin.ignore();								//
	material.set_codigo(numMaterial);				//atribui o numero do material
	agendamento->set_material(material);			//repassa o material ao agendamento
	std::cin.clear();								//

	
	char op=' ';
	while(op!='s' && op!='S' && op!='n' && op!='N'){ 
		std::cout <<"\n\tConfirme (S ou N): ";
		std::cin >> op;
		switch(op){
			case 's':
			case 'S':
				agendamento->set_id(Agendamento::get_new_id());
				Agendamento::cadastrar(agendamento);
				agendamento=NULL;
				delete agendamento;
				break;
			case 'n':
			case 'N':
				delete agendamento;
				break;
			default:
				std::cout << "\n\tOpcao inexistente! Tente outra.\n" << std::endl;
				system("pause");
				break;
		}
	}

}

void menuAgendamento(){
		//std::cout<<"\n\t\tFunção MenuAgendamento::menuAgendamento\n\n";
		system("pause");
		
	//carregaAgendamentossTeste();		
	int _opcao=0;
	while(_opcao!=5){
		system("cls");
		std::cin.clear();
		std::cout << "\t*************************************************************"<<std::endl;
		std::cout << "\t*                        AGENDAMENTO                        *"<<std::endl;
		std::cout << "\t*************************************************************"<<std::endl;
		std::cout << "\n\tO que deseja fazer:"<<std::endl;
		std::cout <<
					 "\n\t1 - Cadastrar Agendamento"
					 "\n\t2 - Alterar Agendamento"
					 "\n\t3 - Deletar Agendamento"
					 "\n\t4 - Listar Agendamentos"
					 "\n\t5 - Voltar" << std::endl;
		std::cout << "\n\tEscolha uma das alternativas e tecle enter: ";
		
		std::cin >> _opcao;
		
		switch(_opcao){
			case 1:				
				cadastrarAgendamento();
				break;
			case 2:
				alterarAgendamento();
				break;
			case 3:
				deletarAgendamento();
				break;
			case 4:
				listarAgendamentos();
				break;				
			case 5:
				printf("Voltar\n");
				break;	
			default:				
				std::cout << "\n\tOpcao inexistente. Tente novamente!\n" << std::endl;
				system("pause");
				break;
		}
	
	}
}
