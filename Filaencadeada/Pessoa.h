#ifndef PESSOA_H
#define PESSOA_H
#include <iostream>
#include <string>

class Pessoa
{
private:
    std::string nome,telefone;

public:
    Pessoa();
    std::string getNome() ;
    std::string getTelefone();
    void setNome(std::string);
    void setTelefone(std::string);
    std::string getpessoa();
};

#endif // PESSOA_H
