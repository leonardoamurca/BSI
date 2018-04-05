/*
Leonardo Aguilar
Calcula o n�mero de pessoas que n�o possuem prefer�ncias por novelas
Entrada: A, B, C, A e B, A e C, B e C, A, B e C
Sa�da: N�mero de telespectadores que n�o possuem prefer�ncias por novelas

Considere o total de pessoas estrevistadas como 3000!!
*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    //Inclus�o de caracteres especiais
    setlocale(LC_ALL,"Portuguese");

    //Declara��o das vari�veis
    int a, b, c, aeb, aec, bec, abec, total = 3000, nenhum = 0;

    //Entrada de dados
    cout << "Digite o n�mero de telespectadores de A: " << endl;
    cin >> a;

    cout << "Digite o n�mero de telespectadores de B: " << endl;
    cin >> b;

    cout << "Digite o n�mero de telespectadores de C: " << endl;
    cin >> c;

    cout << "Digite o n�mero de telespectadores de A e B: " << endl;
    cin >> aeb;

    cout << "Digite o n�mero de telespectadores de A e C: " << endl;
    cin >> aec;

    cout << "Digite o n�mero de telespectadores de B e C: " << endl;
    cin >> bec;

    cout << "Digite o n�mero de telespectadores de A, B e C: " << endl;
    cin >> abec;

    //C�lculo dos que n�o t�m prefer�ncia por nenhuma novela
    nenhum = total - (a + (c - aec) + b - (aeb - (abec - bec)));

    //Sa�da de dados (N�mero de pessoas que n�o possuem prefer�ncias por novelas)
    cout << "O n�mero de pessoas que n�o t�m prefer�ncia por nenhuma novela s�o: "<< nenhum << " pessoas" << endl;

    return 0;
}
