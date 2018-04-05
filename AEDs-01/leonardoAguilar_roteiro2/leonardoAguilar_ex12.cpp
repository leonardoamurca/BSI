/*
Leonardo Aguilar
Calcula o n�mero de copas do mundo j� realizadas dado o ano atual.
Entrada: Ano atual.
Sa�da: N�mero de copas realizadas.
*/


#include <iostream>
#include <locale.h>
#include <time.h>
#include <stdio.h>

using namespace std;


int main()
{
    //Inclus�o de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declara��o de vari�veis
    int anoAtual, numCopas = 0;

    //Entrada de dados pelo usu�rio
    cout << "Digite o ano atual: (aaaa): " << endl;
    cin >> anoAtual;

    //Contabilizando o n�mero de copas do mundo j� realizadas exceto as n�o realizadas durante o per�odo de guerra
    for(int i = 1930; i < anoAtual;i = i +4 ){
        if (i == 1942 or i == 1946){
            numCopas = numCopas;
        }
        else {
            numCopas++;
        }
    }

    //Sa�da de dados (N�mero de copas j� realizadas)
    cout << "J� foram realizadas " << numCopas << " Copas do Mundo at� hoje! " << endl;
    return 0;
}
