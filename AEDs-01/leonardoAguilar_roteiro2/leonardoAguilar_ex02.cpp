/*
Leonardo Aguilar.
Calcula a multiplicação dos 2 primeiros números dividido pelo terceiro número fornecidos pelo usuário.
Entrada: 3 números.
Saída: Resultado da expressão.
*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    //Inclusão de caracteres especiais
    setlocale(LC_ALL,"Portuguese");

    //Declaração das variáveis
    float num1, num2, num3, resultado;

    //Entrada de dados pelo usuário
    cout << "Digite o 1º, 2º e 3º número, respectivamente: " << endl;
    cin >> num1 >> num2 >> num3;

    //Condição para a divisão
    if(num3 != 0){
        resultado = (num1 * num2)/num3;
    }
    else {
        cout << "Denominador igual a ZERO! Digite novamente o último número: " << endl;
        cin >> num3;

        resultado = (num1 * num2)/num3;
    }

    //Saída de dados (Resultado da expressão)
    cout << "Resultado de "<< "(" << num1 << "*" << num2 << ")" << "/" << num3 << " = "<< resultado <<endl;
    return 0;
}
