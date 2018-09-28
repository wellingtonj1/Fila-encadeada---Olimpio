#include "Pessoa.h"

Pessoa::Pessoa()
{

}
std::string Pessoa::getNome()
{
    return nome;
}

std::string Pessoa::getTelefone()
{
    return telefone;
}

void Pessoa::setNome(std::string x)
{
    nome=x;
}

void Pessoa::setTelefone(std::string x)
{
    telefone=x;
}

std::string Pessoa::getpessoa()
{
    std::string p1="\n Nome da pessoa = ";
    std::string p2="\n Telefone da pessoa = ";

    return p1+nome+p2+telefone;
}
