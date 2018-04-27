/*
Leonardo Aguilar
Descobre em que ano a população de um país A será maior que a população de
um país B.
Entrada: Não possui entradas
Saída: Ano

 */

#include <iostream>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main(){
	//Inclusão de caracteres especiais
	setlocale(LC_ALL, "Portuguese");

	//Declaração das variáveis
    float A = 500000, B = 700000;

    //Ano atual
    int i = 2015;

    //Calcula em que ano a população do país A será maior que a do país B
    while(A <= B){
        A = A*1.03;
        B = B*1.02;
        i++;
    }

    //Saída de dados (ano que acontecerá)
    cout << i << endl;


return 0;
}
