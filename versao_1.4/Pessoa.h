#pragma once
#include <stdio.h>
#include <string.h>
#include <iostream>
#include "Universidade.h"

using std::cout;
using std::endl;

class Pessoa{
	private:
	int dia,mes,ano,idade;
	char nome[30];

	Universidade *UniversidadeFiliada;
	
	
	//Métodos 

    //Inicizalizadora
	public:
    Pessoa(int diaNa,int mesNa,int anoNa,const char nomeP[] = "");
	Pessoa();
	void inicializa(int diaNa,int mesNa,int anoNa,const char nomeP[] = ""); 
	  
	void CalculaIdade(int diaA,int mesA,int anoA);
	int getIdade();

	void setUniversidade(Universidade * uniname);

	void ondeTrabalha();

};