#include "No.h"

No::No()
{

}

void No::setAnterior(No* x)
{
    anterior=x;
}

void No::setDados(Pessoa* x)
{
    dados=x;
}

No* No::getAnterior()
{
    return anterior;
}

static No* No::montaNo(Pessoa* aux)
{
    No* retorno = new No;
    retorno->setAnterior(0);
    retorno->setDados(aux);
    return retorno;
}

Pessoa* No::getDados()
{
    return dados;
}

static Pessoa* No::desmontaNo(No* aux)
{
    if(aux==0)
        return 0;
    else
    {
        Pessoa* retorno= aux->getDados();
        delete aux;
        return retorno;
    }
}
