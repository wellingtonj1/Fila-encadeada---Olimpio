#ifndef NO_H
#define NO_H
#include "Pessoa.h"

class No
{
private:
    No* anterior;
    Pessoa* dados;

public:
    No();
    void setAnterior(No*);
    void setDados(Pessoa*);
    No* getAnterior();
    No* montaNo(Pessoa*);
    Pessoa* getDados();
    Pessoa* desmontaNo(No*);

};

#endif // NO_H
