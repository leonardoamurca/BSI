/*
============ LEONARDO AGUILAR MURÇA ============
EXERCÍCIO 06
Escreva uma função recursiva que retorne o menor elemento de um vetor de números reais.
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

int menorRec(float vet[], int i);

int main(){
    setlocale(LC_ALL, "Portuguese");

    float vet[TAM];
    int i = (TAM-1);

    cout << "Digite seu vetor: " << endl;
    for(int i = 0; i < TAM; i++){
        cin >> vet[i];
    }
    cout << "Menor elemento do vetor [ ";
    for(int i = 0; i < TAM; i++){
        cout << vet[i] << ", ";
    }
    cout << "] = " << menorRec(vet, i) << endl;

system("PAUSE");
return 0;
}
int menorRec(float vet[], int i){
    if(i == 1){
        return vet[0];
    }
    else{
        float menor;
        menor = menorRec(vet, i-1);
        if(menor < vet[i-1]){
            return menor;
        }
        else{
            return vet[i-1];
        }
    }


}











