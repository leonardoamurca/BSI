/*
Leonardo Aguilar
Calcula o valor de  f(x)
Entrada: x
Saída: f(x)
 */

#include <iostream>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
#include <windows.h>

using namespace std;

int main(){
	//Inclusão de caracteres especiais
	setlocale(LC_ALL, "Portuguese");

	//Declaração das variáveis
    float fx, x;

	//Entrada de dados pelo usuário
    cout << "Digite o valor de x: " << endl;
    cin >> x;

    //Condições da função
    if(x <= 1){
        cout << "f(x) = 1" << endl;
    }
    else if(x > 1 and x <= 2){
        cout << "f(x) = 2" << endl;
    }
    else if(x > 2 and x <= 3){
        fx = pow(x,2);
        cout << "f(x) = " << fx << endl;
    }
    else if(x > 3){
        fx = pow(x,3);
        cout << "f(x) = " << fx << endl;
    }

return 0;
system("PAUSE");
}
