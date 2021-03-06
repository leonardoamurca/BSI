/*
Leonardo Aguilar
Imprime a soma da sequ�ncia 1 + 1/2 + 1/3 + ... + 1/n;
Entrada: Limite
Sa�da: Soma
*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main(){
    //Inclus�o dos caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declara��o das vari�veis
    int n;
    float soma = 0;

    //Entrada de dados
   cout << "Digite o limite da sequ�ncia: " << endl;
   cin >> n;

    //Valida��o da entrada
   while(n == 0){
        cout << "Entrada inv�lida!" << endl;
        cout << "Digite o limite da sequ�ncia: " << endl;
        cin >> n;
   }

    //Implementa��o do somat�rio
   for(float i = 1; i <= n; i++){
        soma += 1/i;
   }

   //Sa�da de dados
   cout << "Soma = " << soma << endl;
return 0;
system("PAUSE");
}
