#ifndef MATERIAL_H
#define MATERIAL_H

#include <string>


class Material
{
    public:
        Material();
        virtual ~Material();
        int EscolherTipoResiduo();//Esse metodo deve ser chamado para que o usuario escolha um tipo de residuo que vai doar ou receber. So existem 4 possibilidades: retorna 1 para metal,2 para papel, 3 para plastico , 4 para vidro e 0 quando desiste de escolher um material
        void PodemSerReciclados (int codigo); // Esse metodo e o seguinte servem apenas para apresentar ao usuario os objetos que podem ou não ser recolhidos. Depois que o usuario ler a relacao deverá confirmar ou nao a escolha daquele material
        void NaoPodemSerReciclados (int codigo);


    protected:
        int _codigo;
        std::string _confirma;

    private:
};

#endif // MATERIAL_H
