#include "TestaFila.h"

TestaFila::TestaFila()
{

}

int TestaFila::menu()
{
    int x;
    std::cout<<"1 - Para Inserir uma pessoa a fila ";
    std::cout<<"2 - Para Remover uma pessoa da lista ";
    std::cout<<"3 - Para mostrar as pessoas inseridas ";
    std::cout<<"4 - Para Sair do programa ";
    std::cin>>x;

    return x;
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

}
