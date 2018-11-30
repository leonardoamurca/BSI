#ifndef CELULA_H_INCLUDED
#define CELULA_H_INCLUDED
#include <string.h>

using namespace std;

struct Celula
{
    int valor;
    string nome;
    Celula *prox;
    void inicializarCelula(int valorInicial, string nomeInicial);
};

void Celula::inicializarCelula(int valorInicial, string nomeInicial)
{
    valor = valorInicial;
    nome = nomeInicial;
    prox = NULL;
}
#endif // CELULA_H_INCLUDED
