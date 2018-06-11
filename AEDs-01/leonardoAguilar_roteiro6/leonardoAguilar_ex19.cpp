/*LEONARDO AGUILAR MURCA*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main(){

    //Inclusão de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    int L, C, col, lin, a = 0,b = 0;
    char mapa[100][100];

    int d[5] = {0, -1 , 0, 1, 0};

    cin >> L >> C;
    for(int i = 0 ; i < L ; i++){
        for(int j = 0 ; j < C ; j++){
            cin >> mapa[i][j];
            if(mapa[i][j] == 'o'){
                col = j;
                lin = i;
            }
        }
    }
    bool achou = false;
    do{
        if(mapa[lin-1][col] == 'H'){
            mapa[lin-1][col] = '.';
            lin = lin-1;
            achou = true;
        }
        if(mapa[lin+1][col] == 'H'){
            mapa[lin+1][col] = '.';
            lin = lin+1;
            achou = true;
        }
        else if(mapa[lin][col-1] == 'H'){
            mapa[lin][col-1] = '.';
            col -= 1;
            achou = true;
        }
        else if(mapa[lin][col+1] == 'H'){
            mapa[lin][col+1] = '.';
            col += 1;
            achou = true;
        }
        else{
            achou = false;
        }
    }while(achou == true);

    cout << lin + 1 << " " << col + 1 << endl;

return 0;
system("PAUSE");
}
