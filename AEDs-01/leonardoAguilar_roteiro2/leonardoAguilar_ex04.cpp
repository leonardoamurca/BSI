/*
Leonardo Aguilar.
Calcula o salário reajustado de um funcionário dado seu salário base pelo usuário e sabendo que o funcionario recebe
uma gratificação de 10% sobre o salário base e paga 5% de imposto sobre o valor acumulado.
Entrada: Salário base.
Saída: Salário reajustado.
*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    //Inclusão dos caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declaração das variáveis
    float salBase = 0, salReajustado = 0;

    //Entrada de dados pelo usuário
    cout << "Digite o salário base do funcionário (em R$): " << endl;
    cin >> salBase;

    //Cálculo do salário reajustado
    salReajustado = (salBase*1.1)*0.95;

    // Saída de dados (Salário Reajustado)
    cout << "Salário reajustado: R$ " << salReajustado << endl;

    return 0;
}
