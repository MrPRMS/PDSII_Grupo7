#include "menuManterPessoaMain.h"

void deletarPessoa(){
	int _opcao=0;
	while(_opcao!=5){
		system("cls");
		std::cin.clear();
		std::cout << "\t*************************************************************"<<std::endl;
		std::cout << "\t*                      DELETAR PESSOA                       *"<<std::endl;
		std::cout << "\t*************************************************************"<<std::endl;
		std::cout << "\n\tComo deseja deletar:"<<std::endl;
		std::cout <<
					 "\n\t1 - CPF"
					 "\n\t2 - CNPJ"
					 "\n\t3 - Nome"
					 "\n\t4 - Razao Social"
					 "\n\t5 - Voltar" << std::endl;
		std::cout << "\n\tInforme um criterio de pesquisa e tecle enter: ";
		
		std::cin >> _opcao;
		
		switch(_opcao){
			case 1:
				{
					int i=0;
					char* cpf=new char[11];
					do{
						std::cout <<"\n\tDigite o CPF: ";
						std::cin >> cpf;
						i =validaCPF(cpf);
						if(i==0)
							std::cout << "\n\tCPF invalido!";
						std::cin.clear();		
					}while(i==0);
					std::vector<PessoaFisica *> pessoas = PessoaFisica::pesquisaPessoaCPF(cpf);
					switch(pessoas.size()){
						case 0:
							std::cout << "\n\tCPF nao encontrado!" << std::endl;
							system("pause");
							break;
						case 1:
						{
							system("cls");
							std::cin.clear();
							std::cout << "\t*************************************************************"<<std::endl;
							std::cout << "\t*                      DELETAR PESSOA                       *"<<std::endl;
							std::cout << "\t*************************************************************"<<std::endl;
							std::cout<<std::endl;
							std::cout << "\t1 pessoa encontrada com o CPF " << cpf << ":"<<std::endl;
							std::cout << "\t-------------------------------------------------------------" << std::endl;
							std::cout << "\t|";
							std::cout << std::setw(4)  << " Id ";
							std::cout << std::setw(3)  << " | ";
							std::cout << std::setw(11) << "    CPF    ";
							std::cout << std::setw(3)  << " | ";
							std::cout << std::setw(20) << "        Nome        " << std::endl;
							std::cout << "\t-------------------------------------------------------------" << std::endl;
							PessoaFisica * pf=pessoas[0];
							std::cout << "\t|";
							std::cout << std::right << std::setfill(' ') << std::setw(4) << pf->get_id();
							std::cout << std::setw(3)  << " | ";
							std::cout << std::setw(11) << pf->get_cpf();
							std::cout << std::setw(3)  << " | ";
							std::cout << std::setw(20) << pf->get_nome() << std::endl;
							char o=' ';
							while(o!='s' && o!='n' && o!='S' && o!='N'){ 
								std::cout <<"\n\tConfirmar delecao (S ou N): ";
								std::cin >> o;
								switch(o){
									case 's':
									case 'S':
										PessoaFisica::deletar(pf);
										std::cout <<"\n\tPessoa Deletada!\n";
										break;
									case 'n':
									case 'N':
										std::cout <<"\n\tOK. Pessoa Mantida!\n";
										break;
									default:
										std::cout << "\n\tOpcao inexistente! Tente outra.\n" << std::endl;
										system("pause");
										break;
								}
							}
							pf=NULL;
							delete pf;
							system("pause");
						}
						break;
						default:
							std::cout << "\n\tA pesquisa trouxe varias pessoas. Refine-a!\n" << std::endl;
							system("pause");
							break;
					}				
				}
				break;
			case 2:
				//pesquisarPessoaCNPJ();
				break;
			case 3:
				//pesquisarPessoaNome();
				break;
			case 4:
				//pesquisarPessoaRazaoSocial();
				break;				
			case 5:
				printf("Voltar\n");
				break;	
			default:				
				std::cout << "Opcao inexistente! Tente outra.\n" << std::endl;
				system("pause");
				break;
		}
	
	}
}


