#include <stdio.h>


/*
    Autor: Matheus de Camargo Marques 
    RA: 2088932

    Curso: Engenharia da Computação

    Disiciplina: Técnicas de Programação
    Professor: Jean Simão

*/

//Atenção Código compila apenas em C++ devido uso de refência escondida.


typedef struct pessoa{
	int dia,mes,ano,idade;
}Pessoa;

//Calcula idade recebe por parametro Pessoa,Dia Atual, Mes Atual,Ano Atual.
void CalculaIdade(Pessoa &Beltrano,int diaA,int mesA, int anoA);

int main(){
    Pessoa Einstein;
    Pessoa Newton;

    //Iniciando valores
    Einstein.dia = 14; 
    Einstein.mes = 3; 
    Einstein.ano = 1879;
    Einstein.idade = 0;
    Newton.dia = 4;  
    Newton.mes = 1;  
    Newton.ano = 1643;  
    Newton.idade = 0; 

    //Calculo de idade
    CalculaIdade(Einstein,17,3,2020);
    CalculaIdade(Newton,17,3,2020);

    //Debug
    printf("%i %i\n",Einstein.idade,Newton.idade);

}

void CalculaIdade(Pessoa &Beltrano,int diaA,int mesA,int anoA){
       
	Beltrano.idade = anoA - Beltrano.ano;
	
	if( Beltrano.mes > mesA)
	      Beltrano.idade--;
        else
	     if( Beltrano.mes == mesA)
		if( Beltrano.dia > diaA)
	             Beltrano.idade--;	
}
