#pragma once
#include "Pessoa.h"
#include "Universidade.h"
#include "Departamento.h"
#include "Professor.h"
#include "Aluno.h"

#include <time.h>

class Principal{
    private:
        Pessoa Einstein,Newton,Christiano,Diego,Simao;
        Universidade UTFPR,Cambridge,Princeton;
        Departamento DAINF,ModaUTFPR,TecnologiaUTFPR,DAELN,FisicaPrinceton,MatematicaCambridge;

        Professor Matheus;
        Aluno Thiago;

        int diaAtual;
        int mesAtual;
        int anoAtual;

    public:
        Principal();
        void Executa();
};