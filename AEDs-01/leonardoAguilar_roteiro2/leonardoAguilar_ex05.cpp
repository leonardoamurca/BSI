/*
Leonardo Aguilar
Calcula o valor de benef�cio a ser recebido por um funcion�rio no final do m�s.
Dados:(Benef�cio = sal�rio fixo + 4% de comiss�o sobre suas vendas).
Entrada: Sal�rio fixo, valor de vendas realizadas por um funcion�rio.
Sa�da: Benef�cio a ser recebido.
*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    //Inclus�o de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declara��o das vari�veis
    float salFixo, valorVendas, beneficio = 0;

    //Entrada de dados pelo usu�rio
    cout << "Digite o sal�rio fixo do funcion�rio (em R$): " << endl;
    cin >> salFixo;

    cout << "Digite o valor em vendas realizadas pelo funcion�rio (em R$): " << endl;
    cin >> valorVendas;

    //Calcula o benef�cio a ser recebido pelo funcion�rio
    beneficio = (valorVendas*0.04) + salFixo;

    //Sa�da de dados (Benef�cio a ser recebido):
    cout << "O benef�cio a ser recebido pelo funcion�rio � de R$ " << beneficio << endl;

    return 0;
}
