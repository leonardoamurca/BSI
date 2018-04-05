/*
Leonardo Aguilar
Calcula o valor da �rea de uma circunfer�ncia
Entrada: Valor do raio
Sa�da: �rea da circunfer�ncia
*/

#include <iostream>
#include <locale.h>
#include <math.h>
#define pi 3.1416

using namespace std;

int main()
{
    //Inclus�o de caracteres especiais
    setlocale(LC_ALL,"Portuguese");

    //Declara��o das vari�veis
    float raio, area;

    //Entrada de dados pelo usu�rio
    cout << "Digite o valor do raio da circunfer�ncia (em metros): " << endl;
    cin >> raio;

    //C�lculo da �rea
    area = pi*pow(raio,2);

    //Sa�da de dados (�rea)
    cout << "�rea da circunfer�ncia = " << area << " m�" << endl;

    return 0;
}
