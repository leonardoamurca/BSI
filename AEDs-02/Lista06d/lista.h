#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#include "registro.h"

struct Lista
{
    Registro *cabeca;
    bool vazia();
    void inicializar();
    void inserirAoFinal(Registro *r);
    void inserirAoInicio(Registro *r);
    Registro* pesquisar(int r);
    bool removerInicio();
    bool removerFinal();
    void imprimir();
};


#endif // LISTA_H_INCLUDED
