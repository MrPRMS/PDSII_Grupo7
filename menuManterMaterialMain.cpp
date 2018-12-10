#include "menuManterMaterialMain.h"

void deletarMaterial(){
	int _opcao=0;
	while(_opcao!=2){
		system("cls");
		std::cin.clear();
		std::cout << "\t*************************************************************"<<std::endl;
		std::cout << "\t*                    DELETAR MATERIAL                       *"<<std::endl;
		std::cout << "\t*************************************************************"<<std::endl;
		std::cout << "\n\tComo deseja deletar:"<<std::endl;
		std::cout <<
					 "\n\t1 - Nome"
					 "\n\t2 - Voltar" << std::endl;
		std::cout << "\n\tInforme um criterio de pesquisa e tecle enter: ";
		
		std::cin >> _opcao;
		
		switch(_opcao){
			case 1:
				{
					std::string nome;
					std::cout <<"\n\tDigite o nome: ";
					std::cin >> nome;
					std::vector<Material *> materiais = Material::pesquisaNome(nome);
					switch(materiais.size()){
						case 0:
							std::cout << "\n\tNome nao encontrado!" << std::endl;
							system("pause");
							break;
						case 1:
						{
							system("cls");
							std::cin.clear();
							std::cout << "\t*************************************************************"<<std::endl;
							std::cout << "\t*                     DELETAR MATERIAL                      *"<<std::endl;
							std::cout << "\t*************************************************************"<<std::endl;
							std::cout<<std::endl;
							std::cout << "\t1 material encontrado com o nome " << nome << ":"<<std::endl;
							std::cout << "\t-------------------------------------------------------------" << std::endl;
							std::cout << "\t|";
							std::cout << std::setw(4)  << " Id ";
							std::cout << std::setw(3)  << " | ";
							std::cout << std::setw(20) << "        Nome        " << std::endl;
							std::cout << "\t-------------------------------------------------------------" << std::endl;
							Material * mat=materiais[0];
							std::cout << "\t|";
							std::cout << std::right << std::setfill(' ') << std::setw(4) << mat->get_id();
							std::cout << std::setw(3)  << " | ";
							std::cout << std::setw(20) << mat->get_nome() << std::endl;
							char o=' ';
							while(o!='s' && o!='n' && o!='S' && o!='N'){ 
								std::cout <<"\n\tConfirmar delecao (S ou N): ";
								std::cin >> o;
								switch(o){
									case 's':
									case 'S':
										Material::deletar(mat);
										std::cout <<"\n\tMaterial Deletado!\n";
										break;
									case 'n':
									case 'N':
										std::cout <<"\n\tOK. Material Mantido!\n";
										break;
									default:
										std::cout << "\n\tOpcao inexistente! Tente outra.\n" << std::endl;
										system("pause");
										break;
								}
							}
							mat=NULL;
							delete mat;
							system("pause");
						}
						break;
						default:
							std::cout << "\n\tA pesquisa trouxe varios materiais. Refine-a!\n" << std::endl;
							system("pause");
							break;
					}				
				}
				break;
		case 2:
				printf("Voltar\n");
				break;	
			default:				
				std::cout << "Opcao inexistente! Tente outra.\n" << std::endl;
				system("pause");
				break;
		}
	
	}
}


