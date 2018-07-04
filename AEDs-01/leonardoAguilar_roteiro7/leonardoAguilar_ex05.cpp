/*LEONARDO AGUILAR MURCA
Digite os tons de vermelho (5x5):

1 1 1 1 1
1 1 1 1 1
1 1 1 1 1
1 1 1 1 1
1 1 1 1 1
Digite os tons de verde (5x5):

2 2 2 2 2
2 2 2 2 2
2 2 2 2 2
2 2 2 2 2
2 2 2 2 2
Digite os tons de azul (5x5):

3 3 3 3 3
3 3 3 3 3
3 3 3 3 3
3 3 3 3 3
3 3 3 3 3
*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <string.h>

using namespace std;

const int LINHA = 5, COLUNA = 5;

void rgb(int r[LINHA][COLUNA], int g[LINHA][COLUNA], int b[LINHA][COLUNA]);
void escalaCinza(int r[LINHA][COLUNA], int g[LINHA][COLUNA], int b[LINHA][COLUNA], int cinza[LINHA][COLUNA]);
void negativo(int cinza[LINHA][COLUNA],int neg[LINHA][COLUNA]);
void poster(int cinza[LINHA][COLUNA], int post[LINHA][COLUNA]);
int main(){

    //Inclusão de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Entrada de dados
    int r[LINHA][COLUNA], g[LINHA][COLUNA], b[LINHA][COLUNA], cinza[LINHA][COLUNA], neg[LINHA][COLUNA];
    int post[LINHA][COLUNA];
    rgb(r, g, b);
    escalaCinza(r, g, b, cinza);
    for(int i = 0; i < LINHA; i++){
        cout << endl;
        for(int j = 0; j < COLUNA; j++){
            cout << cinza[i][j] << " ";
        }
    }
    negativo(cinza, neg);
    poster(cinza, post);

system("PAUSE");
return 0;
}

void rgb (int r[LINHA][COLUNA], int g[LINHA][COLUNA], int b[LINHA][COLUNA]){
    cout << "Digite os tons de vermelho (5x5): " << endl;
    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            cin >> r[i][j];
        }
    }
    cout << "Digite os tons de verde (5x5): " << endl;
    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            cin >> g[i][j];
        }
    }
    cout << "Digite os tons de azul (5x5): " << endl;
    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            cin >> b[i][j];
        }
    }

}

void escalaCinza(int r[LINHA][COLUNA], int g[LINHA][COLUNA], int b[LINHA][COLUNA], int cinza[LINHA][COLUNA]){
    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            cinza[i][j] = 0;
        }
    }

    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            cinza[i][j] = (r[i][j] + g[i][j] + b[i][j]) / 3;
        }
    }
}

void negativo (int cinza[LINHA][COLUNA], int neg[LINHA][COLUNA]){
    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            neg[i][j] = 0;
        }
    }

    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            neg[i][j] = 255 - cinza[i][j];
        }
    }

    for(int i = 0; i < LINHA; i++){
        cout << endl;
        for(int j = 0; j < COLUNA; j++){
            cout << neg[i][j] << " ";
        }
    }
}

void poster(int cinza[LINHA][COLUNA], int post[LINHA][COLUNA]){
    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            if(cinza[i][j] > 127){
                post[i][j] = 255;
            }
            else{
                post[i][j] = 0;
            }
        }
    }

    for(int i = 0; i < LINHA; i++){
        cout << endl;
        for(int j = 0; j < COLUNA; j++){
            cout << post[i][j] << " ";
        }
    }

}
