/*
Leonardo Aguilar
Identificar se um número é positivo, negativo ou zero.
Entrada: Um número.
Saída: Positivo, negativo ou zero
 */

#include <iostream>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
#include <windows.h>

using namespace std;

int main(){

    //Inclusão dos caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declaração das variáveis
    float num;

    //Entrada de dados pelo usuário
    cout << "Digite um número: " << endl;
    cin >> num;

    //Condições para ser positivo, negativo ou zero
    if(num > 0){
        cout << num << " é um número positivo!" << endl;
    }
    else if(num < 0){
        cout << num << " é um número negativo!" << endl;
    }
    else {
        cout << "O número digitado é ZERO!" << endl;
    }

return 0;
system("PAUSE");
}
