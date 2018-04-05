/*
Leonardo Aguilar
Mostra a parte inteira e a parte fracionária de um número digitado pelo usuário
Entrada: Número real
Saída: Parte inteira do número, parte fracionária do número

*/

#include <iostream>
#include <locale.h>
#include <cmath>

using namespace std;

int main()
{
    //Inclusão de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declaração das variáveis
    float num;

    //Entrada de dados
    cout << "Digite um número: " << endl;
    cin >> num;

    //Saída de dados (Parte inteira e fracionária
    cout << "Parte inteira: " << (int)num << endl;
    cout << "Parte fracionária: " << num - ((int)num)<< endl;
    return 0;
}
