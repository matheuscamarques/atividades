#include "Principal.h"

Principal::Principal(){
    Einstein.inicializa(14,3,1879,"Einstein");
    Newton.inicializa(4,1,1643,"Newton");


    DAINF.setName("DAINF");
    UTFPR.setNome("UTFPR");
    Princetal.setNome("Princital");
    Cambridge.setNome("Cambridge");

    Princetal.setDepartamento(&DAINF);
    Cambridge.setDepartamento(&DAINF);

    Einstein.setUniversidade(&Princetal);
    Newton.setUniversidade(&Cambridge);
    


    //funções vara pegar dia mes ano atuais.
    struct tm *local;
    time_t segundos;

    time(&segundos);
    local = localtime(&segundos);

    diaAtual = local -> tm_mday;
    mesAtual = local -> tm_mon + 1;
    anoAtual = local ->  tm_year + 1900;



    //Executa funções
    Executa();

}


void Principal::Executa(){
    Einstein.CalculaIdade(diaAtual,mesAtual,anoAtual);
    Newton.CalculaIdade(diaAtual,mesAtual,anoAtual);
    Einstein.ondeTrabalha();
    Newton.ondeTrabalha();
}