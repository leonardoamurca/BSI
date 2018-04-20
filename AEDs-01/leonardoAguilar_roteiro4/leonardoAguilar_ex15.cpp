/*
Leonardo Aguilar
Simula uma calculadora aritmética
Entrada: 2 números
Saída: Resultado

 */

#include <iostream>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main(){
	//Inclusão de caracteres especiais
	setlocale(LC_ALL, "Portuguese");

	//Declaração das variáveis
	int opc;
	float result = 0, a , b;

	//Entrada de dados pelo usuário
    cout << "====================" << endl;
    cout << "Calculadora de Leonardo" << endl;
    cout << "====================" << endl;
    cout << "Opções: " << endl;
    cout << "   1 - Soma" << endl;
    cout << "   2 - Subtração" << endl;
    cout << "   3 - Multiplicação" << endl;
    cout << "   4 - Divisão" << endl;
    cout << "   5 - Sair" << endl;

    cout << "Digite 2 números: " << endl;
    cin >> a >> b;

    cout << "Digite uma opção:" << endl;
    cin >> opc;

    switch (opc){
        case 1:
            result = a + b;
            break;
        case 2:
            result = a - b;
            break;
        case 3:
            result = a*b;
            break;
        case 4:
            if(b == 0){
                cout << "Não existe divisão por ZERO! " << endl;
            }
            else{
                result = a/b;
            }
            break;
        case 5:
            return EXIT_SUCCESS;
            break;
        default:
            cout << "Opção inválida!" << endl;
    }
    cout << "Resultado = " << result << endl;

return 0;
}
