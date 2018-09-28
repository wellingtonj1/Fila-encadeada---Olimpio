#ifndef TESTAFILA_H
#define TESTAFILA_H
#include "Fila.h"

class TestaFila
{
private:
    Fila objeto;
public:
    TestaFila();
    int menu();
    Pessoa* criarPessoa();
    void mostrarFila();

};

#endif // TESTAFILA_H
