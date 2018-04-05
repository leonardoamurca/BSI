/*
Leonardo Aguilar
Calcula o valor da área de uma circunferência
Entrada: Valor do raio
Saída: Área da circunferência
*/

#include <iostream>
#include <locale.h>
#include <math.h>
#define pi 3.1416

using namespace std;

int main()
{
    //Inclusão de caracteres especiais
    setlocale(LC_ALL,"Portuguese");

    //Declaração das variáveis
    float raio, area;

    //Entrada de dados pelo usuário
    cout << "Digite o valor do raio da circunferência (em metros): " << endl;
    cin >> raio;

    //Cálculo da área
    area = pi*pow(raio,2);

    //Saída de dados (Área)
    cout << "Área da circunferência = " << area << " m²" << endl;

    return 0;
}
