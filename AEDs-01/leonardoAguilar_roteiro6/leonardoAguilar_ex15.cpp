/*LEONARDO AGUILAR MURCA*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

const int LINHA = 5, COLUNA = 3;

int main(){

    //Inclus�o de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    float tabela[LINHA][COLUNA], fatura[LINHA][COLUNA];

    cout << "===== SERVI�OS PRESTADOS =====" << endl;
    cout << "0. Unhas dos p�s" << endl;
    cout << "1. Unhas das m�os" << endl;
    cout << "2. Podologia" << endl;

    for(int i = 0; i < LINHA; i++){
        cout << "==== Manicure " << i <<" ===="<< endl;
        for(int j = 0; j < COLUNA; j++){
            cout << "Digite o n�mero de cliente para o servi�o " << j << ":" << endl;
            cin >> tabela[i][j];
        }
    }

    for(int i = 0; i < LINHA; i++){
        cout << "==== Manicure " << i <<" ===="<< endl;
        for(int j = 0; j < COLUNA; j++){
            if(j == 0){
                fatura[i][j] = (tabela[i][j]*10)*0.5;
            }
            else if(j == 1){
                fatura[i][j] = (tabela[i][j]*15)*0.5;
            }
            else{
                fatura[i][j] = (tabela[i][j]*30)*0.5;
            }
        }
    }


    for(int i = 0; i < LINHA; i++){
        cout << "==== Faturamentos da Manicure " << i <<" ===="<< endl;
        for(int j = 0; j < COLUNA; j++){
            cout << " Servi�o " << j << ": " << "R$" << fatura[i][j] << ",00" << endl;
        }
    }



return 0;
system("PAUSE");
}
