// Methods of Pessoa
#include "Pessoa.h"


	

Pessoa::Pessoa(int diaNa,int mesNa,int anoNa,const char nomeP[]){
        dia = diaNa;
        mes = mesNa;
        ano = anoNa;
		strcpy(nome,nomeP);
        idade = 0;
 }
    
void Pessoa::CalculaIdade(int diaA,int mesA,int anoA){
        	
            idade = anoA - ano;

       		 if( mes > mesA)
              		idade--;
        	 else
             	 	if( mes == mesA)
                        	if( dia > diaA)
                                	idade--;

	printf("A idade de %s é %d \n",nome,idade);
}

int Pessoa::getIdade(){
	return idade;
}