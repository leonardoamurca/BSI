/*
Leonardo Aguilar
Calcula o MDC entre 2 números digitados pelo usuário
Entrada: 2 números
Saída: MDC
*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main(){
    //Inclusão dos caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declaração das variáveis
    int a, b, r, result = 0;

    //Entrada de dados
    cout << "Digite 2 números: " << endl;
    cin >> a >> b;

    //Conferência da entrada de dados válidos
    if((a <= 0) or (b <= 0)){
        cout << "Entrada inválida! " << endl;
        cout << "Digite 2 números: " << endl;
        cin >> a >> b;
    }
    else{
        //Cálculo do MDC
        for(int i = 0; r != 0; i++ ){
            if(a >= b){
                r = a%b;
                a = b;
                b = r;
                result = a;
            }
        else if(b >= a){
            r = b%a;
            b = a;
            a = r;
            result = b;
        }
    }

    //Saída de dados
    cout << "MDC" << " = " << result << endl;
    }
return 0;
system("PAUSE");
}
