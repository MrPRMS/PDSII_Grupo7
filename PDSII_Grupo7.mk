##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
ObjectSuffix           :=.o
DependSuffix           :=.o.d
SourceSwitch           :=-c 
ObjectSwitch           :=-o
IncludeSwitch          :=-I
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
OutputSwitch           :=-o

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:\TDM-GCC-64\bin\ar.exe rcu
CXX      := C:\TDM-GCC-64\bin\g++.exe
CC       := C:\TDM-GCC-64\bin\gcc.exe
CXXFLAGS :=  -g -O0 -std=c++11 -Wall 
CFLAGS   :=  -g -O0 -Wall 
ASFLAGS  := 
AS       := C:\TDM-GCC-64\bin\as.exe

all: main

PontoDeColeta.cpp.o: PontoDeColeta.cpp PontoDeColeta.cpp.o.d
	$(CXX)  $(SourceSwitch) "PontoDeColeta.cpp" $(CXXFLAGS) $(ObjectSwitch)PontoDeColeta.cpp.o $(IncludePath)
PontoDeColeta.cpp.o.d: PontoDeColeta.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePath) -MG -MP -MTPontoDeColeta.cpp.o -MFPontoDeColeta.cpp.o.d -MM PontoDeColeta.cpp

PontoDeColeta.cpp-i: PontoDeColeta.cpp
	$(CXX) $(CXXFLAGS)  $(IncludePath) -E $(OutputSwitch) PontoDeColeta.cpp-i PontoDeColeta.cpp

MenuAgendamento.cpp.o: MenuAgendamento.cpp MenuAgendamento.cpp.o.d
	$(CXX)  $(SourceSwitch) "MenuAgendamento.cpp" $(CXXFLAGS) $(ObjectSwitch)MenuAgendamento.cpp.o $(IncludePath)
MenuAgendamento.cpp.o.d: MenuAgendamento.cpp
	@$(CXX) $(CXXFLAGS)  $(IncludePath) -MG -MP -MTMenuAgendamento.cpp.o -MFMenuAgendamento.cpp.o.d -MM MenuAgendamento.cpp

MenuAgendamento.cpp-i: MenuAgendamento.cpp
	$(CXX) $(CXXFLAGS)  $(IncludePath) -E $(OutputSwitch) MenuAgendamento.cpp-i MenuAgendamento.cpp

menuManterMaterialMain.cpp.o: menuManterMaterialMain.cpp menuManterMaterialMain.cpp.o.d
	$(CXX)  $(SourceSwitch) "menuManterMaterialMain.cpp" $(CXXFLAGS) $(ObjectSwitch)menuManterMaterialMain.cpp.o $(IncludePath)
menuManterMaterialMain.cpp.o.d: menuManterMaterialMain.cpp
	@$(CXX) $(CXXFLAGS)  $(IncludePath) -MG -MP -MTmenuManterMaterialMain.cpp.o -MFmenuManterMaterialMain.cpp.o.d -MM menuManterMaterialMain.cpp

menuManterMaterialMain.cpp-i: menuManterMaterialMain.cpp
	$(CXX) $(CXXFLAGS)  $(IncludePath) -E $(OutputSwitch) menuManterMaterialMain.cpp-i menuManterMaterialMain.cpp

Alimento.cpp.o: Alimento.cpp Alimento.cpp.o.d
	$(CXX)  $(SourceSwitch) "Alimento.cpp" $(CXXFLAGS) $(ObjectSwitch)Alimento.cpp.o $(IncludePath)
Alimento.cpp.o.d: Alimento.cpp
	@$(CXX) $(CXXFLAGS)  $(IncludePath) -MG -MP -MTAlimento.cpp.o -MFAlimento.cpp.o.d -MM Alimento.cpp

Alimento.cpp-i: Alimento.cpp
	$(CXX) $(CXXFLAGS)  $(IncludePath) -E $(OutputSwitch) Alimento.cpp-i Alimento.cpp

Residuo.cpp.o: Residuo.cpp Residuo.cpp.o.d
	$(CXX)  $(SourceSwitch) "Residuo.cpp" $(CXXFLAGS) $(ObjectSwitch)Residuo.cpp.o $(IncludePath)
