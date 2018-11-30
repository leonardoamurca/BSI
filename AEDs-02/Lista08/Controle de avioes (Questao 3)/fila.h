#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED
#include <string.h>
#include "celula.h"

struct Fila
{
    //Ponteiros e variavel de controle de qtd
    Celula *frente;
    Celula *tras;
    int quantidade;

    //Operacoes com fila
    bool vazia();
    void inicializar();
    void enfileirar(int elemento, string nome);
    bool desenfileirar();
    void esvaziar();
    void imprimir();
};


#endif // FILA_H_INCLUDED
