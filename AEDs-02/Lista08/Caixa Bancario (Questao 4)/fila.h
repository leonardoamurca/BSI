#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED
#include <string.h>
#include "pessoa.h"

struct Fila
{
    //Ponteiros e variavel de controle de pessoas na fila
    Pessoa *frente;
    Pessoa *tras;
    int quantidade;

    //Operacoes com filas
    bool vazia();
    void inicializar();
    void enfileirar(int id, string nome, int idade);
    bool desenfileirar();
    void esvaziar();
    void imprimir();
};


#endif // FILA_H_INCLUDED
