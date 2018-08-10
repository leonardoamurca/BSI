/*
============ LEONARDO AGUILAR MURÇA ============
EXERCÍCIO 02
Construa uma função que retorne o MDC - máximo divisor comum de dois números inteiros recebidos como parâmetro.
====== TESTES ======
ENTRADAS:
50 35
12 18
20 20
SAÍDAS:
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
    cout << "Digite dois números: " << endl;
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


