/*
Leonardo Aguilar
Calcula o quadrado das posi��es de um vetor
Entrada:
Sa�da: Elementos do vetor
*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>

using namespace std;

//Vari�vel Global
const int TAM = 10;

int main(){

    //Inclus�o de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declara��o de vari�vel
    int i, vet[TAM];

    //Calcula o quadrado das posi��es
    for(int i = 0; i < TAM; i++){
        vet[i] = i*i;
    }

    //Sa�da de dados
    for(int i = 0; i < TAM; i++){
        cout << vet[i] << " ";
    }

return 0;
system("PAUSE");
}
