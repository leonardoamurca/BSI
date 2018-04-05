/*
Leonardo Aguilar
Calcular a medida da escada
Entrada: �ngulo, Altura da parede
Sa�da: Medida da escada

*/

#include <iostream>
#include <locale.h>
#include <math.h>
#define pi 3.1416

using namespace std;

int main()
{
    //Inclus�o de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declara��o das vari�veis
    float ang, alt, medEscada, angRad;

    //Entrada de dados pelo usu�rio
    cout << "Digite o valor do �ngulo (em graus): " << endl;
    cin >> ang;

    cout << "Digite a altura da parede (em metros): " << endl;
    cin >> alt;

    //Convers�o para radianos
    angRad = (pi*ang)/180;

    //C�lculo da medida da escada
    medEscada = alt/sin(angRad);

    //Sa�da de dados
    cout << "A medida da escada � igual a " << medEscada << " m" << endl;

    return 0;
}
