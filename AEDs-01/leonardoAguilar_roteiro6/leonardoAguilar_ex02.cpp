/* LEONARDO AGUILAR MURCA */
#include <iostream>
#include <math.h>
#include <windows.h>

using namespace std;

const int LINHA = 3, COLUNA = 5;

int main(){
    float mat[LINHA][COLUNA], soma[LINHA], maior = -10000, mLinha;

    for(int i = 0; i < LINHA; i++){
        soma[i] = 0;
        for(int j = 0; j < COLUNA; j++){
            cin >> mat[i][j];
        }
    }

    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            soma[i] += mat[i][j];
        }
        if(soma[i] > maior){
            maior = soma[i];
            mLinha=i;
        }
    }

    cout << "Somas = [";
    for(int i = 0; i < LINHA; i++){
        cout << " " << soma[i];
    }
    cout << " ] " << endl;

    cout << "Maior valor soma esta na linha " << mLinha << endl;

system("PAUSE");
return 0;
}
