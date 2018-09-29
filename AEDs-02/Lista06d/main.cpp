#include <iostream>
#include <cstdio>
#include <cstdlib>
#include "lista.cpp"
#include "registro.h"

int elemPares(Lista reg);
int alturaElem(Lista reg, int r);

using namespace std;

int main() {
    //Incializa a lista "reg"
    Lista reg;
    reg.inicializar();

    //Preenche e imprime vetor
    int vet[10];
    for(int i = 0; i < 10; i++) {
        vet[i] = rand()%26;
    }

    cout << "vet = [";
    for(int i = 0; i < 10; i++) {
        cout << " " << vet[i];
    }
    cout << " ]" << endl;

    //Passando o vetor para a lista de registros e imprimindo-a
    Registro *r = new Registro();
    cout << "Lista reg = [";
    for(int i = 0; i < 10; i++) {
        r = new Registro();
        r->num_registro = vet[i];
        reg.inserirAoInicio(r);
    }

    reg.imprimir();
    cout << " ]" << endl;

    //Invoca funcao que conta o numero de elementos pares e imprime-a
    cout << "Numero de Registros pares = " << elemPares(reg) << endl;;

    //Entrada do registro e calculo da altura desse registro
    int registro;
    cout << "Digite o registro que deseja saber a altura: " << endl;
    cin >> registro;
    cout << "Altura do registro " << registro << " = " << alturaElem(reg, registro);
return 0;
}

int elemPares(Lista reg)
{
    int soma = 0;
    Registro* aux = reg.cabeca->prox;
    while(aux != reg.cabeca) {
        if(aux->num_registro%2 == 0) {
            soma++;
        }
        aux = aux->prox;
    }
    return soma;
}

int alturaElem(Lista reg,int r)
{
    int soma = 0;
    Registro* aux = reg.pesquisar(r);
    while(aux->prox != reg.cabeca) {
        aux = aux->prox;
        soma++;
    }
    return soma;
}
