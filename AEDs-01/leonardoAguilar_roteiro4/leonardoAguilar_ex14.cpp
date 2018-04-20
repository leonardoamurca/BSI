/*
Leonardo Aguilar
Imprime a soma da sequência 1 - 1/2 + 1/3 - 1/4 + 1/5 ... + 1/n;
Entrada: Limite
Saída: Soma
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
    //Inclusão dos caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declaração das variáveis
    int n;
    float soma = 0;

    //Entrada de dados
   cout << "Digite o limite da sequência: " << endl;
   cin >> n;

    //Validação da entrada
   while(n == 0){
        cout << "Entrada inválida!" << endl;
        cout << "Digite o limite da sequência: " << endl;
        cin >> n;
   }

    //Implementação do somatório
   for(float i = 1; i <= n; i++){
        int aux = i;
        if(aux%2 == 0){
            aux = -aux;
        }
        soma += (1/(float)aux);
}


   //Saída de dados
   cout << "Soma = " << soma << endl;
return 0;
system("PAUSE");
}
