/*
Leonardo Aguilar
Simula uma calculadora aritm�tica
Entrada: 2 n�meros
Sa�da: Resultado

 */

#include <iostream>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main(){
	//Inclus�o de caracteres especiais
	setlocale(LC_ALL, "Portuguese");

	//Declara��o das vari�veis
	int opc;
	float result = 0, a , b;

	//Entrada de dados pelo usu�rio
    cout << "====================" << endl;
    cout << "Calculadora de Leonardo" << endl;
    cout << "====================" << endl;
    cout << "Op��es: " << endl;
    cout << "   1 - Soma" << endl;
    cout << "   2 - Subtra��o" << endl;
    cout << "   3 - Multiplica��o" << endl;
    cout << "   4 - Divis�o" << endl;
    cout << "   5 - Sair" << endl;

    cout << "Digite 2 n�meros: " << endl;
    cin >> a >> b;

    cout << "Digite uma op��o:" << endl;
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
                cout << "N�o existe divis�o por ZERO! " << endl;
            }
            else{
                result = a/b;
            }
            break;
        case 5:
            return EXIT_SUCCESS;
            break;
        default:
            cout << "Op��o inv�lida!" << endl;
    }
    cout << "Resultado = " << result << endl;

return 0;
}
