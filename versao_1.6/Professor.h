#pragma once

#include "Pessoa.h"
#include "Universidade.h"

class Professor: public Pessoa{

    private:
    Universidade* UniversidadeFiliada;
    Departamento* DepartamentoFiliado;
    public:

    Professor(int diaNa,int mesNa,int anoNa,const char *nome="");
    Professor();
    ~Professor();


    void setUniversidade(Universidade*pu);
    void setDepartamento(Departamento*pdpto);
    void ondeTrabalha();
    void qualDepartamentoTrabalha();
};