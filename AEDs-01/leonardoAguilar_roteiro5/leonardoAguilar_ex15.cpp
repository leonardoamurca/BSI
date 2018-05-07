/*
Leonardo Aguilar
Recebe a nota de 30 alunos e sabe-se que as notas variam de 0 à 10. Caso a nota esteja
fora dessa faixa, identifique qual nota e quantas notas estão fora
Entrada: 30 notas
Saída: Quais notas, quantidade de notas
*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <string.h>

using namespace std;

//Variável Global
const int TAM = 30;

int main(){

    //Inclusão de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declaração das variáveis
   float nota[TAM], fora[TAM], contador = 0;

   //Entrada das notas
   for(int i = 0; i < TAM; i++){
        cin >> nota[i];

   }


   //Identifica e imprime quais notas estão fora da faixa
   cout << "Notas fora da faixa: ";
   for(int i = 0; i < TAM; i++){
        if(nota[i] < 0 or nota[i] > 10){
            fora[i] = nota[i];
            cout << fora[i] << ", ";
            contador++;
        }
   }
    cout << endl;
    //Imprime a quantidade de notas fora da caixa
    cout << "Total de notas fora da faixa: " << contador << endl;
return 0;
system("PAUSE");
}