Residuo.cpp.o.d: Residuo.cpp
	@$(CXX) $(CXXFLAGS)  $(IncludePath) -MG -MP -MTResiduo.cpp.o -MFResiduo.cpp.o.d -MM Residuo.cpp

Residuo.cpp-i: Residuo.cpp
	$(CXX) $(CXXFLAGS)  $(IncludePath) -E $(OutputSwitch) Residuo.cpp-i Residuo.cpp

main.cpp.o: main.cpp main.cpp.o.d
	$(CXX)  $(SourceSwitch) "main.cpp" $(CXXFLAGS) $(ObjectSwitch)main.cpp.o $(IncludePath)
main.cpp.o.d: main.cpp
	@$(CXX) $(CXXFLAGS)  $(IncludePath) -MG -MP -MTmain.cpp.o -MFmain.cpp.o.d -MM main.cpp

main.cpp-i: main.cpp
	$(CXX) $(CXXFLAGS)  $(IncludePath) -E $(OutputSwitch) main.cpp-i main.cpp

Material.cpp.o: Material.cpp Material.cpp.o.d
	$(CXX)  $(SourceSwitch) "Material.cpp" $(CXXFLAGS) $(ObjectSwitch)Material.cpp.o $(IncludePath)
Material.cpp.o.d: Material.cpp
	@$(CXX) $(CXXFLAGS)  $(IncludePath) -MG -MP -MTMaterial.cpp.o -MFMaterial.cpp.o.d -MM Material.cpp

Material.cpp-i: Material.cpp
	$(CXX) $(CXXFLAGS)  $(IncludePath) -E $(OutputSwitch) Material.cpp-i Material.cpp

PessoaFisica.cpp.o: PessoaFisica.cpp PessoaFisica.cpp.o.d
	$(CXX)  $(SourceSwitch) "PessoaFisica.cpp" $(CXXFLAGS) $(ObjectSwitch)PessoaFisica.cpp.o $(IncludePath)
PessoaFisica.cpp.o.d: PessoaFisica.cpp
	@$(CXX) $(CXXFLAGS)  $(IncludePath) -MG -MP -MTPessoaFisica.cpp.o -MFPessoaFisica.cpp.o.d -MM PessoaFisica.cpp

PessoaFisica.cpp-i: PessoaFisica.cpp
	$(CXX) $(CXXFLAGS)  $(IncludePath) -E $(OutputSwitch) PessoaFisica.cpp-i PessoaFisica.cpp

Util.cpp.o: Util.cpp Util.cpp.o.d
	$(CXX)  $(SourceSwitch) "Util.cpp" $(CXXFLAGS) $(ObjectSwitch)Util.cpp.o $(IncludePath)
Util.cpp.o.d: Util.cpp
	@$(CXX) $(CXXFLAGS)  $(IncludePath) -MG -MP -MTUtil.cpp.o -MFUtil.cpp.o.d -MM Util.cpp

Util.cpp-i: Util.cpp
	$(CXX) $(CXXFLAGS)  $(IncludePath) -E $(OutputSwitch) Util.cpp-i Util.cpp

PessoaJuridica.cpp.o: PessoaJuridica.cpp PessoaJuridica.cpp.o.d
	$(CXX)  $(SourceSwitch) "PessoaJuridica.cpp" $(CXXFLAGS) $(ObjectSwitch)PessoaJuridica.cpp.o $(IncludePath)
PessoaJuridica.cpp.o.d: PessoaJuridica.cpp
	@$(CXX) $(CXXFLAGS)  $(IncludePath) -MG -MP -MTPessoaJuridica.cpp.o -MFPessoaJuridica.cpp.o.d -MM PessoaJuridica.cpp

PessoaJuridica.cpp-i: PessoaJuridica.cpp
	$(CXX) $(CXXFLAGS)  $(IncludePath) -E $(OutputSwitch) PessoaJuridica.cpp-i PessoaJuridica.cpp

