/*
Leonardo Aguilar
Imprime a soma da sequ�ncia 1 - 1/2 + 1/3 - 1/4 + 1/5 ... + 1/n;
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
        int aux = i;
        if(aux%2 == 0){
            aux = -aux;
        }
        soma += (1/(float)aux);
}


   //Sa�da de dados
   cout << "Soma = " << soma << endl;
return 0;
system("PAUSE");
}
