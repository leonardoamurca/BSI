/*
Leonardo Aguilar
Calcula o restante do salário de João após pagar 2 contas atrasadas
(Multa: 2% sobre cada conta).
Entrada: Salário de João, Valor da conta 1, valor da conta 2.
Saída: Restante do salário de João após pagar tudo.
*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    //Inclusão dos caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declaração das variáveis
    float salJoao = 0, salFinal = 0, valConta1, valConta2;

    //Entrada de dados pelo usuário
    cout << "Digite o salário de João (em R$): " << endl;
    cin >> salJoao;

    cout<< "Digite o valor da conta 1 (em R$): " << endl;
    cin >> valConta1;

    cout<< "Digite o valor da conta 2 (em R$): " << endl;
    cin >> valConta2;

    //Calcula o salário final de João
    salFinal = salJoao - (valConta1 + valConta2)*2.04/2;

    //Saída de dados (Restante do salário de João após pagar as contas)
    cout << "O salário restante de João após pagar as contas é de R$" << salFinal << endl;
    return 0;
}