void listarPessoas(){
	int _opcao=0;
	while(_opcao!=3){
		system("cls");
		std::cin.clear();
		std::cout << "\t*************************************************************"<<std::endl;
		std::cout << "\t*                       LISTAR PESSOA                       *"<<std::endl;
		std::cout << "\t*************************************************************"<<std::endl;
		std::cout << "\n\tO que deseja listar:"<<std::endl;
		std::cout <<
						 "\n\t1 - Pessoa Fisica"
						 "\n\t2 - Pessoa Juridica"
						 "\n\t3 - Voltar"<< std::endl;
		std::cout << "\n\tEscolha uma das alternativas e tecle enter: ";
		std::cin >> _opcao;
		switch(_opcao){
			case 1:		
			{
				std::cout << "\t-------------------------------------------------------------" << std::endl;
				std::cout << "\t|";
				std::cout << std::setw(4) << std::left << " Id ";
				std::cout << std::setw(3)  << " | ";
				std::cout << std::setw(11) << "    CPF    ";
				std::cout << std::setw(3)  << " | ";
				std::cout << std::setw(20) << "        Nome        " << std::endl;
				std::cout << "\t-------------------------------------------------------------" << std::endl;
				PessoaFisica* pessoa;
				std::map<unsigned int, PessoaFisica *> mapa= PessoaFisica::listar();
				for ( std::map<unsigned int, PessoaFisica *>::iterator it=mapa.begin(); it!=mapa.end(); ++it){
					pessoa = it->second;
					if(pessoa){
						std::cout << "\t|";
						std::cout << std::setw(4) << pessoa->get_id();
						std::cout << std::setw(3)  << " | ";
						std::cout << std::setw(11) << pessoa->get_cpf();
						std::cout << std::setw(3)  << " | ";
						std::cout << std::setw(20) << pessoa->get_nome() << std::endl;						
					}
				}
				pessoa=NULL;
				delete pessoa;
				system("pause");
			}
			break;
			case 2:
			{
				
			}
			break;		
			case 3:
			break;			
			default:				
				std::cout << "\n\tOpcao inexistente! Tente outra.\n" << std::endl;
				system("pause");
				break;
		}
	}

}

void criarOuAlterarPessoaFisica(PessoaFisica * pfAtual){
		PessoaFisica *pf=new PessoaFisica();
		std::cout <<"\n\tDigite o CPF: ";
		std::string cpf;
		std::cin >> cpf;
		pf->set_cpf(cpf);
		std::cout <<"\n\tDigite o nome: ";
		std::string nome;
		std::cin.ignore();
		std::getline(std::cin, nome);
		pf->set_nome(nome);
		std::cin.clear();
		std::cout <<"\n\tDigite o email: ";
		std::string email;
		std::cin >> email;
		pf->set_email(email);
		std::cin.clear();
		std::cout <<"\n\tDigite o telefone: ";
		std::string telefone;
		std::cin >> telefone;
		pf->set_telefone(telefone);
		std::cin.clear();
		char o=' ';
		while(o!='s' && o!='n' && o!='S' && o!='N'){ 
			std::cout <<"\n\tConfirme (S ou N): ";
			std::cin >> o;
			switch(o){
				case 's':
				case 'S':
					if(pf->get_id()==0 && pfAtual == NULL){
						pf->set_id(PessoaFisica::get_new_id());
						PessoaFisica::cadastrar(pf);
						pf=NULL;
						delete pf;
						std::cout << "\n\tCadastro realizado com sucesso.\n" << std::endl;
					}else{
						pf->set_id(pfAtual->get_id());
						PessoaFisica::modificar(pf);
						std::cout << "\n\tAlteracao realizada com sucesso.\n" << std::endl;
						pf=NULL;
						delete pf;
					}
					break;
				case 'n':
				case 'N':
					if(pf->get_id()==0){
						delete pf;
						std::cout << "\n\tCadastro descartado.\n" << std::endl;
					}
					else{
						pf=NULL;
						delete pf;
						std::cout << "\n\tAlteracao descartada.\n" << std::endl;
					}
					break;
				default:
					std::cout << "\n\tOpcao inexistente! Tente outra.\n" << std::endl;
					system("pause");
					break;
			}
		}
}

