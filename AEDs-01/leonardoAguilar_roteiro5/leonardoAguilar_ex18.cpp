/*
Leonardo Aguilar
Os valores das posi��es de um vetor de 10 posi��es corresponde ao fatorial
da posi��o no vetor.
Entrada: N�o possui entrada!
Sa�da: Vetor
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
   float vet[TAM];

   //Seta todo o vetor para 1
   for(int i = 0; i < TAM; i++){
    vet[i] = 1;
   }
   //Seta o fatorial de ZERO
   vet[0] = 0;

   //Calcula o fatorial de cada posi��es e as atribui
   for(int i = 1; i <= (TAM-1); i++){
        for(int j = i; j > 0; j--){
            vet[i] *= j;
        }
   }

   //Imprime o vetor
   cout << "Vetor = [ ";
   for(int i = 0; i < TAM; i++){
        cout << vet[i] << " ";
   }
   cout << "]" << endl;

return 0;
system("PAUSE");
}
