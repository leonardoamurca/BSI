/* LEONARDO AGUILAR MURCA */
#include <iostream>
#include <math.h>
#include <windows.h>
#include <string.h>

using namespace std;

const int LINHA = 4, COLUNA = 2;

int main(){
    float nota[LINHA][COLUNA], media[LINHA], soma = 0;
    string nome[LINHA];

    for(int i = 0; i < LINHA; i++){
        media[i] = 0;
    }

    for(int i = 0; i < LINHA; i++){
        cout << "Aluno " << i+1 << ": " << endl;
        for(int j = 0; j < COLUNA; j++){
            cin >> nota[i][j];
        }
        cin >> nome[i];
    }

    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            soma += nota[i][j];
        }
        media[i] = soma/COLUNA;
        soma = 0;
    }

    for(int i = 0; i < LINHA; i++){
        cout << media[i] << endl;
    }

    for(int i = 0; i < LINHA; i++){
        cout << nome[i] << endl;
        cout << "Notas: ";
        for(int j = 0; j < COLUNA; j++){
           cout << " " << nota[i][j];
        }
        cout << endl;
        cout << "Media: " << media[i] << endl;;
        if(media[i] >= 7){
            cout << "APROVADO" << endl;
        }
        else if(media[i] < 4){
            cout << "REPROVADO" << endl;
        }
        else if(media[i] > 4 and media[i] < 7){
            cout << "EXAME ESPECIAL" << endl;
        }
    cout << endl;
    cout << "-------------------" << endl;
    }

system("PAUSE");
return 0;
}
