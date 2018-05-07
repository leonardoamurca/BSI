/*
Leonardo Aguilar
Ordena de forma crescente e descrescente um vetor de 10 posições
Entrada: Vetor de 10 posições
Saída: Vetor crescente e decrescente
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
   int vet[TAM], aux = 0, vetOrd[TAM], vett[TAM];

   for(int i = 0; i < TAM; i++){
    //vet[i] = rand()%30;
    cin >> vett[i];
    vet[i] = vett[i];
   }

   //Ordena o vetor
   for(int i = 0; i < TAM; i++){
       for(int j = 0; j < TAM; j++){
           if(vet[i] < vet[j]){
              aux = vet[i];
              vet[i] = vet[j];
              vetOrd[i] = vet[j];
              vet[j] = aux;
              vetOrd[j] = aux;
            }
        }
    }

   //Imprime o Vetor Original
    cout << "Vetor Original = [ ";
    for(int i = 0; i < TAM; i++){
        cout << vett[i] << " ";
    }
    cout << "]" << endl;

    //Imprime o Vetor Crescente
    cout << "Vetor Crescente = [ ";
    for(int i = 0; i < TAM; i++){
        cout << vetOrd[i] << " ";
    }
    cout << "]" << endl;

    //Imprime o Vetor Decrescente
    cout << "Vetor Decrescente = [ ";
    for(int i = TAM - 1; i >= 0; i--){
        cout << vetOrd[i] << " ";
    }
    cout << "]" << endl;


return 0;
system("PAUSE");
}
