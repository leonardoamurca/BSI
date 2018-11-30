#include <iostream>
#include <cstdlib>
#include <string.h>
#include "fila.cpp"

using namespace std;

void primeiroAviao(Fila *decolagem);

int main() {
    //Inicializa fila de decolagem
    Fila decolagem;
    decolagem.inicializar();

     //Adiciona avioes à fila de decolagem
    decolagem.enfileirar(1, "Millenium");
    decolagem.enfileirar(2, "Delorean");
    decolagem.enfileirar(3, "Morena");
    decolagem.enfileirar(4, "Apollo 11");
    decolagem.enfileirar(5, "Boeing 246");
    decolagem.enfileirar(6, "Embraer 666");
    decolagem.enfileirar(7, "Azul 171");

    //Imprime lista de decolagem inicial
    decolagem.imprimir();

    //Lista avioes que estao aguardando na fila de decolagem
    cout << "Numero de avioes aguardando na fila de decolagem: " << decolagem.quantidade << endl;;

    //Autoriza a decolagem do primeiro aviao:
    decolagem.desenfileirar();

    //Adiciona um aviao à fila de decolagem
    decolagem.enfileirar(8, "Sputinik");

    //Lista todos os avioes restantes na fila
    decolagem.imprimir();

    //Imprime caracteristicas do primeiro aviao da fila
    primeiroAviao(&decolagem);


return 0;
}

void primeiroAviao(Fila *decolagem)
{
    cout << "CARACTERISTICAS DO PRIMEIRO AVIAO DA FILA: " << endl;
    cout << "ID: " << decolagem->frente->valor << endl;
    cout << "Nome: " << decolagem->frente->nome << endl;
}


