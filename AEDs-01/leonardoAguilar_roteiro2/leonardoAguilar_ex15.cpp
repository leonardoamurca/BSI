/*
Leonardo Aguilar
Transforma o tempo recebido em minutos para horas e minutos
Entrada: Tempo em minutos
Sa�da: Tempo em horas e minutos
*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    //Inclus�o de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declara��o das vari�veis
    int minEntrada, hora = 0, minSaida = 0;

    //Entrada de dados pelo usu�rio
    cout << "Digite o tempo em minutos: " << endl;
    cin >> minEntrada;

    //Condi��o para valor de horas inteiras
    if(minEntrada >=60){
        //Convers�o de minutos para horas e minutos
        hora = minEntrada/60;
        minSaida = minEntrada%60;

        //Sa�da de dados (Horas e Minutos)
        cout << "Horas = " << hora << "h" << endl;
        cout << "Minutos = " << minSaida << "min" << endl;
    }
    else {
        //Sa�da de dados (Horas e Minutos)
        cout << "Horas = " << hora << "h" << endl;
        cout << "Minutos = " << minEntrada << "min" << endl;
    }
    return 0;
}
