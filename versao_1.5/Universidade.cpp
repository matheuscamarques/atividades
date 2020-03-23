#include "Universidade.h"

Universidade::Universidade(const char nomeP[])
{
    Inicializa(nomeP);
}

void Universidade::Inicializa(const char nomeP[]){
    setNome(nomeP);
    for(int i =0; i<50;i++){
        DeptoAssociado[i]= NULL;
     }
}

void Universidade::setNome(const char nomeP[]){
    strcpy(nome,nomeP);
}

char* Universidade::getNome(){
    return nome;
}

void Universidade::setDepartamento(Departamento *DptoAssociado,int qtd){
    DeptoAssociado[qtd] =  DptoAssociado;
}

void Universidade::imprimeDepartamentos(){

    for(int i =0; i<50;i++)
        if(DeptoAssociado[i] != NULL)
            cout << DeptoAssociado[i]->getName() << endl;

}