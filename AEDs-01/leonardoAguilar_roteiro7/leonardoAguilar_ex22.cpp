/*LEONARDO AGUILAR MURCA*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <string.h>

using namespace std;

int mdc(int x, int y);

int main(){

    //Inclusão de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    int x, y;
    cin >> x >> y;

    cout << mdc(x, y) << endl;
system("PAUSE");
return 0;
}

int mdc(int x, int y){
    if(y==0){
        return x;
    }
    else{
        return mdc(y, (x%y));
    }
}



