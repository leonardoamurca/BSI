#include <iostream>
#include <cstdlib>
#include "pilha.h"

using namespace std;

//Iniciliza a PILHA
void Pilha::inicializar()
{
    topo = NULL;
    quantidade = 0;
}

//Verifica se a pilha esta vazia
bool Pilha::vazia()
{
    return (topo == NULL);
}

//Empilha um novo bloco na pilha
void Pilha::empilhar(int elemento)
{
    Celula *novo = new Celula();
    if(novo == NULL) {
        cout << "Nao ha memoria disponivel !" << endl;
    } else {
        novo->inicializarCelula(elemento);
        novo->prox = topo;
        topo = novo;
        quantidade++;
    }
}

//Desempilha bloco da pilha
bool Pilha::desempilhar()
{
    if(vazia()) {
        cout << "Nao ha blocos na pilha!" << endl;
        return false;
    } else {
        Celula *aux = topo;
        topo = topo->prox;
        delete aux;
        quantidade--;
        return true;
    }
}

//Esvaziar pilha
void Pilha::esvaziar()
{
    while(!vazia()) {
        desempilhar();
    }
}

//Imprime pilha
void Pilha::imprimir()
{
    if(vazia()) {
        cout << "Nao ha blocos na pilha! " << endl;
    } else {
        Celula *aux = topo;
        while(aux != NULL) {
            cout << aux->valor;
            aux = aux->prox;
        }
    }
}



