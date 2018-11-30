#ifndef ARVORE_H_INCLUDED
#define ARVORE_H_INCLUDED
#include "no.h"

struct Arvore
{
    No* raiz;
    void inicializar();
    void inserir(int valor);
    No* inserirNovo(No* novo, No* raiz_atual);
    void preOrdem(No* elemento);
    void posOrdem(No* elemento);
    void emOrdem(No* elemento);
};

#endif // ARVORE_H_INCLUDED
