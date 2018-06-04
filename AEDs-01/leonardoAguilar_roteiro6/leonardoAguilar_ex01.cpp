/* LEONARDO AGUILAR MURCA */
#include <iostream>
#include <math.h>
#include <windows.h>

using namespace std;

const int LINHA = 2, COLUNA = 2;

int main(){
    int mat[LINHA][COLUNA], result[LINHA][COLUNA], maior = -10000;

    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            cin >> mat[i][j];
            if(mat[i][j] > maior){
                maior = mat[i][j];
            }
        }
    }

    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            mat[i][j] *= maior;
            cout << "    " << mat[i][j];
        }
        cout << endl;
    }


system("PAUSE");
return 0;
}
