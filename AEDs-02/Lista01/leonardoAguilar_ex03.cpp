/*
============ LEONARDO AGUILAR MUR�A ============
EXERC�CIO 03
Construa uma fun��o que receba uma string como par�metro e procure pela ocorr�ncia de um caracter x.
====== TESTES ======
ENTRADAS:
leonardo a
roberto a
SA�DAS:
Tem sim
Tem n�o
===================================================================================================
*/

#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    string a, x;
    int cont = 0;

    cout << "Digite uma frase: " << endl;
    getline(cin, a);

    cout << "Digite a letra desejada: " <<endl;
    cin >> x;

    for(int i = 0; i < a.size(); i++){
        if(x[0] == a[i]){
            cont++;
        }
    }
    if(cont > 0){
        cout << "Tem sim" << endl;
    }
    else{
        cout << "Tem nao" << endl;
    }
system("PAUSE");
return 0;
}


