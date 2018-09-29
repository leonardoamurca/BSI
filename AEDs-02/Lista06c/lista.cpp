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
    if(primeiro == NULL) {
        return true;
    } return false;
}

//Insere aluno ao final da lista
void Lista::inserirAoFinal(Aluno *a)
{
    if(vazia()) {
        primeiro = a;
    } else {
        Aluno* aux = primeiro;
        while(aux->prox != NULL) {
            aux = aux->prox;
        }
        aux->prox = a;
        a->ant = aux;
    }
}

//Insere aluno ao inicio da lista
void Lista::inserirAoInicio(Aluno *a)
{
    if(!vazia()) {
        primeiro->ant = a;
        a->prox = primeiro;
    }
    primeiro = a;
}

//Pesquisa aluno na lista
Aluno* Lista::pesquisar(int a)
{
    if(vazia()) { return NULL;}
    else
    {
        Aluno* aux = primeiro;
        while(aux != NULL && aux->matricula != a) {
            aux = aux->prox;
        }
        return aux;
    }
}

//Remove aluno do inicio da lista
bool Lista::removerInicio()
{
    if(vazia()) { return false; }
    else
    {
        Aluno* aux = primeiro;
        if(aux->prox == NULL) {
            primeiro = NULL;
        } else {
            primeiro = aux->prox;
            aux->ant = NULL;
            aux->prox = NULL;
          }
        delete aux;
        return true;
    }
}

//Remover aluno do Final da lista
bool Lista::removerFinal()
{
    if(vazia()) { return NULL;}
    else
    {
        Aluno* aux = primeiro;
        while(aux->prox != NULL) {
            aux = aux->prox;
        }
        (aux->ant)->prox = NULL;
        delete aux;
        return true;
    }
}

//Imprime lista de alunos (matricula, nome, media e notas)
void Lista::imprimir()
{
    Aluno* aux = primeiro;
    int soma = 0;
    while(aux != NULL) {
        cout << "Matricula: " << aux->matricula << ",";
        cout << "Nome: " << aux->nome << ", ";
        cout << "Notas: " << "[  ";
        for(int i = 0; i < 4; i++){
            cout << aux->notas[i] << ", ";
            soma += aux->notas[i];
        }
        cout << "], ";
        cout << "Media: " << soma/4 << endl;
        aux = aux->prox;
    }
}

//Remove um aluno em qualquer posicao
bool Lista::removerAluno(int a)
{
    if(vazia()) { return NULL;}
    else
    {
        Aluno* aux = primeiro;
        while(aux != NULL && aux->matricula != a) {
            aux = aux->prox;
        }
        (aux->ant)->prox = aux->prox;
        delete aux;
        return true;
    }
}




