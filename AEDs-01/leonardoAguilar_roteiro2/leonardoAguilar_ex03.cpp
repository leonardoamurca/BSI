/*
Leonardo Aguilar.
Calcula a m�dia ponderada de 3 notas e seus respectivos pesos fornecidos pelo usu�rio.
Entrada: 3 notas e 3 pesos.
Sa�da: M�dia ponderada.
*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    //Inclus�o dos caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declara��o das vari�veis
    float nota1, nota2, nota3, peso1, peso2, peso3, mediaPonderada = 0;

    //Entrada de dados pelo usu�rio
    cout << "Digite as notas 1, 2 e 3, respectivamente: " << endl;
    cin >> nota1 >> nota2 >> nota3;

    cout << "Digite os pesos das notas 1, 2 e 3, respectivamente: " << endl;
    cin >> peso1 >> peso2 >> peso3;

    //C�culo da M�dia Ponderada
    mediaPonderada = ( (nota1*peso1) + (nota2*peso2) + (nota3*peso3) ) / (peso1 + peso2 + peso3);

    //Sa�da de dados (M�dia Ponderada)
    cout << "A m�dia ponderada das notas: " << nota1 << ", " << nota2 << " e " << nota3 << " � igual a: " << mediaPonderada << endl;

    return 0;
}
