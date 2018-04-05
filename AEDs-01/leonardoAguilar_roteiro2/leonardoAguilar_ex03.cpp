/*
Leonardo Aguilar.
Calcula a média ponderada de 3 notas e seus respectivos pesos fornecidos pelo usuário.
Entrada: 3 notas e 3 pesos.
Saída: Média ponderada.
*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    //Inclusão dos caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declaração das variáveis
    float nota1, nota2, nota3, peso1, peso2, peso3, mediaPonderada = 0;

    //Entrada de dados pelo usuário
    cout << "Digite as notas 1, 2 e 3, respectivamente: " << endl;
    cin >> nota1 >> nota2 >> nota3;

    cout << "Digite os pesos das notas 1, 2 e 3, respectivamente: " << endl;
    cin >> peso1 >> peso2 >> peso3;

    //Cáculo da Média Ponderada
    mediaPonderada = ( (nota1*peso1) + (nota2*peso2) + (nota3*peso3) ) / (peso1 + peso2 + peso3);

    //Saída de dados (Média Ponderada)
    cout << "A média ponderada das notas: " << nota1 << ", " << nota2 << " e " << nota3 << " é igual a: " << mediaPonderada << endl;

    return 0;
}
