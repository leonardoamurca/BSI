/*
Leonardo Aguilar
Identificar se um número é par ou ímpar.
Entrada: Um número.
Saída: Par ou ímpar
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
    int num;

    //Entrada de dados pelo usuário
    cout << "Digite um número: " << endl;
    cin >> num;

    //Condições para ser par ou ímpar
    if(num%2 == 0 and num != 0){
        cout << num << " é par!" << endl;
    }
    else if(num == 0){
        cout << num << " é neutro! (ZERO)" << endl;
    }
    
    else {
        cout << num << " é ímpar!" << endl;
    }
return 0;
system("PAUSE");
}
