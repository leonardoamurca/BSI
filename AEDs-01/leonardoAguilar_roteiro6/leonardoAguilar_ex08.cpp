/*LEONARDO AGUILAR MURCA*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <string.h>

using namespace std;


int main(){

    //Inclusão de caracteres especiais
    setlocale(LC_ALL, "Portuguese");
    int n;
    cin >> n;
    float mat[n][n] ,vet[n];
    int contL = 0, contC = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> mat[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        contL = 0;
        for(int j = 0; j < n; j++){
            if(mat[i][j] == 1){
                contL++;
            }
        }
    }

    for(int j = 0; j < n; j++){
        contC = 0;
        for(int i = 0; i < n; i++){
            if(mat[i][j] == 1){
                contC++;
            }
        }
    }


    if((contL == 1) and (contC == 1) ){
        cout << "Matriz permutação!" << endl;
    }
    else{
        cout << "Não é matriz permutação!" << endl;
    }

return 0;
system("PAUSE");
}
