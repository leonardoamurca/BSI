/*
============ LEONARDO AGUILAR MURÇA ============
EXERCÍCIO 05
Escreva uma função que retorne o menor elemento de um vetor de números reais.
====== TESTES ======
ENTRADAS:
7 2 1 4 5
6 3 9 7 2
SAÍDAS:
1
2

===================================================================================================
*/

#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <locale.h>

using namespace std;

const int TAM = 5;

int menor(float vet[]);

int main(){
    setlocale(LC_ALL, "Portuguese");

    float vet[TAM];
    cout << "Digite seu vetor: " << endl;
    for(int i = 0; i < TAM; i++){
        cin >> vet[i];
    }
    cout << "Menor elemento do vetor [ ";
    for(int i = 0; i < TAM; i++){
        cout << vet[i] << ", ";
    }
    cout << "] = " << menor(vet) << endl;

system("PAUSE");
return 0;
}

int menor(float vet[]){
    float menor = 10000;
    for(int i = 0; i < TAM; i++){
        if(vet[i] < menor){
            menor = vet[i];
        }
    }
    return menor;
}





