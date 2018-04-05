/*
Leonardo Aguilar
Calcular a medida da escada
Entrada: Ângulo, Altura da parede
Saída: Medida da escada

*/

#include <iostream>
#include <locale.h>
#include <math.h>
#define pi 3.1416

using namespace std;

int main()
{
    //Inclusão de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declaração das variáveis
    float ang, alt, medEscada, angRad;

    //Entrada de dados pelo usuário
    cout << "Digite o valor do ângulo (em graus): " << endl;
    cin >> ang;

    cout << "Digite a altura da parede (em metros): " << endl;
    cin >> alt;

    //Conversão para radianos
    angRad = (pi*ang)/180;

    //Cálculo da medida da escada
    medEscada = alt/sin(angRad);

    //Saída de dados
    cout << "A medida da escada é igual a " << medEscada << " m" << endl;

    return 0;
}
