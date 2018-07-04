/*LEONARDO AGUILAR MURCA*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <string.h>

using namespace std;

int T(int n);

int main(){

    //Inclusão de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    int n;
    cin >> n;
    cout << T(n) << endl;

system("PAUSE");
return 0;
}

int T(int n){
    if(n == 1){
        return 1;
    }
    else{
        return 2*T(n/2) + n;
    }
}

