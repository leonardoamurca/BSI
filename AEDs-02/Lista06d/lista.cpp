#include <iostream>
#include "lista.h"

using namespace std;

//Inicializa a lista
void Lista::inicializar()
{
    cabeca = new Registro();
    cabeca->prox = cabeca;
    cabeca->ant = cabeca;
}

//Verifica se a lista esta vazia
bool Lista::vazia()
{
    return (cabeca->prox == cabeca && cabeca->ant == cabeca);
}

//Insere registro ao final
void Lista::inserirAoFinal(Registro *r)
{
    if(vazia()) {
        cabeca->prox = r;
        r->ant = cabeca;
        r->prox = cabeca;
        cabeca->ant = r;
    }else {
        Registro* aux = cabeca->ant;
        aux->prox = r;
        r->prox = cabeca;
        r->ant = aux;
        cabeca->ant = r;
    }
}

//Insere registro ao inicio da lista
void Lista::inserirAoInicio(Registro *r)
{
    if(vazia()) {
        cabeca->prox = r;
        r->ant = cabeca;
        r->prox = cabeca;
        cabeca->ant = r;
    } else {
        Registro* aux = cabeca->prox;
        cabeca->prox = r;
        r->ant = cabeca;
        r->prox = aux;
        aux->ant = r;
    }
}

//Pesquisa registro na lista
Registro* Lista::pesquisar(int r)
{
    if(vazia()) {return NULL;}
    else
    {
        Registro* aux = cabeca->prox;
        while(aux != cabeca && aux->num_registro != r) {
            aux = aux->prox;
        }
        return aux;
    }
}

//Remover registro do inicio da lista
bool Lista::removerInicio()
{
    if(vazia()) { return false;}
    else
    {
        Registro* aux = cabeca->prox;
        cabeca->prox = aux->prox;
        (aux->prox)->ant = cabeca;
        aux->ant = NULL;
        aux->prox = NULL;
        delete aux;
        return true;
    }
}

//Remover final
bool Lista::removerFinal()
{
    if(vazia()) { return false;}
    else
    {
        Registro* aux = cabeca->ant;
        cabeca->ant = aux->ant;
        (aux->ant)->prox = cabeca;
        aux->prox = NULL;
        aux->ant = NULL;
        delete aux;
        return true;
    }
}

//Imprime a lista de registros
void Lista::imprimir()
{
    Registro* aux = cabeca->prox;
    while(aux != cabeca)
    {
        cout << " " << aux->num_registro;
        aux = aux->prox;

    }
}

