// Methods of Pessoa
#include "Pessoa.h"


	

Pessoa::Pessoa(int diaNa,int mesNa,int anoNa){
        dia = diaNa;
        mes = mesNa;
        ano = anoNa;
        idade = -1;
 }
    
void Pessoa::CalculaIdade(int diaA,int mesA,int anoA){
        	
            idade = anoA - ano;

       		 if( mes > mesA)
              		idade--;
        	 else
             	 	if( mes == mesA)
                        	if( dia > diaA)
                                	idade--;
}
