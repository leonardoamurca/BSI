    /*
Leonardo Aguilar
Calcula o montante de um capital inicial de R$2000,00 sobre um rendimento de 0.5%
ao mês no final de 2 anos.
Entrada: Não possui entrada.
Saída: Montante
*/
#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;

int main()
{
    //Inclusão de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declaração de variáveis
    float montante;

    //Cálculo do montante ( Montante = Capital * ((1 + taxa))e24 ) 2 anos = 24 meses
    montante = 2000 * pow( (1 + 0.005), 24);

    //Saída (Montante)
    cout << "Montante ao final dos 2 anos (24 meses): R$" << montante << endl;

    return 0;
}
