/*LEONARDO AGUILAR MURCA*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

const int TAM = 5;

int main(){

    //Inclusão de caracteres especiais
    setlocale(LC_ALL, "Portuguese");
    int n, dario = 0, xerxes = 0, d, x;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> d >> x;
        if( (d == 0 and (x == 1 or x == 2)) or (d == 1 and (x == 2 or x == 3)) or (d == 2 and (x == 3 or x == 4) or (d == 3 and (x == 0 or x == 4) or (d == 4 and (x == 0 or x == 1))))){
            dario++;
        }
        else if( (x == 0 and (d == 1 or d == 2)) or (x == 1 and (d == 2 or d == 3)) or (x == 2 and (d == 3 or d == 4) or (x == 3 and (d == 0 or d == 4) or (x == 4 and (d == 0 or d == 1))))){
            xerxes++;
        }
    }

    if(dario > xerxes){
        cout << "dario" << endl;
    }
    else{
        cout << "xerxes" << endl;
    }

return 0;
system("PAUSE");
}
