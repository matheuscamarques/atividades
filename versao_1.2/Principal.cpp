#include "Principal.h"

Principal::Principal(){
    Einstein.inicializa(14,3,1879,"Einstein");
    Newton.inicializa(4,1,1643,"Newton");

    struct tm *local;
    time_t segundos;

    time(&segundos);
    local = localtime(&segundos);

    diaAtual = local -> tm_mday;
    mesAtual = local -> tm_mon + 1;
    anoAtual = local ->  tm_year + 1900;

    Executa();

}


void Principal::Executa(){
    Einstein.CalculaIdade(diaAtual,mesAtual,anoAtual);
    Newton.CalculaIdade(diaAtual,mesAtual,anoAtual);
}