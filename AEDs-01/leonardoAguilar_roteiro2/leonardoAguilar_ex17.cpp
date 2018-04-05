/*
Leonardo Aguilar
Calcula o valor a ser pago por quilowatt, Valor pago pelo consumo na residência,
Valor a ser pago considerando um desconto de 15%.
Entrada: Valor do salário mínimo, quantidade de quilowatt consumida.
Saída: Valor pago por quilowatt, Valor pago pelo consumo na residência, Valor a ser pago
considerando um desconto de 15%
*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    //Inclusão de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declaração das variáveis
    float salMin, kwConsumido, valKw, valConsumo, valDesconto;

    //Entrada de dados
    cout << "Digite o valor atual do salário mínimo (em R$): " << endl;
    cin >> salMin;

    cout << "Digite a quantidade de quilowatt consumida: " << endl;
    cin >> kwConsumido;

    //Cálculo do valor do kW, do consumo da residência e do consumo com  desconto de 15%
    valKw = salMin/5;
    valConsumo = valKw*kwConsumido;
    valDesconto = valConsumo*0.85;

    cout << "O valor pago por kW é R$ " << valKw << endl;
    cout << "O valor a ser pago pelo consumo nessa residência é R$ " << valConsumo << endl;
    cout << "O valor a ser pago considerando um desconto de 15% é de R$ " << valDesconto << endl;


    return 0;
}
