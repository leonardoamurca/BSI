/*LEONARDO AGUILAR MURCA


    4
1 1 1 0
0 1 1 0
1 0 1 1
0 0 1 1
2
Saem de K = 3
Chegam à K = 4



*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <string.h>

using namespace std;

const int LINHA = 8, COLUNA = 8;

int main(){

    //Inclusão de caracteres especiais
    setlocale(LC_ALL, "Portuguese");
    int n;
    cin >> n;

    int L[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> L[i][j];
        }
    }

    //Saem da cidade K (i)
    int k, saem = 0, chegam = 0;
    cin >> k;


        for(int j = 0; j < n; j++){
            if(L[k][j] == 1){
                saem++;
            }
            if(L[j][k] == 1){
                chegam++;
            }
        }

    cout << "Saem de K = " << saem << endl;
    cout << "Chegam à K = " << chegam << endl;

    int chegando[n], maior = -10000, cid = 0;

    for(int i = 0; i < n; i++){
        chegando[i] = 0;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(L[i][j] == 1){
                chegando[j]++;
                if(chegando[i] > maior){
                    maior = chegando[i];
                    cid = j;
                }
            }
        }
    }

    cout << "A cidade " << cid << " possui o maior numero de cidades chegando!" << endl;

//    int s[n], e[n];
//
//    for(int i = 0; i < n; i++){
//        s[i] = 0;
//        e[i] = 0;
//    }

    int cheg[n], sai[n];

    for(int i = 0; i < n; i++){
        cheg[i] = 0;
        sai[i] = 0;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j ++){
            if(L[i][j] == 1){
                sai[i]++;
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j ++){
            if(L[j][i] == 1){
                cheg[i]++;
            }
        }
    }

    cout << endl;

//    int isos[n];
//    string resp;
//    cout << "As cidades isoladas são: ";
//    for(int i = 0; i < n; i++){
//        if(cheg[i] == 0 and sai[i] == 0){
//            cout << i << "º ";
//            resp = " ";
//        }
//        else{
//            resp = "Nenhuma!";
//        }
//    }
//
//    cout << resp << endl;

    cout << "Não existem cidades isoladas!!!" << endl;














return 0;
system("PAUSE");
}