void listarMateriais(){
	int _opcao=0;
	while(_opcao!=3){
		system("cls");
		std::cin.clear();
		std::cout << "\t*************************************************************"<<std::endl;
		std::cout << "\t*                      LISTAR MATERIAL                      *"<<std::endl;
		std::cout << "\t*************************************************************"<<std::endl;
		std::cout << "\n\tO que deseja listar:"<<std::endl;
		std::cout <<
						 "\n\t1 - Residuo"
						 "\n\t2 - Alimento - Em desenvolvimento"
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
				std::cout << std::setw(20) << "        Nome        " << std::endl;
				std::cout << "\t-------------------------------------------------------------" << std::endl;
				Material* r;
				std::map<unsigned int, Material *> mapa= Material::listar();
				for ( std::map<unsigned int, Material *>::iterator it=mapa.begin(); it!=mapa.end(); ++it){
					r = it->second;
					if(r->get_tipoMaterial()==TipoMaterial::RESIDUO){
						std::cout << "\t|";
						std::cout << std::setw(4) << r->get_id();
						std::cout << std::setw(3)  << " | ";
						std::cout << std::setw(20) << r->get_nome() << std::endl;						
					}
				}
				r=NULL;
				delete r;
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

void criarOuAlterarMaterial(Material * r, TipoMaterial tipo){
		Material *pf;
		if(TipoMaterial::RESIDUO == tipo && r==NULL)
			pf =new Residuo();
		else if (TipoMaterial::ALIMENTO ==tipo && r==NULL)
			pf = new Alimento();
			
		std::cout <<"\n\tDigite o nome: ";
		std::string nome;
		std::cin.ignore();
		std::getline(std::cin, nome);
		pf->set_nome(nome);
		std::cin.clear();
		std::cout <<"\n\tDigite o texto para reciclaveis: ";
		std::string textoReciclavel;
		std::cin.ignore();
		std::getline(std::cin, textoReciclavel);
		pf->set_textoReciclavel(textoReciclavel);
		std::cin.clear();
		std::cout <<"\n\tDigite o texto para nao reciclaveis: ";
		std::string textoNaoReciclavel;
		std::cin.ignore();
		std::getline(std::cin, textoNaoReciclavel);
		pf->set_textNaoReciclavel(textoNaoReciclavel);
		std::cin.clear();
		char o=' ';
		while(o!='s' && o!='n' && o!='S' && o!='N'){ 
			std::cout <<"\n\tConfirme (S ou N): ";
			std::cin >> o;
			switch(o){
				case 's':
				case 'S':
					if(pf->get_id()==0 && r == NULL){
						pf->set_id(Material::get_new_id());
						pf->set_tipoMaterial(tipo);
						Material::cadastrar(pf);
						pf=NULL;
						delete pf;
						std::cout << "\n\tCadastro realizado com sucesso.\n" << std::endl;
					}else{
						pf->set_id(r->get_id());
						Material::modificar(pf);
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

void alterarMaterial(){
	int _opcao=0;
	while(_opcao!=2){
		system("cls");
		std::cin.clear();
		std::cout << "\t*************************************************************"<<std::endl;
		std::cout << "\t*                    ALTERAR MATERIAL                       *"<<std::endl;
		std::cout << "\t*************************************************************"<<std::endl;
		std::cout << "\n\tComo deseja procurar:"<<std::endl;
		std::cout <<
					 "\n\t1 - Nome"
					 "\n\t2 - Voltar" << std::endl;
		std::cout << "\n\tInforme um criterio de pesquisa e tecle enter: ";
		
		std::cin >> _opcao;
		
		switch(_opcao){
			case 1:
				{
					std::string nome;
					std::cin >> nome;
					std::cin.clear();		
					std::vector<Material *> materiais = Material::pesquisaNome(nome);
					switch(materiais.size()){
						case 0:
							std::cout << "\n\tMaterial nao encontrado!" << std::endl;
							system("pause");
							break;
						case 1:
						{
							system("cls");
							std::cin.clear();
							std::cout << "\t*************************************************************"<<std::endl;
							std::cout << "\t*                     ALTERAR MATERIAL                      *"<<std::endl;
							std::cout << "\t*************************************************************"<<std::endl;
							std::cout<<std::endl;
							std::cout << "\t1 material encontrado com o nome " << nome << ":"<<std::endl;
							std::cout << "\t-------------------------------------------------------------" << std::endl;
							std::cout << "\t|";
							std::cout << std::setw(4)  << " Id ";
							std::cout << std::setw(3)  << " | ";
							std::cout << std::setw(20) << "        Nome        " << std::endl;
							std::cout << "\t-------------------------------------------------------------" << std::endl;
							Material * pf=materiais[0];
							std::cout << "\t|";
							std::cout << std::right << std::setfill(' ') << std::setw(4) << pf->get_id();
							std::cout << std::setw(3)  << " | ";
							std::cout << std::setw(20) << pf->get_nome() << std::endl;
							criarOuAlterarMaterial(pf,pf->get_tipoMaterial());
							pf=NULL;
							delete pf;
							system("pause");
						}
						break;
						default:
							std::cout << "\n\tA pesquisa trouxe varios materiais. Refine-a!\n" << std::endl;
							system("pause");
							break;
					}				
				}
				break;
			case 2:
				printf("Voltar\n");
				break;	
			default:				
				std::cout << "Opcao inexistente! Tente outra.\n" << std::endl;
				system("pause");
				break;
		}
	
	}
}

void cadastrarMaterial(){
	int _opcao=0;
	while(_opcao!=1 && _opcao!=2 && _opcao!=3){
		system("cls");
		std::cin.clear();
		std::cout << "\t*************************************************************"<<std::endl;
		std::cout << "\t*                   CADASTRAR MATERIAL                      *"<<std::endl;
		std::cout << "\t*************************************************************"<<std::endl;
		std::cout << "\n\tO que deseja cadastrar:"<<std::endl;
		std::cout <<
						 "\n\t1 - Residuo"
						 "\n\t2 - Alimento"<< std::endl;
		std::cout << "\n\tEscolha uma das alternativas e tecle enter: ";
		std::cin >> _opcao;
		switch(_opcao){
			case 1:		
				criarOuAlterarMaterial(NULL,TipoMaterial::RESIDUO);
				break;
			case 2:
				criarOuAlterarMaterial(NULL,TipoMaterial::ALIMENTO);
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

void carregaMateriaisTeste(){
	Material * teste= new Residuo();
	teste->set_id(Material::get_new_id());
	teste->set_nome("Metal");
	teste->set_textoReciclavel("");
	teste->set_textNaoReciclavel("");
	teste->set_tipoMaterial(TipoMaterial::RESIDUO);
	Material::cadastrar(teste);
	
	teste= new Residuo();
	teste->set_id(Material::get_new_id());
	teste->set_nome("Vidro");
	teste->set_textoReciclavel("");
	teste->set_textNaoReciclavel("");
	teste->set_tipoMaterial(TipoMaterial::RESIDUO);
	Material::cadastrar(teste);
	
	teste= new Residuo();
	teste->set_id(Material::get_new_id());
	teste->set_nome("Plastico");
	teste->set_textoReciclavel("");
	teste->set_textNaoReciclavel("");
	teste->set_tipoMaterial(TipoMaterial::RESIDUO);
	Material::cadastrar(teste);
	
	teste= new Residuo();
	teste->set_id(Material::get_new_id());
	teste->set_nome("Papel");
	teste->set_textoReciclavel("");
	teste->set_textNaoReciclavel("");
	teste->set_tipoMaterial(TipoMaterial::RESIDUO);
	Material::cadastrar(teste);
	
	teste=NULL;
	delete teste;
}

void menuManterMaterial(){
	int _opcao=0;
	while(_opcao!=5){
		system("cls");
		std::cin.clear();
		std::cout << "\t*************************************************************"<<std::endl;
		std::cout << "\t*                      MANTER MATERIAL                      *"<<std::endl;
		std::cout << "\t*************************************************************"<<std::endl;
		std::cout << "\n\tO que deseja fazer:"<<std::endl;
		std::cout <<
					 "\n\t1 - Cadastrar Material"
					 "\n\t2 - Alterar Material"
					 "\n\t3 - Deletar Material"
					 "\n\t4 - Listar Materiais"
					 "\n\t5 - Voltar" << std::endl;
		std::cout << "\n\tEscolha uma das alternativas e tecle enter: ";
		
		std::cin >> _opcao;
		
		switch(_opcao){
			case 1:				
				cadastrarMaterial();
				break;
			case 2:
				alterarMaterial();
				break;
			case 3:
				deletarMaterial();
				break;
			case 4:
				listarMateriais();
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