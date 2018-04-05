/*
Leonardo Aguilar.
Calcula a soma e a m�dia de 3 n�meros passados pelo usu�rio.
Entrada: 3 n�meros.
Sa�da: M�dia e soma.
*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    //Inclus�o de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declara��o das vari�veis
    int num1, num2, num3;
    float soma = 0, media = 0;

    //Entrada de dados pelo usu�rio
    cout << "Digite o 1�, 2� e 3� n�mero, respectivamente: " << endl;
    cin >> num1 >> num2 >> num3;

    //Calcula soma e m�dia aritm�tica
    soma = num1 + num2 + num3;
    media = soma / 3;

    //Sa�da de dados (soma e m�dia)
    cout << "Soma entre " << num1 << " + " << num2 << " + " << num3 << " = " << soma << endl;
    cout << "M�dia aritm�tica dos n�meros: " << num1 << ", " << num2 << " e " << num3 << " = " << media << endl;


    return 0;
}
