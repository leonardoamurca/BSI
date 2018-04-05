/*
Leonardo Aguilar
Calcula o valor de benefício a ser recebido por um funcionário no final do mês.
Dados:(Benefício = salário fixo + 4% de comissão sobre suas vendas).
Entrada: Salário fixo, valor de vendas realizadas por um funcionário.
Saída: Benefício a ser recebido.
*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    //Inclusão de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declaração das variáveis
    float salFixo, valorVendas, beneficio = 0;

    //Entrada de dados pelo usuário
    cout << "Digite o salário fixo do funcionário (em R$): " << endl;
    cin >> salFixo;

    cout << "Digite o valor em vendas realizadas pelo funcionário (em R$): " << endl;
    cin >> valorVendas;

    //Calcula o benefício a ser recebido pelo funcionário
    beneficio = (valorVendas*0.04) + salFixo;

    //Saída de dados (Benefício a ser recebido):
    cout << "O benefício a ser recebido pelo funcionário é de R$ " << beneficio << endl;

    return 0;
}
