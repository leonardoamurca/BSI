/*
Leonardo Aguilar
Calcula o salário a receber em certas condições
Entrada: Número de horas trabalhadas, valor do salário mínimo, Número de
horas extras trabalhadas
Saída: Salário a receber em devidas condições:
        a)a hora trabalhada é 0.125 do salário mínimo;
        b)a hora extra vale 0.25 do salário mínimo;
        c)o salário bruto equivale ao número de horas
          trabalhadas vezes o valor pago por hora;
        d)a quantia a receber por horas extras equivale à horas extras
          realizadas multiplicado pelo valor pago por hora extra;
        e)o salário a receber equivale à soma do salário bruto mais a
          quantia a receber pelas horas extras.
*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    //Inclusão de caracteres especiais
    setlocale(LC_ALL,"Portuguese");

    //Declaração das variáveis
    float salMin, hTrab, hexTrab, salFinal;

    //Entrada de dados pelo usuário
    cout << "Digite o valor do salário mínimo (em R$): " <<endl;
    cin >> salMin;

    cout << "Digite o número de horas trabalhadas : " << endl;
    cin >> hTrab;

    cout << "Digite o número de horas EXTRAS trabalhadas: " << endl;
    cin >> hexTrab;

    //Cálculo do salário a receber
    salFinal = (hTrab*salMin*0.125) + (hexTrab*salMin*0.25);

    //Saída de dados (Salário a receber)
    cout << "O salário a receber será de R$ " << salFinal << endl;

    return 0;
}
