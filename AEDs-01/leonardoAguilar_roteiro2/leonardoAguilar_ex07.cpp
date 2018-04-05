/*
Leonardo Aguilar
Calcula a �rea e o pre�o m�dio de venda do terreno trapezoidal.
Entrada: Base menor, base maior e altura do trap�zio, valor m�dio/m� do terreno.
Sa�da: �rea total e o valor m�dio de venda do terreno.
*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    //Inclus�o de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declara��o das vari�veis
    float baseMen, baseMai, alt, valMedio, area, valVenda;

    //Entrada de dados pelo usu�rio
    cout << "Digite a base MENOR do trap�zio (em metros): " << endl;
    cin >> baseMen;

    cout << "Digite a base MAIOR do trap�zio (em metros): " << endl;
    cin >> baseMai;

    cout << "Digite a altura do trap�zio (em metros): " << endl;
    cin >> alt;

    cout << "Digite o valor m�dio pago por m� no local onde se encontra o lote (em R$): "  << endl;
    cin >> valMedio;

    //C�lculo da �rea e o valor da venda do terreno
    area = ( (baseMen + baseMai) * alt )/ 2;
    valVenda = area * valMedio;

    //Sa�da de dados (�rea dp trap�zio e o valor m�dio de venda)
    cout << "�rea total do terreno: " << area << " m�" << endl;
    cout << "O valor m�dio de venda que Z� Borba Gato pode pedir pelo terreno �: R$ " << valVenda << endl;

    return 0;
}
