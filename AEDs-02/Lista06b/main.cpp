//Leonardo Aguilar Murca
#include <iostream>
#include <string.h>
#include "lista.cpp"
#include <cstdio>

using namespace std;

int main() {
  //Inicializa a Lista
  Lista client;
  client.inicializar();

  //Insercoes
  Cliente *c = new Cliente();

  //Cliente 1
  c = new Cliente();
  c->codigo = 1;
  c->nome = "Leonardo Aguilar";
  c->saldo = 1300;
  client.inserirAoInicio(c);

  //Cliente 2
  c = new Cliente();
  c->codigo = 2;
  c->nome = "Mateus Filipe";
  c->saldo = 1400;
  client.inserirAoInicio(c);

  //Cliente 3
  c = new Cliente();
  c->codigo = 3;
  c->nome = "Aldryn Vianna";
  c->saldo = 1300;
  client.inserirAoInicio(c);

  client.imprimir();
  client.addSaldo(2, 100); //Adicionar R$100,00 ao saldo do cliente 2
  client.imprimir();
  cout << "A empresa possui " << client.numeroElementos() << " clientes!" << endl; //Imprime o numero de clientes da lista

  client.removerInicio(); //Remove o primeiro cliente
  client.imprimir(); cout << endl;

  client.removerFinal(); // Remove o ultimo cliente
  client.imprimir();cout << endl;
  return 0;
}
