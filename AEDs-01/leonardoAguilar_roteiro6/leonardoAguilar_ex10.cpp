/*LEONARDO AGUILAR MURCA*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <string.h>

using namespace std;

const int LINHA = 8, COLUNA = 8;

int main(){

    //Inclusão de caracteres especiais
    setlocale(LC_ALL, "Portuguese");
    int n;

    //Numero de cidades
    cin >> n;

    float A[n][n], cFinal = 0;
    int rota[n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> A[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        cin >> rota[i];
    }

    //3  1   0   2

    for(int i = 0; i < n; i++){
        if(i != n-1){
            cFinal += A[rota[i]][rota[i+1]];
        }
    }

    cout << cFinal << endl;


return 0;
system("PAUSE");
}
