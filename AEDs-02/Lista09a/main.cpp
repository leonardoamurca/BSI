/*LEONARDO AGUILAR MURCA*/

#include<iostream>
#include<locale.h>
#include<windows.h>
#include "arvore.cpp"

using namespace std;

void menuInterativo(Arvore *avre);

void inserirElementos(Arvore *avre);


int main () {
    //Inicializa arvore
    Arvore avre;
    avre.inicializar();

    //Insere os elementos
    inserirElementos(&avre);

    //Imprime em Pre-Ordem, Pos-Ordem e Em Ordem
    menuInterativo(&avre);

return 0;
}

void menuInterativo(Arvore *avre)
{
    int opc;
    cout << "====== MENU ======" << endl;
        cout << "(1) - Imprime PRE-ORDEM (RED) " << endl;
        cout << "(2) - Imprime POS-ORDEM (EDR) " << endl;
        cout << "(3) - Imprime EM-ORDEM (ERD) " << endl;
        cout << "(4) - SAIR " << endl;
        cout << endl;
        cout << "Digite a impressao desejada: " << endl;
        cin >> opc;

    switch(opc) {

        case 1:
            avre->preOrdem(avre->raiz);
            break;
        case 2:
            avre->posOrdem(avre->raiz);
            break;
        case 3:
            avre->emOrdem(avre->raiz);
            break;
        case 4:
            cout << "PROGRAMA FINALIZADO! " << endl;
            break;

    }
}

void inserirElementos(Arvore *avre)
{
    //Insere elementos da arvore do exercicio
    avre->inserir(14);
    avre->inserir(4);
    avre->inserir(3);
    avre->inserir(9);
    avre->inserir(7);
    avre->inserir(5);
    avre->inserir(4);
    avre->inserir(5);
    avre->inserir(9);
    avre->inserir(15);
    avre->inserir(14);
    avre->inserir(18);
    avre->inserir(16);
    avre->inserir(17);
    avre->inserir(20);

    avre->inserir(2);
    avre->inserir(90);
    avre->inserir(30);
    avre->inserir(10);
    avre->inserir(12);
    avre->inserir(23);
    avre->inserir(19);
}
