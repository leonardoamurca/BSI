/*
Leonardo Aguilar
Calcula o número de pessoas que não possuem preferências por novelas
Entrada: A, B, C, A e B, A e C, B e C, A, B e C
Saída: Número de telespectadores que não possuem preferências por novelas

Considere o total de pessoas estrevistadas como 3000!!
*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    //Inclusão de caracteres especiais
    setlocale(LC_ALL,"Portuguese");

    //Declaração das variáveis
    int a, b, c, aeb, aec, bec, abec, total = 3000, nenhum = 0;

    //Entrada de dados
    cout << "Digite o número de telespectadores de A: " << endl;
    cin >> a;

    cout << "Digite o número de telespectadores de B: " << endl;
    cin >> b;

    cout << "Digite o número de telespectadores de C: " << endl;
    cin >> c;

    cout << "Digite o número de telespectadores de A e B: " << endl;
    cin >> aeb;

    cout << "Digite o número de telespectadores de A e C: " << endl;
    cin >> aec;

    cout << "Digite o número de telespectadores de B e C: " << endl;
    cin >> bec;

    cout << "Digite o número de telespectadores de A, B e C: " << endl;
    cin >> abec;

    //Cálculo dos que não têm preferência por nenhuma novela
    nenhum = total - (a + (c - aec) + b - (aeb - (abec - bec)));

    //Saída de dados (Número de pessoas que não possuem preferências por novelas)
    cout << "O número de pessoas que não têm preferência por nenhuma novela são: "<< nenhum << " pessoas" << endl;

    return 0;
}
