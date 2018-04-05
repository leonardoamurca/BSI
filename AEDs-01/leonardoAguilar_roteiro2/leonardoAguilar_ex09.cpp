    /*
Leonardo Aguilar
Calcula o montante de um capital inicial de R$2000,00 sobre um rendimento de 0.5%
ao m�s no final de 2 anos.
Entrada: N�o possui entrada.
Sa�da: Montante
*/
#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;

int main()
{
    //Inclus�o de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declara��o de vari�veis
    float montante;

    //C�lculo do montante ( Montante = Capital * ((1 + taxa))e24 ) 2 anos = 24 meses
    montante = 2000 * pow( (1 + 0.005), 24);

    //Sa�da (Montante)
    cout << "Montante ao final dos 2 anos (24 meses): R$" << montante << endl;

    return 0;
}
