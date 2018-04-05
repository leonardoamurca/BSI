/*
Leonardo Aguilar
Transforma o tempo recebido em minutos para horas e minutos
Entrada: Tempo em minutos
Saída: Tempo em horas e minutos
*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    //Inclusão de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declaração das variáveis
    int minEntrada, hora = 0, minSaida = 0;

    //Entrada de dados pelo usuário
    cout << "Digite o tempo em minutos: " << endl;
    cin >> minEntrada;

    //Condição para valor de horas inteiras
    if(minEntrada >=60){
        //Conversão de minutos para horas e minutos
        hora = minEntrada/60;
        minSaida = minEntrada%60;

        //Saída de dados (Horas e Minutos)
        cout << "Horas = " << hora << "h" << endl;
        cout << "Minutos = " << minSaida << "min" << endl;
    }
    else {
        //Saída de dados (Horas e Minutos)
        cout << "Horas = " << hora << "h" << endl;
        cout << "Minutos = " << minEntrada << "min" << endl;
    }
    return 0;
}
