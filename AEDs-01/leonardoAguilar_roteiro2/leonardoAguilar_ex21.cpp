/*
Leonardo Aguilar
Trocar valores de 2 variáveis
Entrada: 2 números
Saída: Conteúdo das variáveis trocadas
*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    //Inclusão de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declaração das variáveis
    int a, b, aux;

    //Entrada de dados pelo usuário
    cout << "Digite o valor de a: " << endl;
    cin >> a;

    cout << "Digite o valor de b: " << endl;
    cin >> b;

    //Troca de valores entre a variáveis a e b
    aux = a;
    a = b;
    b = aux;

    //Saída de dados (valores das variáveis trocadas)
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
