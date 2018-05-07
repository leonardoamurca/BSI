/*
Leonardo Aguilar
Preenche 2 vetores de 10 posições e o terceiro vetor é o resultado da soma dos elementos
de cada vetor com a respectiva posição do outro vetor. Exemplo:
vet1 = [10 27 3 -4 -6 -19 6 9 14 53 ]
vet2 = [ 0 -7 6 4 -5 15 -6 19 1 47 ]
vet3 = [10 20 9 0 -11 -4 0 28 15 100 ]
Entrada: vet1, vet2
Saída: vet3
*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <string.h>

using namespace std;

//Variável Global
const int TAM = 10;

int main(){

    //Inclusão de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declaração das variáveis
    int vet1[TAM], vet2[TAM], vet3[TAM];

    for(int i = 0; i < TAM; i++){
        vet1[i] = rand()%30 - 5;
        vet2[i] = rand()%20;
    }

    for(int i = 0; i < TAM; i++){
        vet3[i] = vet1[i] + vet2[i];
    }

    //Imprime o vet1
    cout << "vet1 = [ ";
    for(int i = 0; i < TAM; i++){
        cout << vet1[i] << " ";
    }
    cout << "]" << endl;

    //Imprime o vet2
    cout << "vet2 = [ ";
    for(int i = 0; i < TAM; i++){
        cout << vet2[i] << " ";
    }
    cout << "]" << endl;

    //Imprime o vet3
    cout << "vet3 = [ ";
    for(int i = 0; i < TAM; i++){
        cout << vet3[i] << " ";
    }
    cout << "]" << endl;


return 0;
system("PAUSE");
}
