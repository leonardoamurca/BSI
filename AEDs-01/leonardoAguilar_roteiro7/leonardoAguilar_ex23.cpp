/*LEONARDO AGUILAR MURCA*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <string.h>

using namespace std;

int fat(int n);

int main(){

    //Inclusão de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    int n;
    cin >> n;
    cout << fat(n) << endl;

system("PAUSE");
return 0;
}

int fat(int n){
    if((n==1) or (n==0)){
        return 1;
    }
    else{
        return fat(n-1)*n;
    }
}



