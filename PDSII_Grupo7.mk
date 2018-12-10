##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=PDSII_Grupo7
ConfigurationName      :=Debug
WorkspacePath          :=C:/workspace/workspace
ProjectPath            :=C:/workspace/workspace/PDSII_Grupo7
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=paulo
Date                   :=09/12/2018
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/TDM-GCC-64/bin/g++.exe
SharedObjectLinkerName :=C:/TDM-GCC-64/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="PDSII_Grupo7.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/TDM-GCC-64/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/TDM-GCC-64/bin/ar.exe rcu
CXX      := C:/TDM-GCC-64/bin/g++.exe
CC       := C:/TDM-GCC-64/bin/gcc.exe
CXXFLAGS :=  -g -O0 -std=c++11 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/TDM-GCC-64/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/PontoDeColeta.cpp$(ObjectSuffix) $(IntermediateDirectory)/MenuAgendamento.cpp$(ObjectSuffix) $(IntermediateDirectory)/menuManterMaterialMain.cpp$(ObjectSuffix) $(IntermediateDirectory)/Alimento.cpp$(ObjectSuffix) $(IntermediateDirectory)/Residuo.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Material.cpp$(ObjectSuffix) $(IntermediateDirectory)/PessoaFisica.cpp$(ObjectSuffix) $(IntermediateDirectory)/Util.cpp$(ObjectSuffix) $(IntermediateDirectory)/PessoaJuridica.cpp$(ObjectSuffix) \
	$(IntermediateDirectory)/Agendamento.cpp$(ObjectSuffix) $(IntermediateDirectory)/menuManterPessoaMain.cpp$(ObjectSuffix) $(IntermediateDirectory)/Usuario.cpp$(ObjectSuffix) $(IntermediateDirectory)/Pessoa.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/PontoDeColeta.cpp$(ObjectSuffix): PontoDeColeta.cpp $(IntermediateDirectory)/PontoDeColeta.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/workspace/workspace/PDSII_Grupo7/PontoDeColeta.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/PontoDeColeta.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/PontoDeColeta.cpp$(DependSuffix): PontoDeColeta.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/PontoDeColeta.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/PontoDeColeta.cpp$(DependSuffix) -MM PontoDeColeta.cpp

$(IntermediateDirectory)/PontoDeColeta.cpp$(PreprocessSuffix): PontoDeColeta.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/PontoDeColeta.cpp$(PreprocessSuffix) PontoDeColeta.cpp

$(IntermediateDirectory)/MenuAgendamento.cpp$(ObjectSuffix): MenuAgendamento.cpp $(IntermediateDirectory)/MenuAgendamento.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/workspace/workspace/PDSII_Grupo7/MenuAgendamento.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/MenuAgendamento.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/MenuAgendamento.cpp$(DependSuffix): MenuAgendamento.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/MenuAgendamento.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/MenuAgendamento.cpp$(DependSuffix) -MM MenuAgendamento.cpp

$(IntermediateDirectory)/MenuAgendamento.cpp$(PreprocessSuffix): MenuAgendamento.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/MenuAgendamento.cpp$(PreprocessSuffix) MenuAgendamento.cpp

$(IntermediateDirectory)/menuManterMaterialMain.cpp$(ObjectSuffix): menuManterMaterialMain.cpp $(IntermediateDirectory)/menuManterMaterialMain.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/workspace/workspace/PDSII_Grupo7/menuManterMaterialMain.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/menuManterMaterialMain.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/menuManterMaterialMain.cpp$(DependSuffix): menuManterMaterialMain.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/menuManterMaterialMain.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/menuManterMaterialMain.cpp$(DependSuffix) -MM menuManterMaterialMain.cpp

$(IntermediateDirectory)/menuManterMaterialMain.cpp$(PreprocessSuffix): menuManterMaterialMain.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/menuManterMaterialMain.cpp$(PreprocessSuffix) menuManterMaterialMain.cpp

$(IntermediateDirectory)/Alimento.cpp$(ObjectSuffix): Alimento.cpp $(IntermediateDirectory)/Alimento.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/workspace/workspace/PDSII_Grupo7/Alimento.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Alimento.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Alimento.cpp$(DependSuffix): Alimento.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Alimento.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Alimento.cpp$(DependSuffix) -MM Alimento.cpp

$(IntermediateDirectory)/Alimento.cpp$(PreprocessSuffix): Alimento.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Alimento.cpp$(PreprocessSuffix) Alimento.cpp

$(IntermediateDirectory)/Residuo.cpp$(ObjectSuffix): Residuo.cpp $(IntermediateDirectory)/Residuo.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/workspace/workspace/PDSII_Grupo7/Residuo.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Residuo.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Residuo.cpp$(DependSuffix): Residuo.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Residuo.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Residuo.cpp$(DependSuffix) -MM Residuo.cpp

