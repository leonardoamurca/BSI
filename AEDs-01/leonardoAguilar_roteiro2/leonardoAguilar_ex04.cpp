/*
Leonardo Aguilar.
Calcula o sal�rio reajustado de um funcion�rio dado seu sal�rio base pelo usu�rio e sabendo que o funcionario recebe
uma gratifica��o de 10% sobre o sal�rio base e paga 5% de imposto sobre o valor acumulado.
Entrada: Sal�rio base.
Sa�da: Sal�rio reajustado.
*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    //Inclus�o dos caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declara��o das vari�veis
    float salBase = 0, salReajustado = 0;

    //Entrada de dados pelo usu�rio
    cout << "Digite o sal�rio base do funcion�rio (em R$): " << endl;
    cin >> salBase;

    //C�lculo do sal�rio reajustado
    salReajustado = (salBase*1.1)*0.95;

    // Sa�da de dados (Sal�rio Reajustado)
    cout << "Sal�rio reajustado: R$ " << salReajustado << endl;

    return 0;
}
