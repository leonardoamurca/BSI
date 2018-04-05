/*
Leonardo Aguilar
Calcula o restante do sal�rio de Jo�o ap�s pagar 2 contas atrasadas
(Multa: 2% sobre cada conta).
Entrada: Sal�rio de Jo�o, Valor da conta 1, valor da conta 2.
Sa�da: Restante do sal�rio de Jo�o ap�s pagar tudo.
*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    //Inclus�o dos caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declara��o das vari�veis
    float salJoao = 0, salFinal = 0, valConta1, valConta2;

    //Entrada de dados pelo usu�rio
    cout << "Digite o sal�rio de Jo�o (em R$): " << endl;
    cin >> salJoao;

    cout<< "Digite o valor da conta 1 (em R$): " << endl;
    cin >> valConta1;

    cout<< "Digite o valor da conta 2 (em R$): " << endl;
    cin >> valConta2;

    //Calcula o sal�rio final de Jo�o
    salFinal = salJoao - (valConta1 + valConta2)*2.04/2;

    //Sa�da de dados (Restante do sal�rio de Jo�o ap�s pagar as contas)
    cout << "O sal�rio restante de Jo�o ap�s pagar as contas � de R$" << salFinal << endl;
    return 0;
}
