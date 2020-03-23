#pragma once
#include <string.h>

class Universidade{

        private:
         char nome[30];

        public:
            Universidade(const char nomeP[]="");
            void Inicializa(const char nomeP[]="");
            void setNome(const char nomeP[]="");
            char* getNome();

};