void alterarPessoa(){
	int _opcao=0;
	while(_opcao!=5){
		system("cls");
		std::cin.clear();
		std::cout << "\t*************************************************************"<<std::endl;
		std::cout << "\t*                      ALTERAR PESSOA                       *"<<std::endl;
		std::cout << "\t*************************************************************"<<std::endl;
		std::cout << "\n\tComo deseja procurar:"<<std::endl;
		std::cout <<
					 "\n\t1 - CPF"
					 "\n\t2 - CNPJ"
					 "\n\t3 - Nome"
					 "\n\t4 - Razao Social"
					 "\n\t5 - Voltar" << std::endl;
		std::cout << "\n\tInforme um criterio de pesquisa e tecle enter: ";
		
		std::cin >> _opcao;
		
		switch(_opcao){
			case 1:
				{
					int i=0;
					char* cpf=new char[11];
					do{
						std::cout <<"\n\tDigite o CPF: ";
						std::cin >> cpf;
						i =validaCPF(cpf);
						if(i==0)
							std::cout << "\n\tCPF invalido!";
						std::cin.clear();		
					}while(i==0);
					std::vector<PessoaFisica *> pessoas = PessoaFisica::pesquisaPessoaCPF(cpf);
					switch(pessoas.size()){
						case 0:
							std::cout << "\n\tCPF nao encontrado!" << std::endl;
							system("pause");
							break;
						case 1:
						{
							system("cls");
							std::cin.clear();
							std::cout << "\t*************************************************************"<<std::endl;
							std::cout << "\t*                      ALTERAR PESSOA                       *"<<std::endl;
							std::cout << "\t*************************************************************"<<std::endl;
							std::cout<<std::endl;
							std::cout << "\t1 pessoa encontrada com o CPF " << cpf << ":"<<std::endl;
							std::cout << "\t-------------------------------------------------------------" << std::endl;
							std::cout << "\t|";
							std::cout << std::setw(4)  << " Id ";
							std::cout << std::setw(3)  << " | ";
							std::cout << std::setw(11) << "    CPF    ";
							std::cout << std::setw(3)  << " | ";
							std::cout << std::setw(20) << "        Nome        " << std::endl;
							std::cout << "\t-------------------------------------------------------------" << std::endl;
							PessoaFisica * pf=pessoas[0];
							std::cout << "\t|";
							std::cout << std::right << std::setfill(' ') << std::setw(4) << pf->get_id();
							std::cout << std::setw(3)  << " | ";
							std::cout << std::setw(11) << pf->get_cpf();
							std::cout << std::setw(3)  << " | ";
							std::cout << std::setw(20) << pf->get_nome() << std::endl;
							criarOuAlterarPessoaFisica(pf);
							pf=NULL;
							delete pf;
							system("pause");
						}
						break;
						default:
							std::cout << "\n\tA pesquisa trouxe varias pessoas. Refine-a!\n" << std::endl;
							system("pause");
							break;
					}				
				}
				break;
			case 2:
				//pesquisarPessoaCNPJ();
				break;
			case 3:
				//pesquisarPessoaNome();
				break;
			case 4:
				//pesquisarPessoaRazaoSocial();
				break;				
			case 5:
				printf("Voltar\n");
				break;	
			default:				
				std::cout << "Opcao inexistente! Tente outra.\n" << std::endl;
				system("pause");
				break;
		}
	
	}
}

