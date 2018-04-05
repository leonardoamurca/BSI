/*
Leonardo Aguilar
Dado a entrada de 2 números, calcula o quadrado do menor e a raíz quadrada do maior.
Caso sejam iguais, imprima na tela que são iguais!
Entrada: 2 números
Saída: Quadrado do menor e raiz quadrada do maior

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
	float num1, num2;

	//Entrada de dados pelo usuário
    cout << "Digite 2 números: " << endl;
    cin >> num1 >> num2;

    //Comparações entre os 2 números (Maior, menor ou iguais)
    if(num1 > num2) {
        //Condição para existir raíz real
        if(num1 >= 0){
            cout << "Raíz quadrada do maior = " << sqrt(num1) << endl;
        }
        else {
            cout << "Não existe raíz real de números negativos! " << endl;
        }
    cout << "Quadrado do menor = " << pow(num2, 2) << endl;
    }

    else if(num2 > num1) {
        //Condição para existir raíz real
        if(num2 >= 0){
            cout << "Raíz quadrada do maior = " << sqrt(num2) << endl;
        }
        else {
            cout << "Não existe raíz real de números negativos! " << endl;
        }
    cout << "Quadrado do menor = " << pow(num1, 2) << endl;
    }

    else {
        cout << "Números iguais!" << endl;
    }

return 0;
system("PAUSE");
}
