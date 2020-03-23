#pragma once
#include <string.h>

class Departamento{
        private:
        char nome[30];

        public:
        Departamento(const char nomeP[] = "");
        void Inicializadora(const char nomeP[] = "");
        void setName(const char nomeP[] = "");
        char* getName();
};