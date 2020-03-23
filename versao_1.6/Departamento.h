#pragma once
#include <string.h>
#include "Universidade.h"

class Universidade;

class Departamento{
        private:
        char nome[30];
        Universidade *UniversidadeAssociado;

        public:
        Departamento(const char nomeP[] = "");
        void Inicializadora(const char nomeP[] = "");
        void setName(const char nomeP[] = "");
        char* getName();
        void setUniversidade(Universidade *Puniversidade);
};