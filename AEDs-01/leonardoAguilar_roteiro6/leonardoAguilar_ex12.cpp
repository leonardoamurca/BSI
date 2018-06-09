/*LEONARDO AGUILAR MURCA*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <string.h>

using namespace std;

const int LINHA = 5, COLUNA = 3;

int main(){

    //Inclusão de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    int estoque[LINHA][COLUNA], qtd[4];

    for(int i = 0; i < (LINHA-1); i++){
        for(int j = 0; j < COLUNA; j++){
            cin >> estoque[i][j];
        }
    }
    for(int i = 0; i < COLUNA; i++){
        cout << "Digite o custo unitário do produto " << i<< ": " << endl;
        cin >> estoque[LINHA-1][i];
    }


//    cout << endl;
//    for(int i = 0; i < LINHA; i++){
//        for(int j = 0; j < COLUNA; j++){
//            cout << estoque[i][j] << " ";
//        }
//        cout << endl;
//    }

    int a[LINHA-1], maior = -10000, maior2 = 0;
    for(int i = 0; i < (LINHA-1); i++){
        a[i] = 0;

    }

    for(int i = 0; i < (LINHA-1); i++){
        for(int j = 0; j < COLUNA; j++){
            a[i] += estoque[i][j];
        }
    }
    cout << endl;
    for(int i = 0; i < (LINHA-1); i++ ){
        cout << "Armazém " << i<< ": " << a[i] << " itens." << endl;
    }

    for(int i = 0; i < (LINHA-1); i++){
        if(estoque[i][1] > maior2){
            maior = estoque[i][1];
            maior2 = i;
        }
    }

    cout << "Armazém com maior quantidade do produto 2: " << maior2 << endl;

    int menor = 10000, menora = 0;

    for(int i = 0; i < (LINHA-1); i++){
        if(a[i]< menor){
            menor = a[i];
            menora = i;
        }
    }
    cout << "Armazém com menor estoque: " << menora << endl;

    float custo[LINHA-1], mai = -10000, maic = 0;

    for(int i = 0; i < (LINHA-1); i++){
        custo[i] = 0;
    }

    for(int i = 0; i < (LINHA-1); i++){
        for(int j = 0; j < COLUNA; j++){
            custo[i] += estoque[i][j]*estoque[4][j];
        }
    }

    for(int i = 0; i < (LINHA-1); i++){
        if(custo[i] > mai){
            mai = custo[i];
            maic = i;
        }
    }

    cout << endl;

    cout << "O armazém com maior custo de estocagem é : " << maic << endl;




return 0;
system("PAUSE");
}
