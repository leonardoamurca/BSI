/*
Leonardo Aguilar
Mostra a parte inteira e a parte fracion�ria de um n�mero digitado pelo usu�rio
Entrada: N�mero real
Sa�da: Parte inteira do n�mero, parte fracion�ria do n�mero

*/

#include <iostream>
#include <locale.h>
#include <cmath>

using namespace std;

int main()
{
    //Inclus�o de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declara��o das vari�veis
    float num;

    //Entrada de dados
    cout << "Digite um n�mero: " << endl;
    cin >> num;

    //Sa�da de dados (Parte inteira e fracion�ria
    cout << "Parte inteira: " << (int)num << endl;
    cout << "Parte fracion�ria: " << num - ((int)num)<< endl;
    return 0;
}
