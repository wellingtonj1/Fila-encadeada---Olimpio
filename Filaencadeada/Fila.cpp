#include "Fila.h"

Fila::Fila()
{

}
bool Fila::enfileirar(Pessoa* x)
{
    if(x==0)
        return false;
    else
    {
        No* ptr= No::montaNo(x);
        ptr->setAnterior(inicio);
        inicio=ptr;
        return true;
    }
}

bool Fila::vazia()
{
    if(inicio==0)
    {
        return true;
    }
    return false;
}

Pessoa* Fila::desenfileirar()
{
    if(vazia())
        return 0;
    else
    {
        No* ptr=inicio;
        inicio=inicio->getAnterior();
        Pessoa* ret = No::desmontaNo(ptr);
        return ret;

    }
}
