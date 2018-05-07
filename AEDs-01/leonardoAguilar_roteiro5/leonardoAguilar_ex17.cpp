/*
Leonardo Aguilar
Troca valores de posi��es de um vetor de 10 posi��es da seguinte forma:
    - A primeira posi��o recebe o valor da �ltima e vice versa, o segundo com
      o pen�ltimo e assim sucessivamente.
Entrada: Vetor de 10 posi��es
Sa�da: Vetor trocado
*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <string.h>

using namespace std;

//Vari�vel Global
const int TAM = 10;

int main(){

    //Inclus�o de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declara��o das vari�veis
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
