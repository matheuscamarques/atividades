#include "Departamento.h"

Departamento::Departamento(const char nomeP[]){
        Inicializadora(nomeP);
}

void Departamento::Inicializadora(const char nomeP[]){
    strcpy(nome,nomeP);

}


void Departamento::setName(const char nomeP[]){
    strcpy(nome,nomeP);
}

char* Departamento::getName(){
        return nome;
}


void Departamento::setUniversidade(Universidade *Puniversidade)
{
    UniversidadeAssociado = Puniversidade;
}