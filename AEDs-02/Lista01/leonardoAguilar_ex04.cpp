/*
============ LEONARDO AGUILAR MUR�A ============
EXERC�CIO 04
Construa uma fun��o que calcule o MDC - m�ximo divisor comum de dois n�meros inteiros de forma recursiva.
====== TESTES ======
ENTRADAS:
48 30
10 20
15 15
SA�DAS:
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
    cout << "Digite dois n�meros: " << endl;
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



