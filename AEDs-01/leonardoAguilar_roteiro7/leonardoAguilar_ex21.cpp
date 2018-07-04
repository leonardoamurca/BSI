/*LEONARDO AGUILAR MURCA*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <string.h>

using namespace std;

int A(int m, int n);

int main(){

    //Inclusão de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    int n, m;
    cin >> m >> n;

    cout << A(m, n) << endl;

system("PAUSE");
return 0;
}

int A(int m, int n){
    if(m==0){
        return n+1;
    }
    else if((m>0) and (n==0)){
        return A( (m-1), 1);
    }
    else if( (m > 0) and (n > 0) ){
        return A((m-1), A(m, (n-1)));
    }
}



