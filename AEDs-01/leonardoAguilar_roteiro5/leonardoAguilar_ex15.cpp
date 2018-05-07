/*
Leonardo Aguilar
Recebe a nota de 30 alunos e sabe-se que as notas variam de 0 � 10. Caso a nota esteja
fora dessa faixa, identifique qual nota e quantas notas est�o fora
Entrada: 30 notas
Sa�da: Quais notas, quantidade de notas
*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <string.h>

using namespace std;

//Vari�vel Global
const int TAM = 30;

int main(){

    //Inclus�o de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declara��o das vari�veis
   float nota[TAM], fora[TAM], contador = 0;

   //Entrada das notas
   for(int i = 0; i < TAM; i++){
        cin >> nota[i];

   }


   //Identifica e imprime quais notas est�o fora da faixa
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
