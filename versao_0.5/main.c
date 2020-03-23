#include <stdio.h>
 
 /*
    Autor: Matheus de Camargo Marques 
    RA: 2088932

    Curso: Engenharia da Computação

    Disiciplina: Técnicas de Programação
    Professor: Jean Simão

*/

//Atenção Código compila apenas em C++ devido uso de refência escondida.
class Pessoa{
	public:
	int dia,mes,ano,idade;
	
	//Métodos 

    //Inicizalizadora

    Pessoa(int diaNa,int mesNa,int anoNa){
        dia = diaNa;
        mes = mesNa;
        ano = anoNa;
        idade = -1;
    }
    
	void CalculaIdade(int diaA,int mesA,int anoA){
        	idade = anoA - ano;

       		 if( mes > mesA)
              		idade--;
        	 else
             	 	if( mes == mesA)
                        	if( dia > diaA)
                                	idade--;
	}

};

int main(){

    //Classes Iniciadas
    Pessoa Einstein(12,3,1879);
    Pessoa Newton(4,1,1643);

    //Calculo de idade
    Einstein.CalculaIdade(17,3,2020);
    Newton.CalculaIdade(17,3,2020);

    //Debug
    printf("%i %i\n",Einstein.idade,Newton.idade);

}

