/*
Leonardo Aguilar
Calcular quantas voltas Dona Maria precisa fazer no quarteirão para que atinja
sua meta diária.
Entrada: Meta diária, rua A, Rua B.
Saída: Número de voltas necessárias para atingir a meta e o perímetro do quarteirão.
*/

#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;

int main()
{
    //Inclusão de caracteres especiais
    setlocale(LC_ALL,"Portuguese");

    //Declaração das variáveis
    int ruaA, ruaB, metaDia, numVoltas, perimetro;

    //Entrada de dados pelo usuário
    cout << "Digite a medida da rua A (em metros): " << endl;
    cin >> ruaA;

    cout << "Digite a medida da rua B (em metros): " << endl;
    cin >> ruaB;

    cout << "Digite a meta diária de Dona Maria (em Km): " << endl;
    cin >> metaDia;

    //Cálculo do perímetro do quarteirão e do número de voltas
    perimetro =  sqrt(pow(ruaA, 2) + pow(ruaB, 2)) + ruaA + ruaB;
    numVoltas = (perimetro/1000)/metaDia;

    //Saída de dados (Número de voltas necessárias p/ Dona Maria atingir a meta
    cout << "Perímetro do quarteirão: " << perimetro << "m" << endl;
    cout << "O número de voltas necessárias para Dona Maria atingir sua meta diária é: " << numVoltas << " voltas " << endl;

    return 0;
}
