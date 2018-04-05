/*
Leonardo Aguilar
Simular calculadora
Entrada: 2 números
Saída: Resultado da operação
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
    int num1, num2, result = 0;
    char op;

	//Entrada de dados pelo usuário
    cout << "Digite o 1º número: " << endl;
    cin >> num1;

    cout << "Digite o tipo de operação:" << endl;

    cout << "\t       MENU" << endl;
    cout << "\t (+) --> Soma" << endl;
    cout << "\t (-) --> Subtração" << endl;
    cout << "\t (*) --> Multiplicação" << endl;
    cout << "\t (/) --> Divis]ao" << endl;
    cin >> op;

    cout << "Digite o 2º número: " << endl;
    cin >> num2;

    //Opções da calculadora
    switch(op){

        case '+':
            result = num1 + num2;
            cout << num1 << " + " << num2 << " = " << result << endl;
            break;

        case '-':
            result = num1 + num2;
            cout << num1 << " - " << num2 << " = " << result << endl;
            break;

        case '*':
            result = num1 * num2;
            cout << num1 << " * " << num2 << " = " << result << endl;
            break;

        case '/':
            if(num2 != 0){
                result = num1 + num2;
                cout << num1 << " - " << num2 << " = " << result << endl;
                break;
            }
            else {
                cout << "Não existe divisão por ZERO! " << endl;
                break;
            }
        default: cout << "Opção inválida!" << endl;
        break;
    }

return 0;
system("PAUSE");
}
