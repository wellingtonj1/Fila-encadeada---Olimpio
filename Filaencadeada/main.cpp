#include <iostream>
#include "TestaFila.h"

int main()
{
    TestaFila p;
    int choose;
    do
    {
        choose=p.menu();

        switch (choose)
        {
            case 1://cria pessoa

                break;
            case 2://remove pessoa

                break;
            case 3://mostra pessoa

                break;

            case 4://fecha o programa

                break;
            default:
                break;
        }

    }while (choose!=4);

}
