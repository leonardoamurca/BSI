/*
Leonardo Aguilar
Verifica quais s�o os 10 primeiros n�meros primos a partir de 100
Entrada:
Sa�da: N�meros primos
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

   int pri = 0, div = 0, j = 100, vet[TAM], x = 0;

   while(pri < 10){
        for(int i=1; i<=j;i++){
            if(j%i == 0){
                div++;
            }
        }

        if(div == 2){
            vet[x] = j;
            pri++;
            x++;
        }
        j++;
        div = 0;
   }

   cout << "Primos = [ ";
   for(int i = 0; i < TAM; i++){
    cout << vet[i] << " ";
   }

   cout << "]" << endl;

return 0;
system("PAUSE");
}
