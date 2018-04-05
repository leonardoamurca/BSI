/*
Leonardo Aguilar
Calcula o quadrado, o cubo, a raíz quadrada e a raíz cúbica de um número positivo.
Entrada: Número positivo.
Saída: O quadrado, o cubo, a raíz quadrada e a raíz cúbica de um número positivo.

*/
#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;

int main()
{
    //Inclusão de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declaração das variáveis
    float num;

    //Entrada de dados
    cout << "Digite um número positivo: " << endl;
    cin >> num;

    //Saída de dados (Quadrado, Cubom Raíz quadrada e raíz cúbica)
    cout << "Quadrado: " << pow(num,2) << endl;
    cout << "Cubo: " << pow(num,3) << endl;
    cout << "Raíz quadrada: " << sqrt(num) << endl;
    cout << "Raíz cúbica: " << cbrt(num);

    return 0;
}
