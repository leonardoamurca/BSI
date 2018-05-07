/*
Leonardo Aguilar
Calcula o quadrado das posições de um vetor
Entrada:
Saída: Elementos do vetor
*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>

using namespace std;

//Variável Global
const int TAM = 10;

int main(){

    //Inclusão de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declaração de variável
    int i, vet[TAM];

    //Calcula o quadrado das posições
    for(int i = 0; i < TAM; i++){
        vet[i] = i*i;
    }

    //Saída de dados
    for(int i = 0; i < TAM; i++){
        cout << vet[i] << " ";
    }

return 0;
system("PAUSE");
}
