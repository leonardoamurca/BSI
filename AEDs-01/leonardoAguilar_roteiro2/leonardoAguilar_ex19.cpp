/*
Leonardo Aguilar
Calcula o sal�rio a receber em certas condi��es
Entrada: N�mero de horas trabalhadas, valor do sal�rio m�nimo, N�mero de
horas extras trabalhadas
Sa�da: Sal�rio a receber em devidas condi��es:
        a)a hora trabalhada � 0.125 do sal�rio m�nimo;
        b)a hora extra vale 0.25 do sal�rio m�nimo;
        c)o sal�rio bruto equivale ao n�mero de horas
          trabalhadas vezes o valor pago por hora;
        d)a quantia a receber por horas extras equivale � horas extras
          realizadas multiplicado pelo valor pago por hora extra;
        e)o sal�rio a receber equivale � soma do sal�rio bruto mais a
          quantia a receber pelas horas extras.
*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    //Inclus�o de caracteres especiais
    setlocale(LC_ALL,"Portuguese");

    //Declara��o das vari�veis
    float salMin, hTrab, hexTrab, salFinal;

    //Entrada de dados pelo usu�rio
    cout << "Digite o valor do sal�rio m�nimo (em R$): " <<endl;
    cin >> salMin;

    cout << "Digite o n�mero de horas trabalhadas : " << endl;
    cin >> hTrab;

    cout << "Digite o n�mero de horas EXTRAS trabalhadas: " << endl;
    cin >> hexTrab;

    //C�lculo do sal�rio a receber
    salFinal = (hTrab*salMin*0.125) + (hexTrab*salMin*0.25);

    //Sa�da de dados (Sal�rio a receber)
    cout << "O sal�rio a receber ser� de R$ " << salFinal << endl;

    return 0;
}
