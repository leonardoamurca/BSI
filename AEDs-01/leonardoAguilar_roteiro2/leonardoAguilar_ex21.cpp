/*
Leonardo Aguilar
Trocar valores de 2 vari�veis
Entrada: 2 n�meros
Sa�da: Conte�do das vari�veis trocadas
*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    //Inclus�o de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declara��o das vari�veis
    int a, b, aux;

    //Entrada de dados pelo usu�rio
    cout << "Digite o valor de a: " << endl;
    cin >> a;

    cout << "Digite o valor de b: " << endl;
    cin >> b;

    //Troca de valores entre a vari�veis a e b
    aux = a;
    a = b;
    b = aux;

    //Sa�da de dados (valores das vari�veis trocadas)
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
