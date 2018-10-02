#include "TestaFila.h"

TestaFila::TestaFila()
{

}

void TestaFila::menu()
{
    Pessoa* aux;
    bool ok;
    int x,op;
    do
    {
        std::cout<<"\n1 - Para Inserir uma pessoa a fila \n";
        std::cout<<"2 - Para Remover uma pessoa da lista \n";
        std::cout<<"3 - Para mostrar as pessoas inseridas \n";
        std::cout<<"4 - Para Sair do programa \n";
        std::cout<<"Sua escolha [  ] \b\b\b\b";
        std::cin>>x;

        switch (x)
        {
            case 1://cria pessoa

                aux=criarPessoa();
                ok=objeto.enfileirar(aux);
                if(ok) { std::cout<<"\n\tSucesso!!!\n";}
                else { std::cout<<"\n\tErro!!!\n"; }
                aux=0;

                break;
            case 2://remove pessoa

                aux=objeto.desenfileirar();
                if(aux!=0) { std::cout<<aux->getLivro(); }
                else { std::cout<<"\n\tErro!!!\n"; }
                aux=0;

                break;
            case 3://mostra pessoa

                mostrarFila();

                break;

            case 4://fecha o programa

                std::cout<<"\nEncerrado com sucesso! \n";
                break;
            default:
                break;
        }

    }while (x!=4);


}

Pessoa* TestaFila::criarPessoa()
{
    Pessoa *aux=new Pessoa;
    std::string x;
    std::cout<<"\nDigite o Nome da pessoa : ";
    std::cin.ignore();
    std::getline(std::cin,x);
    aux->setNome(x);

    std::cout<<"\nDigite o Telefone da pessoa : ";
    std::cin.ignore();
    std::getline(std::cin,x);
    aux->setTelefone(x);

    return aux;
}

void TestaFila::mostrarFila()
{
    Fila aux;
    Pessoa* mostra =0;


    while(!objeto.vazia())
    {
        mostra=objeto.desenfileirar();
        std::cout<<mostra->getpessoa()<<std::endl;
        aux.enfileirar(mostra);

    }

    while(!aux.vazia())
    {
        objeto.enfileirar(aux.desenfileirar());
    }

}
