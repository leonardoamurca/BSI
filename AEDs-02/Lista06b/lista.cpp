#include <iostream>
#include <string.h>
#include <cstdlib>
#include "lista.h"

using namespace std;

//Inicializa a Lista
void Lista::inicializar()
{
  cabeca = new Cliente();
  cabeca->codigo = -1;
  cabeca->prox = cabeca;
}

//Verifica se a lista esta vazia
bool Lista::vazia()
{
  return (cabeca->prox == cabeca);
}

//Inserir cliente ao final
void Lista::inserirAoFinal(Cliente *c)
{
  if(vazia()) {
    cabeca->prox = c;
    c->prox = cabeca;
  } else {
    Cliente* aux = cabeca->prox;
    while(aux->prox != cabeca) {
      aux = aux->prox;
    }
    aux->prox = c;
    c->prox = cabeca;
  }
}

//Inserir Cliente ao inicio
void Lista::inserirAoInicio(Cliente *c)
{
  Cliente* aux = cabeca->prox;
  cabeca->prox = c;
  c->prox = aux;
}

//Pesquisar Cliente
Cliente* Lista::pesquisar(int c)
{
  if(vazia()) { return NULL;}
  Cliente* aux = cabeca->prox;
  while(aux != cabeca && aux->codigo != c) {
    aux = aux->prox;
  }
  return aux;
}

//Remover cliente do inicio da lista
bool Lista::removerInicio()
{
  if(vazia()) { return false;}
  Cliente* aux = cabeca->prox;
  cabeca->prox = aux->prox;
  aux->prox == NULL;
  delete aux;
  return true;
}

//Remover cliente do final da Lista
bool Lista::removerFinal()
{
  if(vazia()) { return false; }
  Cliente* ant = cabeca;
  Cliente* atual = cabeca->prox;
  while(atual->prox != cabeca) {
    ant = atual;
    atual = atual->prox;
  }
  ant->prox = cabeca;
  atual->prox = NULL;
  delete atual;
  return true;
}

//Imprime lista de clientes
void Lista::imprimir() {
  Cliente* aux = cabeca->prox;
  while(aux != cabeca) {
    cout << "Codigo: "<< aux->codigo << ", Nome: " << aux->nome <<
     ", Saldo: R$" << aux->saldo << ",00" << endl;
    aux = aux->prox;
  }
}

//Acrescenta um valor qualquer ao saldo de um cliente especifico
bool Lista::addSaldo(int c, float valor)
{
  if(vazia()) { return false; }
  Cliente* aux = cabeca->prox;
  while(aux != cabeca && aux->codigo != c) {
    aux = aux->prox;
  }
  aux->saldo = aux->saldo + valor;
  return true;
}

//Conta o numero de clientes na lista
int Lista::numeroElementos()
{
  if(vazia()) { return 0; }
  Cliente* aux = cabeca->prox;
  int i = 0;
  while(aux != cabeca) {
    aux = aux->prox;
    i++;
  }
  return i;
}
