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

int main(){

    //Inclusão de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    int lug[LINHA][COLUNA], poltrona[LINHA][COLUNA], dispo = 0, num = 0, polt;
    char opc;




    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            lug[i][j] = 0;
            poltrona[i][j] = num;
            num++;
        }
    }

    do{
        cout << "========================================" << endl;
        cout << "             LEON'S UNIDAS" << endl;
        cout << "========================================" << endl;
        cout << "a. Vender passagem" << endl;
        cout << "b. Mostrar mapa de ocupação do ônibus" << endl;
        cout << "c. Encerrar" << endl;
        cin >> opc;

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
            return EXIT_SUCCESS;
            break;

            default:
            cout << "Opção Inválida!" << endl;
        }
    }while(opc != 'c');

return 0;
system("PAUSE");
}
