/*
Leonardo Aguilar
Calcula o MDC entre 2 n�meros digitados pelo usu�rio
Entrada: 2 n�meros
Sa�da: MDC
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
    //Inclus�o dos caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declara��o das vari�veis
    int a, b, r, result = 0;

    //Entrada de dados
    cout << "Digite 2 n�meros: " << endl;
    cin >> a >> b;

    //Confer�ncia da entrada de dados v�lidos
    if((a <= 0) or (b <= 0)){
        cout << "Entrada inv�lida! " << endl;
        cout << "Digite 2 n�meros: " << endl;
        cin >> a >> b;
    }
    else{
        //C�lculo do MDC
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

    //Sa�da de dados
    cout << "MDC" << " = " << result << endl;
    }
return 0;
system("PAUSE");
}
