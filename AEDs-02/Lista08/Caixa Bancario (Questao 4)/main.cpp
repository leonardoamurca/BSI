#include <iostream>
#include <cstdlib>
#include "fila.cpp"

using namespace std;

void identificaIdosos(Fila *bancoNormal, Fila *bancoPrioridade);

int main() {

    //Iniciliza fila de pessoas no bancoNormal
    Fila bancoNormal;
    bancoNormal.inicializar();

    //Iniciliza fila de pessoas no bancoPrioridade
    Fila bancoPrioridade;
    bancoPrioridade.inicializar();

    bancoNormal.enfileirar(1, "Junin", 21);
    bancoNormal.enfileirar(2, "Verine", 70);
    bancoNormal.enfileirar(3, "Julesca", 30);
    bancoNormal.enfileirar(4, "Xavier", 66);
    bancoNormal.enfileirar(5, "Maria", 80);
    cout << "Fila inicial: " << endl;
    bancoNormal.imprimir();

    identificaIdosos(&bancoNormal, &bancoPrioridade);
    bancoNormal.imprimir();
    //bancoPrioridade.imprimir();
    //bancoNormal.imprimir();

return 0;
}

void identificaIdosos(Fila *bancoNormal, Fila *bancoPrioridade)
{
    //Inicializa fila auxiliar
    Fila fAux;
    fAux.inicializar();

     //Inicializa fila auxiliar
    Fila fAuxiliar;
    fAuxiliar.inicializar();

    Pessoa *aux = bancoNormal->frente;
    while(aux != NULL) {
        if(aux->idade >= 60) {
            fAux.enfileirar(aux->id, aux->nome, aux->idade);
        } else {
            fAuxiliar.enfileirar(aux->id, aux->nome, aux->idade);
        }
        bancoNormal->desenfileirar();
        aux = aux->prox;
    }
    fAuxiliar.imprimir();
    fAux.imprimir();
}
