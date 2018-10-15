#ifndef PILHA_INCLUDED
#define PILHA_INCLUDED
#include "bloco.h"

struct Pilha
{
    Bloco* topo;
    int quantidade;

    bool vazia();
    void inicializar();
    void empilhar(char elemento);
    bool desempilhar();
    void esvaziar();
    void imprimir();
};


#endif // PILHA_INCLUDED
