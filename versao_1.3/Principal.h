#pragma once
#include "Pessoa.h"
#include "Universidade.h"
#include <time.h>

class Principal{
    private:
        Pessoa Einstein;
        Pessoa Newton;
        Universidade UTFPR;
        Universidade Cambridge;
        Universidade Princetal;

    int diaAtual;
    int mesAtual;
    int anoAtual;

    public:
        Principal();
        void Executa();
};