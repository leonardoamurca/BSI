#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED
#include <string>

using namespace std;


//Celula da implementacao
struct Cliente
{
  int codigo;
  string nome;
  float saldo;
  Cliente *prox;
};

#endif // FUNCIONARIO_H_INCLUDED
