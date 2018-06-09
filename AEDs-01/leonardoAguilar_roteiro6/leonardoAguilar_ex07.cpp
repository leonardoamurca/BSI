/*LEONARDO AGUILAR MURCA*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <string.h>

using namespace std;

const int LINHA = 4, COLUNA = 7;

int main(){

    //Inclusão de caracteres especiais
    setlocale(LC_ALL, "Portuguese");
    int  l = 0, c = 0;
    float mat[LINHA][COLUNA], menor = 100000, maior = -10000;
    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            cin >> mat[i][j];
        }
    }


    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            if(mat[i][j] < menor){
                menor = mat[i][j];
                l = i;
            }

        }
    }
        for(int j = 0; j < COLUNA; j++){
            if(mat[l][j] > maior){
                maior = mat[l][j];
                c = j;
            }
        }

    cout << "MINMAX = " << maior << endl;
    cout << "Posição = (" << l <<", " << c << ")" << endl;

return 0;
system("PAUSE");
}
