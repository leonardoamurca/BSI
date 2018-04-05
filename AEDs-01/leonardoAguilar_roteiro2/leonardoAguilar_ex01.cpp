/*
Leonardo Aguilar.
Calcula a soma e a média de 3 números passados pelo usuário.
Entrada: 3 números.
Saída: Média e soma.
*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    //Inclusão de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declaração das variáveis
    int num1, num2, num3;
    float soma = 0, media = 0;

    //Entrada de dados pelo usuário
    cout << "Digite o 1º, 2º e 3º número, respectivamente: " << endl;
    cin >> num1 >> num2 >> num3;

    //Calcula soma e média aritmética
    soma = num1 + num2 + num3;
    media = soma / 3;

    //Saída de dados (soma e média)
    cout << "Soma entre " << num1 << " + " << num2 << " + " << num3 << " = " << soma << endl;
    cout << "Média aritmética dos números: " << num1 << ", " << num2 << " e " << num3 << " = " << media << endl;


    return 0;
}
