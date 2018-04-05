/*
Leonardo Aguilar
Calcula a área e o preço médio de venda do terreno trapezoidal.
Entrada: Base menor, base maior e altura do trapézio, valor médio/m² do terreno.
Saída: Área total e o valor médio de venda do terreno.
*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    //Inclusão de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declaração das variáveis
    float baseMen, baseMai, alt, valMedio, area, valVenda;

    //Entrada de dados pelo usuário
    cout << "Digite a base MENOR do trapézio (em metros): " << endl;
    cin >> baseMen;

    cout << "Digite a base MAIOR do trapézio (em metros): " << endl;
    cin >> baseMai;

    cout << "Digite a altura do trapézio (em metros): " << endl;
    cin >> alt;

    cout << "Digite o valor médio pago por m² no local onde se encontra o lote (em R$): "  << endl;
    cin >> valMedio;

    //Cálculo da área e o valor da venda do terreno
    area = ( (baseMen + baseMai) * alt )/ 2;
    valVenda = area * valMedio;

    //Saída de dados (Área dp trapézio e o valor médio de venda)
    cout << "Área total do terreno: " << area << " m²" << endl;
    cout << "O valor médio de venda que Zé Borba Gato pode pedir pelo terreno é: R$ " << valVenda << endl;

    return 0;
}