void cadastrarPessoa(){
	int _opcao=0;
	while(_opcao!=1 && _opcao!=2){
		system("cls");
		std::cin.clear();
		std::cout << "\t*************************************************************"<<std::endl;
		std::cout << "\t*                     CADASTRAR PESSOA                      *"<<std::endl;
		std::cout << "\t*************************************************************"<<std::endl;
		std::cout << "\n\tO que deseja cadastrar:"<<std::endl;
		std::cout <<
						 "\n\t1 - Pessoa Fisica"
						 "\n\t2 - Pessoa Juridica"<< std::endl;
		std::cout << "\n\tEscolha uma das alternativas e tecle enter: ";
		std::cin >> _opcao;
		switch(_opcao){
			case 1:		
				criarOuAlterarPessoaFisica(NULL);
				break;
			case 2:
			{
				PessoaJuridica *pj=new PessoaJuridica();
				std::cout <<"\n\tDigite o CNPJ: ";
				std::string cnpj;
				std::cin >> cnpj;
				pj->set_cnpj(cnpj);
				std::cin.clear();
				std::cout <<"\n\tDigite o nome fantasia: ";
				std::string nome1;
				std::cin.ignore();
				std::getline(std::cin, nome1);
				pj->set_nome(nome1);
				std::cin.clear();
				std::cout <<"\n\tDigite a razao social: ";
				std::string razao1;
				std::cin.ignore();
				std::getline(std::cin, razao1);
				std::cin.ignore();
				pj->set_razaoSocial(razao1);
				std::cin.clear();
				std::cout <<"\n\tDigite o email: ";
				std::string email1;
				std::cin >> email1;
				pj->set_email(email1);
				std::cin.clear();
				std::cout <<"\n\tDigite o telefone: ";
				std::string telefone1;
				std::cin >> telefone1;
				pj->set_telefone(telefone1);
				std::cin.clear();
				char op=' ';
				while(op!='s' && op!='S' && op!='n' && op!='N'){ 
					std::cout <<"\n\tConfirme (S ou N): ";
					std::cin >> op;
					switch(op){
						case 's':
						case 'S':
							pj->set_id(PessoaJuridica::get_new_id());
							PessoaJuridica::cadastrar(pj);
							pj=NULL;
							delete pj;
							break;
						case 'n':
						case 'N':
							delete pj;
							break;
						default:
							std::cout << "\n\tOpcao inexistente! Tente outra.\n" << std::endl;
							system("pause");
							break;
					}
				}
			}
			break;				
			default:				
				std::cout << "\n\tOpcao inexistente! Tente outra.\n" << std::endl;
				system("pause");
				break;
		}
	}
}

void carregaPessoasTeste(){
	PessoaFisica * teste= new PessoaFisica();
	teste->set_id(PessoaFisica::get_new_id());
	teste->set_cpf("03482607680");
	teste->set_nome("Paulo Roberto Martins Santos");
	teste->set_email("paulormsantos@gmail.com");
	PessoaFisica::cadastrar(teste);
	
	teste= new PessoaFisica();
	teste->set_id(PessoaFisica::get_new_id());
	teste->set_cpf("03055768604");
	teste->set_nome("ANDERSON VALERIANO DE PAULA ALVES");
	teste->set_email("avpa@gmail.com");
	PessoaFisica::cadastrar(teste);
	
	teste= new PessoaFisica();
	teste->set_id(PessoaFisica::get_new_id());
	teste->set_cpf("05669855604");
	teste->set_nome("Ronaldo Tadeu Pena");
	teste->set_email("rtpena@bol.com");
	PessoaFisica::cadastrar(teste);
	
	teste= new PessoaFisica();
	teste->set_id(PessoaFisica::get_new_id());
	teste->set_cpf("15686205604");
	teste->set_nome("ROBERTO DE SOUZA FALCI");
	teste->set_email("rsfalci@gmail.com");
	PessoaFisica::cadastrar(teste);
	
	teste=NULL;
	delete teste;
}

void menuManterPessoa(){
	carregaPessoasTeste();		
	int _opcao=0;
	while(_opcao!=5){
		system("cls");
		std::cin.clear();
		std::cout << "\t*************************************************************"<<std::endl;
		std::cout << "\t*                       MANTER PESSOA                       *"<<std::endl;
		std::cout << "\t*************************************************************"<<std::endl;
		std::cout << "\n\tO que deseja fazer:"<<std::endl;
		std::cout <<
					 "\n\t1 - Cadastrar Pessoa"
					 "\n\t2 - Alterar Pessoa"
					 "\n\t3 - Deletar Pessoa"
					 "\n\t4 - Listar Pessoas"
					 "\n\t5 - Voltar" << std::endl;
		std::cout << "\n\tEscolha uma das alternativas e tecle enter: ";
		
		std::cin >> _opcao;
		
		switch(_opcao){
			case 1:				
				cadastrarPessoa();
				break;
			case 2:
				alterarPessoa();
				break;
			case 3:
				deletarPessoa();
				break;
			case 4:
				listarPessoas();
				break;				
			case 5:
				printf("Voltar\n");
				break;	
			default:				
				std::cout << "\n\tOpcao inexistente! Tente outra.\n" << std::endl;
				system("pause");
				break;
		}
	
	}
}