/* LEONARDO AGUILAR MURCA

A(2x3) =    |3    2    5|
            |1    2    3|

 B(3x4) =   |2    5    8    10|
            |3    6    9     8|
            |1    7    10    7|

C = A x B

NUMERO DE COLUNAS TEM QUE SER IGUAL AO NUMERO DE LINHAS (3 = 3)

C(i, j) = Somatório Aiz * Bzj  (Para todo i, j)
              z
C(2, 4)


*/

#include <iostream>
#include <math.h>
#include <windows.h>

using namespace std;

const int LINHA = 3, COLUNA = 4;

int main(){
    int A[LINHA][COLUNA];

    int l, c;

    cin >> l >> c;

    if(COLUNA == l){
        int mult[LINHA][c], B[l][c];
        for(int i = 0; i < LINHA; i++){
            for(int j = 0; j < COLUNA; j++){
                cin >> A[i][j];
            }
        }

        for(int i = 0; i < l; i++){
            for(int j = 0; j < c; j++){
                cin >> B[i][j];
            }
        }

        for(int i = 0; i < LINHA; i++){
            for(int j = 0; j < c; j++){
                mult[i][j] = 0;
            }
        }

        for(int i = 0; i < LINHA; i++){
            for(int z = 0; z < COLUNA; z++){
                for(int j = 0; j < c; j++){
                    mult[i][j] += A[i][z] * B[z][j];
                }

            }
        }

        for(int i = 0; i < LINHA; i++){
            for(int j = 0; j < c; j++){
                cout << mult[i][j] << "   ";
            }
            cout << endl;
        }

    }
    else{
        cout << "Impossivel multiplicar!" << endl;
    }




system("PAUSE");
return 0;
}
