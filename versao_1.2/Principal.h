#include "Pessoa.h"
#include <time.h>

class Principal{
    private:
        Pessoa Einstein;
        Pessoa Newton;

    int diaAtual;
    int mesAtual;
    int anoAtual;

    public:
        Principal();
        void Executa();
};