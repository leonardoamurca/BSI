/*
Leonardo Aguilar
Troca valores de posições de um vetor de 10 posições da seguinte forma:
    - A primeira posição recebe o valor da última e vice versa, o segundo com
      o penúltimo e assim sucessivamente.
Entrada: Vetor de 10 posições
Saída: Vetor trocado
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
   float vet[TAM],aux, vett[TAM];

    for(int i = 0; i < TAM; i++){
        vet[i] = rand()%10;
        vett[i] = vet[i];
    }

    for (int i = 0 ; i < (TAM/2); i++){
        aux = vet[i];
        vet[i] = vet[9-i];
        vet[9-i] = aux;
    }

   //Imprime o Vetor Original
    cout << "Vetor Original = [ ";
    for(int i = 0; i < TAM; i++){
        cout << vett[i] << " ";
    }
    cout << "]" << endl;

   //Imprime Vetor Trocado
   cout << "Vetor trocado = [ ";
   for(int i = 0; i < TAM; i++){
        cout << vet[i] << " ";
   }
   cout << "]" << endl;

return 0;
system("PAUSE");
}
