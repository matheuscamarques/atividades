#pragma once
#include <string.h>
#include "Departamento.h"

class Universidade{

        private:
         char nome[30];
         Departamento *DeptoAssociado;

        public:
            Universidade(const char nomeP[]="");
            void Inicializa(const char nomeP[]="");
            void setNome(const char nomeP[]="");
            char* getNome();
            void setDepartamento(Departamento *DptoAssociado);
            

};