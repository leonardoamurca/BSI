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

    int amizade[TAM][TAM], amig[TAM];

    for(int i = 0; i < TAM; i++){
        amig[i] = 0;
    }

    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            cin >> amizade[i][j];
        }
    }
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            if(i != j){
                if(amizade[i][j] == 1){
                    amig[i]++;
                }
            }
        }
    }

    cout << "Número de amigos: " << endl;
    for(int i = 0; i < TAM; i++){
        cout << "Pessoa " << i << ": " << amig[i] << endl;
    }



return 0;
system("PAUSE");
}
