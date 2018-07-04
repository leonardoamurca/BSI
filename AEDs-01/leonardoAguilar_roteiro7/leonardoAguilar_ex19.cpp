/*LEONARDO AGUILAR MURCA*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <string.h>

using namespace std;

int fib(int n);

int main(){

    //Inclusão de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    int n;
    cin >> n;

    cout << fib(n) << endl;;

system("PAUSE");
return 0;
}

int fib(int n){
    if((n==1) or (n==2)){
        return 1;
    }
    else if(n>2){
        return fib(n-1) + fib(n-2);
    }
}




