/*
Leonardo Aguilar
Calcula o número de copas do mundo já realizadas dado o ano atual.
Entrada: Ano atual.
Saída: Número de copas realizadas.
*/


#include <iostream>
#include <locale.h>
#include <time.h>
#include <stdio.h>

using namespace std;


int main()
{
    //Inclusão de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declaração de variáveis
    int anoAtual, numCopas = 0;

    //Entrada de dados pelo usuário
    cout << "Digite o ano atual: (aaaa): " << endl;
    cin >> anoAtual;

    //Contabilizando o número de copas do mundo já realizadas exceto as não realizadas durante o período de guerra
    for(int i = 1930; i < anoAtual;i = i +4 ){
        if (i == 1942 or i == 1946){
            numCopas = numCopas;
        }
        else {
            numCopas++;
        }
    }

    //Saída de dados (Número de copas já realizadas)
    cout << "Já foram realizadas " << numCopas << " Copas do Mundo até hoje! " << endl;
    return 0;
}
