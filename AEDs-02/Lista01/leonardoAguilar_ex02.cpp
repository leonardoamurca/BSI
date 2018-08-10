/*
============ LEONARDO AGUILAR MUR�A ============
EXERC�CIO 02
Construa uma fun��o que retorne o MDC - m�ximo divisor comum de dois n�meros inteiros recebidos como par�metro.
====== TESTES ======
ENTRADAS:
50 35
12 18
20 20
SA�DAS:
5
6
20
===================================================================================================
*/

#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <locale.h>

using namespace std;

int mdc(int a, int b);

int main(){
    setlocale(LC_ALL, "Portuguese");

    int a, b;
    //Entradas
    cout << "Digite dois n�meros: " << endl;
    cin >> a >> b;

    cout << "MDC (" << a <<"," << b << ") = " <<  mdc(a, b) << endl;

system("PAUSE");
return 0;
}

int mdc(int a, int b){
    int maior, menor, result = 0, aux = 0;
    if(a > b){
        maior = a;
        menor = b;
        aux = maior%menor;
        while(aux != 0){
            maior = menor;
            menor = aux;
            aux = maior%menor;
        }
        return menor;
    }
    else if(a < b){
        maior = b;
        menor = a;
        aux = maior%menor;
        while(aux != 0){
            maior = menor;
            menor = aux;
            aux = maior%menor;
        }
        return menor;
    }
    else{
        return a;
    }

}


