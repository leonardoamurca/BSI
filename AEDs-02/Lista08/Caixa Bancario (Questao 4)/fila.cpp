#include <iostream>
#include <cstdlib>
#include <string.h>
#include "fila.h"

using namespace std;

//Verifica se a fila esta vazia
bool Fila::vazia()
{
    return (frente == NULL && tras == NULL);
}

//Inicializa um Fila
void Fila::inicializar()
{
    frente = NULL;
    tras = NULL;
    quantidade = 0;
}

//Adiciona nova pessoa ao final da fila
void Fila::enfileirar(int id, string nome, int idade)
{
    Pessoa *novo = new Pessoa();
    if(novo == NULL) {
        cout << "Nao ha memoria disponivel! " << endl;
    }
    else {
        novo->inicializarPessoa(id, nome, idade);
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

//Remove a pessoa da frente da fila
bool Fila::desenfileirar()
{
    if(vazia()) {
        cout << "Nao ha pessoas na fila ! " << endl;
        return false;
    }
    else {
        Pessoa *aux = frente;
        frente = aux->prox;
        if(frente == NULL) {
            tras == NULL;
        }
        delete aux;
        quantidade--;
        return true;
    }
}

//Esvazia a fila
void Fila::esvaziar()
{
    while(!vazia()) {
        desenfileirar();
    }
}

//Imprime todas a pessoas da fila
void Fila::imprimir()
{
    if(vazia()) {
        cout << "FILA VAZIA! " << endl;
    }
    else {
    Pessoa *aux = frente;
        while(aux != NULL) {
            cout << "ID: " << aux->id << endl;
            cout << "Nome: " << aux->nome << endl;
            cout << "Idade: " << aux->idade << endl;
            cout << endl;
            aux = aux->prox;
        }
    }
}
