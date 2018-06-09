/*LEONARDO AGUILAR MURCA

   j0   1   2

i
0   3   2   9

1   2   1   6

2   9   6   3

*/

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

    float mat[LINHA][COLUNA], cont = 0;

    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            cin >> mat[i][j];
        }
    }

    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            if(mat[i][j] == mat[j][i]){
                cont++;
            }
        }
    }

    if(cont == (COLUNA*LINHA)){
        cout << "Matriz simétrica!" << endl;
    }
    else{
        cout << "Matriz não simétrica!" << endl;
    }
return 0;
system("PAUSE");
}
