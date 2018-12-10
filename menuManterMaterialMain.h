#ifndef MENUMANTERMATERIALMAIN_h
#define MENUMANTERMATERIALMAIN_h


#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <vector>
#include <iomanip>
#include "Util.h"
#include <map>
#include "Material.h"
#include "Residuo.h"
#include "Alimento.h"

void listarMateriais();

void criarOuAlterarMaterial(Material * r,TipoMaterial);

void alterarMaterial();

void deletarMaterial();

void cadastrarMaterial();

void menuManterMaterial();

void carregaMateriaisTeste();

#endif