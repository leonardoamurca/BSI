/*LEONARDO AGUILAR MURCA*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <string.h>

using namespace std;

const int LINHA = 6, COLUNA = 20;

int main(){

    //Inclus�o de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    float amostra[LINHA][COLUNA], soma[LINHA], media[LINHA], s[LINHA];

    for(int i = 0; i < LINHA; i++){
        soma[i] = 0;
        media[i] = 0;
        s[i] = 0;
    }

    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            cin >> amostra[i][j];
            soma[i] += amostra[i][j];
        }
        media[i] = soma[i]/COLUNA;
    }


    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            s[i] += pow(amostra[i][j] - media[i], 2)/(COLUNA - 1);
        }
        cout<< "==== " << i+1 << "� linha de produ��o ====" << endl;
        cout << "Desvio padr�o: " << sqrt(s[i]) << endl;
        cout << "M�dia: " << media[i] << endl;
        if((int)sqrt(s[i]) < 5 or (int)sqrt(s[i]) > 5){
            cout << "O processo deve ser revisado!" << endl;
        }
        else{
            cout << "O processo n�o precisa ser revisado!" << endl;
        }
    }


return 0;
system("PAUSE");
}
