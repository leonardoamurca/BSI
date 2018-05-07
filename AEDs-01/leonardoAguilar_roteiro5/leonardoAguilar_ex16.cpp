/*
Leonardo Aguilar
Calcula o produtório e o somatório de um vetor de 5 posições
Entrada: Vetor
Saída: Somatório e Produtório
*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <string.h>

using namespace std;

//Variável Global
const int TAM = 5;

int main(){

    //Inclusão de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declaração das variáveis
    int vet[TAM];
    float soma = 0, prod = 1;

    //Preenche o vetor
    for(int i = 0; i < TAM; i++){
        cin >> vet[i];
    }
    //Calcula o produtório e o somatório
    for(int i = 0; i < TAM; i++){
        soma += vet[i];
        prod *= vet[i];
    }
    //Saída de dados
    cout << "Somatório = " << soma << endl;
    cout << "Produtório = " << prod << endl;
return 0;
system("PAUSE");
}
