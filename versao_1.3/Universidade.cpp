#include "Universidade.h"

Universidade::Universidade(const char nomeP[])
{
    Inicializa(nomeP);
}

void Universidade::Inicializa(const char nomeP[]){
    setNome(nomeP);
}

void Universidade::setNome(const char nomeP[]){
    strcpy(nome,nomeP);
}

char* Universidade::getNome(){
    return nome;
}
