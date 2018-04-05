/*
Leonardo Aguilar
Calcula o valor a ser pago por quilowatt, Valor pago pelo consumo na resid�ncia,
Valor a ser pago considerando um desconto de 15%.
Entrada: Valor do sal�rio m�nimo, quantidade de quilowatt consumida.
Sa�da: Valor pago por quilowatt, Valor pago pelo consumo na resid�ncia, Valor a ser pago
considerando um desconto de 15%
*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    //Inclus�o de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declara��o das vari�veis
    float salMin, kwConsumido, valKw, valConsumo, valDesconto;

    //Entrada de dados
    cout << "Digite o valor atual do sal�rio m�nimo (em R$): " << endl;
    cin >> salMin;

    cout << "Digite a quantidade de quilowatt consumida: " << endl;
    cin >> kwConsumido;

    //C�lculo do valor do kW, do consumo da resid�ncia e do consumo com  desconto de 15%
    valKw = salMin/5;
    valConsumo = valKw*kwConsumido;
    valDesconto = valConsumo*0.85;

    cout << "O valor pago por kW � R$ " << valKw << endl;
    cout << "O valor a ser pago pelo consumo nessa resid�ncia � R$ " << valConsumo << endl;
    cout << "O valor a ser pago considerando um desconto de 15% � de R$ " << valDesconto << endl;


    return 0;
}
