/*
Leonardo Aguilar
Calcula a �rea e o per�metro de um ret�ngulo.
Entrada: Comprimento e largura do ret�ngulo.
Sa�da: �rea e Per�metro.
*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    //Inclus�o dos caracteres especiais
    setlocale(LC_ALL,"Portuguese");

    //Declara��o das vari�veis
    float comprimento, largura, perimetro, area;

    //Entrada de dados pelo usu�rio
    cout << "Digite os valores do comprimento e da largura do ret�ngulo, respectivamente (em cm): " << endl;
    cin >> comprimento >> largura;

    //C�lculo da �rea e do per�metro do ret�ngulo
    area = comprimento*largura;
    perimetro = comprimento*2 + largura*2;

    //Sa�da de dados (�rea e Per�metro)
    cout << "�rea = " << area << "cm�" << endl;
    cout << "Per�metro = " << perimetro << "cm"<< endl;

    return 0;
}
