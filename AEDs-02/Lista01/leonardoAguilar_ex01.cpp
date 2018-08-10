/*
============ LEONARDO AGUILAR MURÇA ============
EXERCÍCIO 01
Construa uma função que receba um vetor de inteiros como parâmetro e retorne a média dos valores.
====== TESTES ======
ENTRADAS:
2 4 6
1 2 3
SAÍDAS:
4
2
===================================================================================================
*/

#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <locale.h>

using namespace std;

const int TAM = 3;

int mediaVetor(int vetor[]);

int main(){
    setlocale(LC_ALL, "Portuguese");

    int vetor[TAM];

    cout << "Digite os valores do vetor: " << endl;
    for(int i = 0; i < TAM; i++){
        cin >> vetor[i];
    }

    cout << "Média do vetor: " << mediaVetor(vetor) << endl;

system("PAUSE");
return 0;
}

int mediaVetor(int vetor[]){
    int soma = 0, media = 0;
    for(int i = 0; i < TAM; i++){
        soma += vetor[i];
    }
    media = soma/TAM;
    return media;
}
