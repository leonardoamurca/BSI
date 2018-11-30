//LEONARDO AGUILAR MURCA
#include <iostream>
#include "fila.cpp"
#include "pilha.cpp"

using namespace std;

void inverteFila(Fila *f, Pilha *p);
void removeItem(int v, Fila *f);

int main() {
    //Iniciliza uma Pilha p VAZIA
    Pilha p;
    p.inicializar();

    //Inicializa uma Fila f
    Fila f;
    f.inicializar();

    //Inserindo elementos na fila f
    f.enfilerar(5);
    f.enfilerar(10);
    f.enfilerar(15);
    f.enfilerar(20);
    f.enfilerar(25);

    //Imprime fila original
    cout << "Fila original = ";
    f.imprimir();
    cout << endl;

    //Invoca procedimento que inverte a fila f e imprime
    inverteFila(&f, &p);
    cout << "Fila invertida = ";
    f.imprimir();
    cout << endl;

    //Invoca o procedimento que remove um item da fila
    cout << "Digite o valor do item que deseja remover: " << endl;
    int v;
    cin >> v;

    removeItem(v, &f);
}

void inverteFila(Fila *f, Pilha *p)
{
   Celula *aux = f->frente;
   while(!f->vazia()) {
        p->empilhar(aux->valor);
        f->desenfilerar();
        aux = f->frente;
   }

   Celula *aux1 = p->topo;
   while(!p->vazia()) {
        f->enfilerar(aux1->valor);
        p->desempilhar();
        aux1 = p->topo;
   }
}

void removeItem(int v, Fila *f)
{
    //Inicializa uma Fila Auxiliar
    Fila fAux;
    fAux.inicializar();

    Celula *aux = f->frente;
    while(aux->valor != v) {
        fAux.enfilerar(aux->valor);
        aux = aux->prox;
        f->desenfilerar();
    }
    aux = aux->prox;
    f->desenfilerar();
    while(!f->vazia()) {
        fAux.enfilerar(aux->valor);
        aux = aux->prox;
        f->desenfilerar();
    }
    aux = fAux.frente;
    while(!fAux.vazia()) {
        f->enfilerar(aux->valor);
        aux = aux->prox;
        fAux.desenfilerar();
    }
    f->imprimir();
}
