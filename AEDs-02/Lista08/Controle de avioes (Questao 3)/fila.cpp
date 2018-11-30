#include <cstdlib>
#include <iostream>
#include <string.h>
#include "fila.h"

using namespace std;

//Verifica se a fila esta vazia
bool Fila::vazia()
{
    return (frente == NULL && tras == NULL);
}

//Inicializa a fila
void Fila::inicializar()
{
    frente = NULL;
    tras = NULL;
    quantidade = 0;
}

//Enfileira um novo elemento à fila
void Fila::enfileirar(int elemento, string nome)
{
    //Cria uma nova instancia de Celula e verifica se tem memoria disponivel
    Celula *novo = new Celula();
    if(novo == NULL) {
        cout << "Nao ha memoria disponivel! " << endl;
    } else {
        //Inicializa o elemento a ser enfileirado
        novo->inicializarCelula(elemento, nome);
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

//Desenfileira o elemento da frente da fila
bool Fila::desenfileirar()
{
    if(vazia()) {return false; }
    Celula *aux = frente;
    frente = aux->prox;
    //Se tiver apenas um elemento
    if(frente == NULL) {
        tras = NULL;
    }
    delete aux;
    return true;
}

//Esvazia a fila
void Fila::esvaziar()
{
    while(!vazia()) {
        desenfileirar();
    }
}

//Imprime todos os elementos da fila
void Fila::imprimir()
{
    Celula *aux = frente;
    while(aux != NULL) {
        cout << "ID: " << aux->valor << endl;
        cout << "Nome: " << aux->nome << endl;
        cout << endl;
        aux = aux->prox;
    }
}


