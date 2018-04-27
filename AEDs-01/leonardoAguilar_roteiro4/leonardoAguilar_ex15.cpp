/*
Leonardo Aguilar
Simula uma calculadora aritmética
Entrada: 2 números
Saída: Resultado, Operação inválida, sair do programa

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

	//Menu de entrada de dados
    cout << "====================" << endl;
    cout << "Calculadora de Leonardo" << endl;
    cout << "====================" << endl;
    cout << "Opções: " << endl;
    cout << "   1 - Soma" << endl;
    cout << "   2 - Subtração" << endl;
    cout << "   3 - Multiplicação" << endl;
    cout << "   4 - Divisão" << endl;
    cout << "   5 - Sair" << endl;

    //Loop da entrada de dados
    do{
        cout << "Digite uma opção:" << endl;
        cin >> opc;
        //Verifica a escolha da opção do usuário
        if(opc == 5){
            return EXIT_SUCCESS;
        }
        else if(opc == 1 or opc == 2 or opc == 3 or opc == 4){

            //Entrada de dados pelo usuário
            cout << "Digite 2 números: " << endl;
            cin >> a >> b;

            //Realiza operações aritméticas de acordo com a escolha do usuário
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
            }
            //Saída de dados (Resultado da operação)
            cout << "Resultado = " << result << endl;
        }
        else{
            cout << "Opção inválida! " << endl;
        }
    }while(opc != 5);
return 0;
}
