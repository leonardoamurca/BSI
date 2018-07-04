/*LEONARDO AGUILAR MURCA*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

const int LINHA = 50, COLUNA = 3;

void imprime_menu();
void escolher_opcao(char opc, int planta[LINHA][COLUNA], int aSeComprar[LINHA], string nome[LINHA]);

int main(){

    //Inclusão de caracteres especiais
    setlocale(LC_ALL, "Portuguese");
    int planta[LINHA][COLUNA], opc;
    string nome[LINHA];
    for(int i = 0; i < COLUNA; i++){
        nome[i] = " ";
    }
    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            planta[i][j] = 0;
        }
    }
    int aSeComprar[LINHA];
    for(int i = 0; i < LINHA; i++){
        aSeComprar[i] = 0;
    }

   do{
    imprime_menu();
    cin >> opc;
    escolher_opcao(opc, planta, aSeComprar, nome);
   }while(opc != 5);

return 0;
system("PAUSE");
}

void imprime_menu(){
    cout << "==========================================" << endl;
    cout << "FLORICULTURA LEONSFLOR" << endl;
    cout << "==========================================" << endl;
    cout << "1. CADASTRAR NOVA PLANTA" << endl;
    cout << "2. RETIRAR PLANTA" << endl;
    cout << "3. INSERIR PLANTA" << endl;
    cout << "4. IMPRIMIR RELATÓRIO" << endl;
    cout << "5. SAIR" << endl;
}

void escolher_opcao(char opc, int planta[LINHA][COLUNA], int aSeComprar[LINHA], string nome[LINHA]){
    int plt = 0, cad = 0, retira = 0, estq = 0, inserir = 0, compra = 0;

    switch(opc){
        case 1:
        for(int i = 0; i < LINHA; i++){
//            if(planta[i][0] == 0){
//                plt++;
//            }
            if(planta[i][0] == 0){
                cad = i;
            }
        }
//        if(plt == LINHA){
            for(int i = 0; i < COLUNA; i++){
                if(i == 0){
                    cout << "Digite o código da planta: " << endl;
                    cin >> planta[cad][i];

                    cout << "Digite o nome da planta: " << endl;
                    cin >> nome[cad];
                }
                else if(i == 1){
                    cout << "Digite o estoque ideal: " << endl;
                    cin >> planta[cad][i];
                }
                else{
                    cout << "Digite a quantidade atual no estoque: " << endl;
                    cin >> planta[cad][i];
                }
            //}
        }

        break;

        case 2:
        cout << "Digite o código da planta que queres retirar: " << endl;
        cin >> retira;

        for(int i = 0; i < LINHA; i++){
            if(planta[i][0] == retira){
                for(int j = 0; j < COLUNA; j++){
                    if(planta[i][2] > 0){
                        planta[i][j] = 0;
                    }
                    else{
                        estq++;
                    }
                }
                nome[i] = ' ';
            }
        }
        if(estq > 0){
            cout << "Estoque vazio! " << endl;
        }
    break;

        case 3:
        cout << "Digite o código da planta que deseja inserir: " << endl;
        cin >> inserir;

        cout << "Digite a quantidade comprada: " << endl;
        cin >> compra;

        for(int i = 0; i < LINHA; i++){
            if(inserir == planta[i][0]){
                planta[i][2] += compra;
            }
        }
        break;

        case 4:
        for(int i = 0; i < LINHA; i++){
            for(int j = 0; j < COLUNA; j++){
                if(planta[i][2] < planta[i][1]){
                    aSeComprar[i] = planta[i][1] - planta[i][2];
                }
            }
        }
        cout << "Código       Estoque Ideal     Estoque atual      Qtd a se comprar    Nome" << endl;
        for(int i = 0; i < LINHA; i++){

            for(int j = 0; j < COLUNA; j++){
                if(planta[i][0] != 0){
                    cout << "  " << planta[i][j] << "\t \t  ";
                }
            }
            if(planta[i][0] != 0){
                cout<<"      " << aSeComprar[i] << "\t";
                cout << "     " << nome[i];
                cout << endl;
            }
        }
    break;

    case 5:
    break;

    default:
    cout << "Opção inválida! " << endl;
    break;
    }
}
