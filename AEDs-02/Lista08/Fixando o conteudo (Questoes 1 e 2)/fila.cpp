#include <iostream>
#include <cstdlib>
#include "fila.h"

using namespace std;

//Inicializa uma Fila
void Fila::inicializar()
{
    frente = NULL;
    tras = NULL;
    quantidade = 0;
}

//Verifica se uma fila esta vazia
bool Fila::vazia()
{
    return (frente == NULL && tras == NULL);
}

//Enfileira um novo elemento numa fila
void Fila::enfilerar(int elemento)
{
    //Cria uma nova instancia de Celula e verifica se ha memoria disponivel
    Celula* novo = new Celula();
    if(novo == NULL) {
        cout << "Nao ha memoria disponivel! " << endl;
    } else {
        //Inicializa o elemento a ser enfileirado
        novo->inicializarCelula(elemento);
        if(vazia()) {
            frente = novo;
            tras = novo;
        } else {
            tras->prox = novo;
            tras = novo;
        }
        quantidade++;
    }
}

//Desenfilera uma fila
bool Fila::desenfilerar()
{
    if(vazia()) {
        cout << "FILA VAZIA! " << endl;
        return false;
    } else {
        Celula *aux = frente;
        frente = aux->prox;
        if(frente == NULL) {
            tras = NULL;
        }
        delete aux;
        quantidade--;
        return true;
    }
}

//Esvazia uma fila
void Fila::esvaziar()
{
    while(!vazia()) {
        desenfilerar();
    }
}


//Imprime todos os lementos da fila
void Fila::imprimir()
{
    if(vazia()) {
        cout << "Nao ha elementos na fila! " << endl;
    } else {
        Celula *aux = frente;
        while(aux != NULL) {
            cout << aux->valor << " ";
            aux = aux->prox;
        }
    }
}
