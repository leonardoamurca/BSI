#ifndef FUNCIONARIO_H_INCLUDED
#define FUNCIONARIO_H_INCLUDED
#include <string>

using namespace std;


//C�lula da implementa��o
struct Funcionario
{
    int matricula;
    string nome;
    float salario;
    Funcionario *prox;
};

#endif // FUNCIONARIO_H_INCLUDED
