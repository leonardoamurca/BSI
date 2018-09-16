#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#include "cliente.h"

struct Lista
{
  Cliente* cabeca;
  bool vazia();
  void inicializar();
  void inserirAoFinal(Cliente* c);
  void inserirAoInicio(Cliente* c);
  Cliente* pesquisar(int c);
  bool removerInicio();
  bool removerFinal();
  void imprimir();
  bool addSaldo(int c, float valor);
  int numeroElementos();
};

#endif // LISTA_H_INCLUDED
