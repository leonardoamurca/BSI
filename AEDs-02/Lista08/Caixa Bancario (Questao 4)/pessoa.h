#ifndef PESSOA_H_INCLUDED
#define PESSOA_H_INCLUDED
#include <string.h>

using namespace std;

struct Pessoa
{
    int id;
    string nome;
    int idade;
    Pessoa *prox;
    void inicializarPessoa(int idInicial, string nomeIncial,int idadeInicial);
};

void Pessoa::inicializarPessoa(int idInicial, string nomeIncial,int idadeInicial)
{
    id = idInicial;
    nome = nomeIncial;
    idade = idadeInicial;
    prox == NULL;
}


#endif // PESSOA_H_INCLUDED
