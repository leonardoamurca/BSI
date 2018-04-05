/*
Leonardo Aguilar
Calcula a área e o perímetro de um retângulo.
Entrada: Comprimento e largura do retângulo.
Saída: Área e Perímetro.
*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    //Inclusão dos caracteres especiais
    setlocale(LC_ALL,"Portuguese");

    //Declaração das variáveis
    float comprimento, largura, perimetro, area;

    //Entrada de dados pelo usuário
    cout << "Digite os valores do comprimento e da largura do retângulo, respectivamente (em cm): " << endl;
    cin >> comprimento >> largura;

    //Cálculo da área e do perímetro do retângulo
    area = comprimento*largura;
    perimetro = comprimento*2 + largura*2;

    //Saída de dados (Área e Perímetro)
    cout << "Área = " << area << "cm²" << endl;
    cout << "Perímetro = " << perimetro << "cm"<< endl;

    return 0;
}