Agendamento.cpp.o: Agendamento.cpp Agendamento.cpp.o.d
	$(CXX)  $(SourceSwitch) "Agendamento.cpp" $(CXXFLAGS) $(ObjectSwitch)Agendamento.cpp.o $(IncludePath)
Agendamento.cpp.o.d: Agendamento.cpp
	@$(CXX) $(CXXFLAGS)  $(IncludePath) -MG -MP -MTAgendamento.cpp.o -MFAgendamento.cpp.o.d -MM Agendamento.cpp

Agendamento.cpp-i: Agendamento.cpp
	$(CXX) $(CXXFLAGS)  $(IncludePath) -E $(OutputSwitch) Agendamento.cpp-i Agendamento.cpp

menuManterPessoaMain.cpp.o: menuManterPessoaMain.cpp menuManterPessoaMain.cpp.o.d
	$(CXX)  $(SourceSwitch) "menuManterPessoaMain.cpp" $(CXXFLAGS) $(ObjectSwitch)menuManterPessoaMain.cpp.o $(IncludePath)
menuManterPessoaMain.cpp.o.d: menuManterPessoaMain.cpp
	@$(CXX) $(CXXFLAGS)  $(IncludePath) -MG -MP -MTmenuManterPessoaMain.cpp.o -MFmenuManterPessoaMain.cpp.o.d -MM menuManterPessoaMain.cpp

menuManterPessoaMain.cpp-i: menuManterPessoaMain.cpp
	$(CXX) $(CXXFLAGS)  $(IncludePath) -E $(OutputSwitch) menuManterPessoaMain.cpp-i menuManterPessoaMain.cpp

Usuario.cpp.o: Usuario.cpp Usuario.cpp.o.d
	$(CXX)  $(SourceSwitch) "Usuario.cpp" $(CXXFLAGS) $(ObjectSwitch)Usuario.cpp.o $(IncludePath)
Usuario.cpp.o.d: Usuario.cpp
	@$(CXX) $(CXXFLAGS)  $(IncludePath) -MG -MP -MTUsuario.cpp.o -MFUsuario.cpp.o.d -MM Usuario.cpp

Usuario.cpp-i: Usuario.cpp
	$(CXX) $(CXXFLAGS)  $(IncludePath) -E $(OutputSwitch) Usuario.cpp-i Usuario.cpp

Pessoa.cpp.o: Pessoa.cpp Pessoa.cpp.o.d
	$(CXX)  $(SourceSwitch) "Pessoa.cpp" $(CXXFLAGS) $(ObjectSwitch)Pessoa.cpp.o $(IncludePath)
Pessoa.cpp.o.d: Pessoa.cpp
	@$(CXX) $(CXXFLAGS)  $(IncludePath) -MG -MP -MTPessoa.cpp.o -MFPessoa.cpp.o.d -MM Pessoa.cpp

Pessoa.cpp-i: Pessoa.cpp
	$(CXX) $(CXXFLAGS)  $(IncludePath) -E $(OutputSwitch) Pessoa.cpp-i Pessoa.cpp
	
main: PontoDeColeta.cpp.o MenuAgendamento.cpp.o menuManterMaterialMain.cpp.o Alimento.cpp.o Residuo.cpp.o main.cpp.o Material.cpp.o PessoaFisica.cpp.o Util.cpp.o PessoaJuridica.cpp.o Agendamento.cpp.o menuManterPessoaMain.cpp.o Usuario.cpp.o Pessoa.cpp.o   
	${CXX} ${CXXFLAGS} -o PDSII_Grupo7 PontoDeColeta.cpp.o MenuAgendamento.cpp.o menuManterMaterialMain.cpp.o Alimento.cpp.o Residuo.cpp.o main.cpp.o Material.cpp.o PessoaFisica.cpp.o Util.cpp.o PessoaJuridica.cpp.o Agendamento.cpp.o menuManterPessoaMain.cpp.o Usuario.cpp.o Pessoa.cpp.o   

# Rule for cleaning files generated during compilation.
# Call 'make clean' to use it
clean:
	rm -f PDSII_Grupo7 *.o *.d

