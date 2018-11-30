#ifndef PILHA_INCLUDED
#define PILHA_INCLUDED
#include "celula.h"

struct Pilha
{
    Celula* topo;
    int quantidade;

    bool vazia();
    void inicializar();
    void empilhar(int elemento);
    bool desempilhar();
    void esvaziar();
    void imprimir();
};


#endif // PILHA_INCLUDED
