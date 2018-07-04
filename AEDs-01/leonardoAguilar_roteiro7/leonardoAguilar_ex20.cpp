/*LEONARDO AGUILAR MURCA*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <string.h>

using namespace std;

int comb(int n,int k);

int main(){

    //Inclusão de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    int n, k;
    cin >> n >> k;

    cout << comb(n, k) << endl;
system("PAUSE");
return 0;
}

int comb(int n, int k){
    if(k==1){
        return n;
    }
    else if(k==n){
        return 1;
    }
    else if( (k > 1) and (k < n)){
        return comb(n-1, k-1) + comb(n-1, k);
    }
}




