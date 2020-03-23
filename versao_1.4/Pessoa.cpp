// Methods of Pessoa
#include "Pessoa.h"




Pessoa::Pessoa(int diaNa,int mesNa,int anoNa,const char nomeP[]){
       inicializa(diaNa,mesNa,anoNa,nomeP);
 }

Pessoa::Pessoa(){
	inicializa(0,0,0);
}

void Pessoa::CalculaIdade(int diaA,int mesA,int anoA){

            idade = anoA - ano;

       		 if( mes > mesA)
              		idade--;
        	 else
             	 	if( mes == mesA)
                        	if( dia > diaA)
                                	idade--;

	cout << "A idade da Pessoa " << nome <<  " seria " << idade << endl;
}

int Pessoa::getIdade(){
	return idade;
}

void Pessoa::inicializa(int diaNa,int mesNa,int anoNa,const char nomeP[])
{
	    dia = diaNa;
        mes = mesNa;
        ano = anoNa;
		strcpy(nome,nomeP);
		
        idade = 0;
}

void Pessoa::setUniversidade(Universidade * uniname){
	UniversidadeFiliada = uniname;
}

void Pessoa::ondeTrabalha(){
		cout << nome << " trabalha para a " <<  UniversidadeFiliada->getNome() << endl;
}