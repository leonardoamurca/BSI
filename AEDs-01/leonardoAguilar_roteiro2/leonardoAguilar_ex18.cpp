/*
Leonardo Aguilar
Calcula o quadrado, o cubo, a ra�z quadrada e a ra�z c�bica de um n�mero positivo.
Entrada: N�mero positivo.
Sa�da: O quadrado, o cubo, a ra�z quadrada e a ra�z c�bica de um n�mero positivo.

*/
#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;

int main()
{
    //Inclus�o de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declara��o das vari�veis
    float num;

    //Entrada de dados
    cout << "Digite um n�mero positivo: " << endl;
    cin >> num;

    //Sa�da de dados (Quadrado, Cubom Ra�z quadrada e ra�z c�bica)
    cout << "Quadrado: " << pow(num,2) << endl;
    cout << "Cubo: " << pow(num,3) << endl;
    cout << "Ra�z quadrada: " << sqrt(num) << endl;
    cout << "Ra�z c�bica: " << cbrt(num);

    return 0;
}
