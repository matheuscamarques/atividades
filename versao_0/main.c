#include <stdio.h>



/*
    Autor: Matheus de Camargo Marques 
    RA: 2088932

    Curso: Engenharia da Computação

    Disiciplina: Técnicas de Programação
    Professor: Jean Simão

*/


typedef struct pessoa{
	int dia,mes,ano,idade;
}Pessoa;

int CalculaIdade(Pessoa Beltrano,int anoAtual);

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
    Einstein.idade = CalculaIdade(Einstein,2020);
    Newton.idade = CalculaIdade(Newton,2020);

    //Debug
    printf("%i %i\n",Einstein.idade,Newton.idade);

}

int CalculaIdade(Pessoa Beltrano,int anoAtual){
        printf("ANO %i\n",Beltrano.ano);
	return (anoAtual-Beltrano.ano);

}
