#include "Professor.h"

Professor::Professor( int diaNa, int mesNa, int anoNa,const char *nome):
Pessoa(diaNa,mesNa,anoNa,nome){
    UniversidadeFiliada = NULL;
    DepartamentoFiliado = NULL;
}

Professor::Professor( ):
Pessoa(){
    UniversidadeFiliada = NULL;
    DepartamentoFiliado = NULL;

}

Professor::~Professor( ){
    UniversidadeFiliada = NULL;
    DepartamentoFiliado = NULL;
    }

void Professor::setUniversidade(Universidade*pu){
    UniversidadeFiliada=pu;
    }

void Professor::setDepartamento(Departamento*pdpto){
    DepartamentoFiliado=pdpto;
}

void Professor::ondeTrabalha(){
    cout << nome << " trabalha para a "<<UniversidadeFiliada->getNome() << endl;
}

void Professor::qualDepartamentoTrabalha(){
    cout << nome << " trabalha para a " << UniversidadeFiliada->getNome() << DepartamentoFiliado->getName() << endl;
}