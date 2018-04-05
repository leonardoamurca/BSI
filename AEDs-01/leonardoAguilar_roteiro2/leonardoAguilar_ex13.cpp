/*
Leonardo Aguilar
Calcula a �rea do c�modo retangular e a pot�ncia de ilumina��o necess�ria para
iluminar corretamente o c�modo.
Entrada: Lado 1, lado 2
Sa�da: �rea do c�modo, Pot�ncia necess�ria
*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    //Inclus�o de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declara��o das vari�veis
    int lado1, lado2, area, potencia;

    //Entrada de dados pelo usu�rio
    cout << "Digite a medida dos lados do c�modo (em metros): " << endl;
    cin >> lado1 >> lado2;

    //C�lculo da �rea e da pot�ncia necess�ria para a ilumina��o do c�modo
    area = lado1*lado2;
    potencia = area*18;

    //Sa�da de dados (�rea e Pot�ncia)
    cout << "A �rea do c�modo � igual a " << area << " m�" << endl;
    cout << "A pot�ncia de ilumina��o necess�ria para iluminar o c�modo � de " << potencia << " W" << endl;

    return 0;
}
