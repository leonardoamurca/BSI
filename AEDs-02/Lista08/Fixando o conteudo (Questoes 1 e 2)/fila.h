#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED
#include "celula.h"

struct Fila
{
    //Ponteiros e variavel de controle de qtd
    Celula* frente;
    Celula* tras;
    int quantidade;

    //Operacoes com fila
    bool vazia();
    void inicializar();
    void enfilerar(int elemento);
    bool desenfilerar();
    void esvaziar();
    void imprimir();
};

#endif // FILA_H_INCLUDED
