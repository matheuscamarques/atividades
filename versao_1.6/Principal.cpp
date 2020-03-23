#include "Principal.h"

Principal::Principal(){

    //funções para leitura dia mes ano atuais.
    struct tm *local;
    time_t segundos;

    time(&segundos);
    local = localtime(&segundos);

    diaAtual = local -> tm_mday;
    mesAtual = local -> tm_mon + 1;
    anoAtual = local ->  tm_year + 1900;


    //Inicializações da Classe Pessoa;
    Christiano.inicializa(17,8,1989,"Christiano");
    Diego.inicializa(6, 10, 1989, "Diego");
    Simao.inicializa(3, 10, 1976, "Jean Simão");
    Einstein.inicializa(14,3,1879,"Einstein");
    Newton.inicializa(4,1,1643,"Newton");
    
    //Inicializa classe Professor
    Matheus.inicializa(9,3,1997,"Matheus");

    //Registro do nome das Universidades 
    UTFPR.setNome("UTFPR");
    Princeton.setNome("Princital");
    Cambridge.setNome("Cambridge");
    
    //Registro do nome dos departamentos
    ModaUTFPR.setName("Moda");
    TecnologiaUTFPR.setName("Tecnologia da UTFPR");
    DAELN.setName("Eletronica da UTFPR");
    FisicaPrinceton.setName("Fisica de Princenton");
    MatematicaCambridge.setName("Matematica de Cambridge");


    //TO MUITO OCUPADO.............

    //Agregação dos Departamentos as Universidades.
    UTFPR.setDepartamento(&DAELN, 0);
    UTFPR.setDepartamento(&ModaUTFPR, 1);
    UTFPR.setDepartamento(&TecnologiaUTFPR, 2);
    Princeton.setDepartamento(&FisicaPrinceton, 0);
    Cambridge.setDepartamento(&MatematicaCambridge, 0);

    
    DAELN.setUniversidade(&UTFPR);
    //Executa funções
    Executa();

}


void Principal::Executa(){

    //Cálculo de Idades
    Einstein.CalculaIdade(diaAtual,mesAtual,anoAtual);
    Newton.CalculaIdade(diaAtual,mesAtual,anoAtual);
    Einstein.CalculaIdade(diaAtual,mesAtual,anoAtual);
    Newton.CalculaIdade(diaAtual,mesAtual,anoAtual);
    Christiano.CalculaIdade(diaAtual,mesAtual,anoAtual);
    Diego.CalculaIdade(diaAtual,mesAtual,anoAtual);
    Simao.CalculaIdade(diaAtual,mesAtual,anoAtual);

    printf("\n");

    //Filiação a universidade
    Einstein.setUniversidade(&Princeton);
    Newton.setUniversidade(&Cambridge);
    Christiano.setUniversidade(&UTFPR);
    Diego.setUniversidade(&UTFPR);
    Simao.setUniversidade(&UTFPR);
    Matheus.setUniversidade(&UTFPR);

    //"Filiação" ao departamento.
    Christiano.setDepartamento(&ModaUTFPR);
    Diego.setDepartamento(&TecnologiaUTFPR);
    Simao.setDepartamento(&DAELN);
    Einstein.setDepartamento(&FisicaPrinceton);
    Newton.setDepartamento(&MatematicaCambridge);
    Matheus.setDepartamento(&DAELN);
    
    //Universidade que a Pessoa trabalha.
    Christiano.ondeTrabalha();
    Diego.ondeTrabalha();
    Simao.ondeTrabalha();
    Einstein.ondeTrabalha();
    Newton.ondeTrabalha();
    Matheus.ondeTrabalha();
     printf("\n");
    //Departamento que a Pessoa trabalha.
    Christiano.qualDepartamentoTrabalha();
    Diego.qualDepartamentoTrabalha();
    Simao.qualDepartamentoTrabalha();
    Einstein.qualDepartamentoTrabalha();
    Newton.qualDepartamentoTrabalha();
    Matheus.qualDepartamentoTrabalha();
     printf("\n");

     
}