/*LEONARDO AGUILAR MURCA*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

const int LINHA = 12, COLUNA = 4;

void imprime_menu();
void escolher_opcao(char opc, int lug[LINHA][COLUNA], int poltrona[LINHA][COLUNA]);

int main(){

    //Inclusão de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    int lug[LINHA][COLUNA], poltrona[LINHA][COLUNA], num = 0;
    char opc;

    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            lug[i][j] = 0;
            poltrona[i][j] = num;
            num++;
        }
    }

    do{
        imprime_menu();
        cin >> opc;
        escolher_opcao(opc, lug, poltrona);

    }while(opc != 'c');

return 0;
system("PAUSE");
}

void imprime_menu(){
    cout << "========================================" << endl;
    cout << "             LEON'S UNIDAS" << endl;
    cout << "========================================" << endl;
    cout << "a. Vender passagem" << endl;
    cout << "b. Mostrar mapa de ocupação do ônibus" << endl;
    cout << "c. Encerrar" << endl;
}


void escolher_opcao(char opc, int lug[LINHA][COLUNA], int poltrona[LINHA][COLUNA]){
    int dispo = 0, polt;
    switch(opc){
            case 'a':
            for(int i = 0; i < LINHA; i++){
                for(int j = 0; j < COLUNA; j++){
                    if(lug[i][j] == 0){
                        dispo++;
                    }
                }
            }
            if(dispo > 0){
                cout << "Qual poltrona deseja ocupar?" << endl;
                cin >> polt;

                for(int i = 0; i < LINHA; i++){
                    for(int j = 0; j < COLUNA; j++){
                        if(polt == poltrona[i][j]){
                            if(lug[i][j] == 0){
                                cout << "VENDA EFETIVADA!" << endl;
                                lug[i][j] = 1;
                            }
                            else{
                                cout << "POLTRONA OCUPADA!" << endl;
                            }
                        }
                    }
                }

            }
            break;
            case 'b':
            cout << "================== MAPA DO ÔNIBUS ===================="<< endl;
            cout << "Janela         Corredor        Corredor         Janela" << endl;
            for(int i = 0; i < LINHA; i++){
                cout << endl;
                for(int j = 0; j < COLUNA; j++){
                    cout << "  " << poltrona[i][j] << "(" << lug[i][j] << ")\t       ";
                }
            }
            cout << endl;
            cout << "======LEGENDA======" << endl;
            cout << "Poltronas livres = (0)" << endl;
            cout << "Poltronas ocupadas = (1)" << endl;
            break;

            case 'c':
            EXIT_SUCCESS;
            break;

            default:
            cout << "Opção Inválida!" << endl;
        }

}
