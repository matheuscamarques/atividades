#pragma once
#include <string.h>
#include <iostream>
using std::cout;
using std::endl;
#include "Departamento.h"

class Departamento;

class Universidade{

        private:
         char nome[30];
         Departamento *DeptoAssociado[50];

        public:
            Universidade(const char nomeP[]="");
            void Inicializa(const char nomeP[]="");
            void setNome(const char nomeP[]="");
            char* getNome();
            void setDepartamento(Departamento *DptoAssociadon,int qtd);
            void imprimeDepartamentos();
            

};