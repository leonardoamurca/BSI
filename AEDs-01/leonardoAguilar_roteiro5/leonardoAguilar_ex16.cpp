/*
Leonardo Aguilar
Calcula o produt�rio e o somat�rio de um vetor de 5 posi��es
Entrada: Vetor
Sa�da: Somat�rio e Produt�rio
*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <string.h>

using namespace std;

//Vari�vel Global
const int TAM = 5;

int main(){

    //Inclus�o de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declara��o das vari�veis
    int vet[TAM];
    float soma = 0, prod = 1;

    //Preenche o vetor
    for(int i = 0; i < TAM; i++){
        cin >> vet[i];
    }
    //Calcula o produt�rio e o somat�rio
    for(int i = 0; i < TAM; i++){
        soma += vet[i];
        prod *= vet[i];
    }
    //Sa�da de dados
    cout << "Somat�rio = " << soma << endl;
    cout << "Produt�rio = " << prod << endl;
return 0;
system("PAUSE");
}
