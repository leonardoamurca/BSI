/*
Leonardo Aguilar
Preenche 2 vetores de 10 posi��es e cria um terceiro vetor com os seguintes par�metros:
    -Se o valor armazenado na posi��o i vetor 1 for igual ao valor armezanado na mesma
    posi��o no vetor 2, o vetor 3 recebe 1. Caso contr�rio, recebe 0.
Entrada: Vetor 1 e 2
Sa�da: Vetor 1, 2 e 3
*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <string.h>

using namespace std;

//Vari�vel global
const int TAM = 10;

int main(){

    //Inclus�o de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declara��o das vari�veis
    float vet1[TAM], vet2[TAM], vet3[TAM];

    //Preenche o vetor 1
    for(int i = 0; i < TAM; i++){
        cout << "Digite o valor da " << i+1 << "� posi��o do vetor 1: " << endl;
        cin >> vet1[i];
    }
    cout << "===========================================" << endl;

    //Preenche o vetor 2
    for(int i = 0; i < TAM; i++){
        cout << "Digite o valor da " << i+1 << "� posi��o do vetor 2: " << endl;
        cin >> vet2[i];
    }

    //Preenche o vetor 3
    for(int i = 0; i < TAM; i++){
        if(vet1[i] == vet2[i]){
            vet3[i] = 1;
        }
        else{
            vet3[i] = 0;
        }
    }

    //Imprime o vetor 1
    cout << "Vetor 1 = [ ";
    for(int i = 0; i < TAM; i++){
        cout << vet1[i] << " ";
    }
    cout << "]" << endl;

    //Imprime o vetor 2
    cout << "Vetor 2 = [ ";
    for(int i = 0; i < TAM; i++){
        cout << vet2[i] << " ";
    }
    cout << "]" << endl;

    //Imprime o vetor 3
    cout << "Vetor 3 = [ ";
    for(int i = 0; i < TAM; i++){
        cout << vet3[i] << " ";
    }
    cout << "]" << endl;

return 0;
system("PAUSE");
}
