/*
Leonardo Aguilar
Calcula a área do cômodo retangular e a potência de iluminação necessária para
iluminar corretamente o cômodo.
Entrada: Lado 1, lado 2
Saída: Área do cômodo, Potência necessária
*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    //Inclusão de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declaração das variáveis
    int lado1, lado2, area, potencia;

    //Entrada de dados pelo usuário
    cout << "Digite a medida dos lados do cômodo (em metros): " << endl;
    cin >> lado1 >> lado2;

    //Cálculo da área e da potência necessária para a iluminação do cômodo
    area = lado1*lado2;
    potencia = area*18;

    //Saída de dados (Área e Potência)
    cout << "A área do cômodo é igual a " << area << " m²" << endl;
    cout << "A potência de iluminação necessária para iluminar o cômodo é de " << potencia << " W" << endl;

    return 0;
}
