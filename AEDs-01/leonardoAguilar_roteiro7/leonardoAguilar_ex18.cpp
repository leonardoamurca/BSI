/*LEONARDO AGUILAR MURCA*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <string.h>

using namespace std;

void dec2bin(int n);

int main(){

    //Inclusão de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    int n;
    cin >> n;

    dec2bin(n);

system("PAUSE");
return 0;
}

void dec2bin(int n){
    if(n/2 != 0){
        dec2bin(n/2);
    }
    cout << n%2;
}




