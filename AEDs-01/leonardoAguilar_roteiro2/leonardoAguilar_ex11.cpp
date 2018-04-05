/*
Leonardo Aguilar
Calcular quantas voltas Dona Maria precisa fazer no quarteir�o para que atinja
sua meta di�ria.
Entrada: Meta di�ria, rua A, Rua B.
Sa�da: N�mero de voltas necess�rias para atingir a meta e o per�metro do quarteir�o.
*/

#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;

int main()
{
    //Inclus�o de caracteres especiais
    setlocale(LC_ALL,"Portuguese");

    //Declara��o das vari�veis
    int ruaA, ruaB, metaDia, numVoltas, perimetro;

    //Entrada de dados pelo usu�rio
    cout << "Digite a medida da rua A (em metros): " << endl;
    cin >> ruaA;

    cout << "Digite a medida da rua B (em metros): " << endl;
    cin >> ruaB;

    cout << "Digite a meta di�ria de Dona Maria (em Km): " << endl;
    cin >> metaDia;

    //C�lculo do per�metro do quarteir�o e do n�mero de voltas
    perimetro =  sqrt(pow(ruaA, 2) + pow(ruaB, 2)) + ruaA + ruaB;
    numVoltas = (perimetro/1000)/metaDia;

    //Sa�da de dados (N�mero de voltas necess�rias p/ Dona Maria atingir a meta
    cout << "Per�metro do quarteir�o: " << perimetro << "m" << endl;
    cout << "O n�mero de voltas necess�rias para Dona Maria atingir sua meta di�ria �: " << numVoltas << " voltas " << endl;

    return 0;
}
