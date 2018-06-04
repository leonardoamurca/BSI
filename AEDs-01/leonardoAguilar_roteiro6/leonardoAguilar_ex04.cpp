/* LEONARDO AGUILAR MURCA */
#include <iostream>
#include <math.h>
#include <windows.h>

using namespace std;

const int COLUNA = 7;

int main(){
    int SEMANAS;
    float  soma = 0, media = 0, amedia = 0;
    cout << "Digite o numero de semanas: " << endl;
    cin >> SEMANAS;

    float menor[SEMANAS], prodMin[SEMANAS];

    for(int i = 0; i < SEMANAS; i++){
        menor[i] = 100000;
        prodMin[i] = 0;
    }

    float prod[SEMANAS][COLUNA];

    for(int i = 0; i < SEMANAS; i++){
        for(int j = 0; j < COLUNA; j++){
            cin >> prod[i][j];
        }
    }

    for(int i = 0; i < SEMANAS; i++){
        for(int j = 0; j < COLUNA; j++){
            soma += prod[i][j];
        }
    }
    //Calcula a producao media
    media = soma/(COLUNA*SEMANAS);

    for(int i = 0; i < SEMANAS; i++){
        for(int j = 0; j < COLUNA; j++){
            if(prod[i][j] > media){
                amedia++;
            }
        }
    }

    for(int i = 0; i < SEMANAS; i++){
        for(int j = 0; j < COLUNA; j++){
            if(prod[i][j] < menor[i]){
                menor[i] = prod[i][j];
                prodMin[i] = j;

            }
        }
    }


    cout << "RELATORIO DE PRODUCAO RELATIVO A " << SEMANAS << " SEMANAS" << endl;
    cout << "----------------------------------------------------------" << endl;
    cout << "Producao media: " << media << endl;
    cout << "Numero de dias com producao acima da media: " << amedia << " dias" << endl;

    cout << "Indicacao dos dias de minima producao: " << endl;

    for(int i = 0; i < SEMANAS; i++){
        cout << "Semana " << i+1 << " .......... DIA " << prodMin[i]+1 << endl;
    }

system("PAUSE");
return 0;
}