$(IntermediateDirectory)/Residuo.cpp$(PreprocessSuffix): Residuo.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Residuo.cpp$(PreprocessSuffix) Residuo.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/workspace/workspace/PDSII_Grupo7/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/Material.cpp$(ObjectSuffix): Material.cpp $(IntermediateDirectory)/Material.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/workspace/workspace/PDSII_Grupo7/Material.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Material.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Material.cpp$(DependSuffix): Material.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Material.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Material.cpp$(DependSuffix) -MM Material.cpp

$(IntermediateDirectory)/Material.cpp$(PreprocessSuffix): Material.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Material.cpp$(PreprocessSuffix) Material.cpp

$(IntermediateDirectory)/PessoaFisica.cpp$(ObjectSuffix): PessoaFisica.cpp $(IntermediateDirectory)/PessoaFisica.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/workspace/workspace/PDSII_Grupo7/PessoaFisica.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/PessoaFisica.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/PessoaFisica.cpp$(DependSuffix): PessoaFisica.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/PessoaFisica.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/PessoaFisica.cpp$(DependSuffix) -MM PessoaFisica.cpp

$(IntermediateDirectory)/PessoaFisica.cpp$(PreprocessSuffix): PessoaFisica.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/PessoaFisica.cpp$(PreprocessSuffix) PessoaFisica.cpp

$(IntermediateDirectory)/Util.cpp$(ObjectSuffix): Util.cpp $(IntermediateDirectory)/Util.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/workspace/workspace/PDSII_Grupo7/Util.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Util.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Util.cpp$(DependSuffix): Util.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Util.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Util.cpp$(DependSuffix) -MM Util.cpp

$(IntermediateDirectory)/Util.cpp$(PreprocessSuffix): Util.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Util.cpp$(PreprocessSuffix) Util.cpp

$(IntermediateDirectory)/PessoaJuridica.cpp$(ObjectSuffix): PessoaJuridica.cpp $(IntermediateDirectory)/PessoaJuridica.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/workspace/workspace/PDSII_Grupo7/PessoaJuridica.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/PessoaJuridica.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/PessoaJuridica.cpp$(DependSuffix): PessoaJuridica.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/PessoaJuridica.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/PessoaJuridica.cpp$(DependSuffix) -MM PessoaJuridica.cpp

$(IntermediateDirectory)/PessoaJuridica.cpp$(PreprocessSuffix): PessoaJuridica.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/PessoaJuridica.cpp$(PreprocessSuffix) PessoaJuridica.cpp

$(IntermediateDirectory)/Agendamento.cpp$(ObjectSuffix): Agendamento.cpp $(IntermediateDirectory)/Agendamento.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/workspace/workspace/PDSII_Grupo7/Agendamento.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Agendamento.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Agendamento.cpp$(DependSuffix): Agendamento.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Agendamento.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Agendamento.cpp$(DependSuffix) -MM Agendamento.cpp

$(IntermediateDirectory)/Agendamento.cpp$(PreprocessSuffix): Agendamento.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Agendamento.cpp$(PreprocessSuffix) Agendamento.cpp

$(IntermediateDirectory)/menuManterPessoaMain.cpp$(ObjectSuffix): menuManterPessoaMain.cpp $(IntermediateDirectory)/menuManterPessoaMain.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/workspace/workspace/PDSII_Grupo7/menuManterPessoaMain.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/menuManterPessoaMain.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/menuManterPessoaMain.cpp$(DependSuffix): menuManterPessoaMain.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/menuManterPessoaMain.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/menuManterPessoaMain.cpp$(DependSuffix) -MM menuManterPessoaMain.cpp

$(IntermediateDirectory)/menuManterPessoaMain.cpp$(PreprocessSuffix): menuManterPessoaMain.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/menuManterPessoaMain.cpp$(PreprocessSuffix) menuManterPessoaMain.cpp

$(IntermediateDirectory)/Usuario.cpp$(ObjectSuffix): Usuario.cpp $(IntermediateDirectory)/Usuario.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/workspace/workspace/PDSII_Grupo7/Usuario.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Usuario.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Usuario.cpp$(DependSuffix): Usuario.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Usuario.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Usuario.cpp$(DependSuffix) -MM Usuario.cpp

$(IntermediateDirectory)/Usuario.cpp$(PreprocessSuffix): Usuario.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Usuario.cpp$(PreprocessSuffix) Usuario.cpp

$(IntermediateDirectory)/Pessoa.cpp$(ObjectSuffix): Pessoa.cpp $(IntermediateDirectory)/Pessoa.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/workspace/workspace/PDSII_Grupo7/Pessoa.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Pessoa.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Pessoa.cpp$(DependSuffix): Pessoa.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Pessoa.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Pessoa.cpp$(DependSuffix) -MM Pessoa.cpp

$(IntermediateDirectory)/Pessoa.cpp$(PreprocessSuffix): Pessoa.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Pessoa.cpp$(PreprocessSuffix) Pessoa.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


