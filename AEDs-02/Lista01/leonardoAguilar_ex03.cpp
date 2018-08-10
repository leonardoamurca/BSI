/*
============ LEONARDO AGUILAR MURÇA ============
EXERCÍCIO 03
Construa uma função que receba uma string como parâmetro e procure pela ocorrência de um caracter x.
====== TESTES ======
ENTRADAS:
leonardo a
roberto a
SAÍDAS:
Tem sim
Tem não
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


