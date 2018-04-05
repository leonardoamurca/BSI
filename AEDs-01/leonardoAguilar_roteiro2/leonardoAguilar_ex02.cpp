/*
Leonardo Aguilar.
Calcula a multiplica��o dos 2 primeiros n�meros dividido pelo terceiro n�mero fornecidos pelo usu�rio.
Entrada: 3 n�meros.
Sa�da: Resultado da express�o.
*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    //Inclus�o de caracteres especiais
    setlocale(LC_ALL,"Portuguese");

    //Declara��o das vari�veis
    float num1, num2, num3, resultado;

    //Entrada de dados pelo usu�rio
    cout << "Digite o 1�, 2� e 3� n�mero, respectivamente: " << endl;
    cin >> num1 >> num2 >> num3;

    //Condi��o para a divis�o
    if(num3 != 0){
        resultado = (num1 * num2)/num3;
    }
    else {
        cout << "Denominador igual a ZERO! Digite novamente o �ltimo n�mero: " << endl;
        cin >> num3;

        resultado = (num1 * num2)/num3;
    }

    //Sa�da de dados (Resultado da express�o)
    cout << "Resultado de "<< "(" << num1 << "*" << num2 << ")" << "/" << num3 << " = "<< resultado <<endl;
    return 0;
}
