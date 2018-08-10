/*
============ LEONARDO AGUILAR MURÇA ============
EXERCÍCIO 04
Construa uma função que calcule o MDC - máximo divisor comum de dois números inteiros de forma recursiva.
====== TESTES ======
ENTRADAS:
48 30
10 20
15 15
SAÍDAS:
6
10
15
===================================================================================================
*/

#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <locale.h>

using namespace std;

int mdc(int a, int b);
int mdcRec(int a, int b);

int main(){
    setlocale(LC_ALL, "Portuguese");

    int a, b;
    //Entradas
    cout << "Digite dois números: " << endl;
    cin >> a >> b;

    cout << "MDC (" << a <<"," << b << ") = " <<  mdcRec(a, b) << endl;

system("PAUSE");
return 0;
}

int mdcRec(int a, int b){
    int maior, menor, aux;
    if(a > b){
        maior = a;
        menor = b;
        aux = maior%menor;
        if(aux == 0){
            return menor;
        }
        return mdcRec(menor,aux);
    }
    else if(a < b){
        maior = b;
        menor = a;
        aux = maior%menor;
        if(aux == 0){
            return menor;
        }
        return mdcRec(menor,aux);
    }
    else{
        return a;
    }
}



