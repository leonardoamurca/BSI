/*
Leonardo Aguilar
Simula uma calculadora aritm�tica
Entrada: 2 n�meros
Sa�da: Resultado, Opera��o inv�lida, sair do programa

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

	//Menu de entrada de dados
    cout << "====================" << endl;
    cout << "Calculadora de Leonardo" << endl;
    cout << "====================" << endl;
    cout << "Op��es: " << endl;
    cout << "   1 - Soma" << endl;
    cout << "   2 - Subtra��o" << endl;
    cout << "   3 - Multiplica��o" << endl;
    cout << "   4 - Divis�o" << endl;
    cout << "   5 - Sair" << endl;

    //Loop da entrada de dados
    do{
        cout << "Digite uma op��o:" << endl;
        cin >> opc;
        //Verifica a escolha da op��o do usu�rio
        if(opc == 5){
            return EXIT_SUCCESS;
        }
        else if(opc == 1 or opc == 2 or opc == 3 or opc == 4){

            //Entrada de dados pelo usu�rio
            cout << "Digite 2 n�meros: " << endl;
            cin >> a >> b;

            //Realiza opera��es aritm�ticas de acordo com a escolha do usu�rio
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
            }
            //Sa�da de dados (Resultado da opera��o)
            cout << "Resultado = " << result << endl;
        }
        else{
            cout << "Op��o inv�lida! " << endl;
        }
    }while(opc != 5);
return 0;
}
