#include <iostream>
#include <string.h>
#include "lista.h"

using namespace std;

//Inicializa a lista
void Lista::inicializar()
{
    primeiro = NULL;
}

//Verifica se a lista esta vazia
bool Lista::vazia()
{
    if(primeiro == NULL){
        return true;
    } return false;
}

//Insere funcionario ao final da lista
void Lista::inserirAoFinal(Funcionario *f)
{
    if(vazia()){ primeiro = f;}
    else
    {
        Funcionario *aux = primeiro;
        while(aux->prox != NULL){
            aux = aux->prox;
        }
        aux->prox = f;
    }
}

//Insere funcionario ao inicio da lista
void Lista::inserirAoInicio(Funcionario *f)
{
   f->prox = primeiro;
   primeiro = f;
}

//Pesquisa funcionario na lista
Funcionario* Lista::pesquisar(int v)
{
    if(vazia()) {return NULL;}
    else
    {
        Funcionario *aux = primeiro;
        while(aux != NULL && aux->matricula != v){
            aux = aux->prox;
        }
        return aux;
    }
}

//Remove o funcionario do inicio da lista
bool Lista::removerInicio()
{
    if(vazia()) { return false; }
    else
    {
        Funcionario *aux = primeiro;
        if(aux->prox == NULL){
            primeiro = NULL;
        }
        else{
            primeiro = aux->prox;
            aux->prox = NULL; //Ponteiro que aponta pro NADA
        }
        delete aux;
        return true;
    }
}

//Remove o funcionario do final da lista
bool Lista::removerFinal()
{
    if(vazia()) { return false; }
    else
    {
        Funcionario *ant = primeiro;
        Funcionario *atual = primeiro->prox;
        if(atual != NULL){
            while(atual->prox != NULL){
                ant = atual;
                atual = atual->prox;
            }
            ant->prox = NULL;
        }
        else {
            atual = ant;
            primeiro = NULL;
        }
        delete atual;
        return true;
    }
}

void Lista::imprimir()
{
    Funcionario *aux = primeiro;
    cout << "\n====== LISTA DE FUNCIONARIOS ======" << endl;
    while(aux != NULL){
        cout << aux->nome <<", " << aux->salario << endl;
        aux = aux->prox;
    }
}



