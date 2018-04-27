/*
Leonardo Aguilar
Descobre em que ano a popula��o de um pa�s A ser� maior que a popula��o de
um pa�s B.
Entrada: N�o possui entradas
Sa�da: Ano

 */

#include <iostream>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main(){
	//Inclus�o de caracteres especiais
	setlocale(LC_ALL, "Portuguese");

	//Declara��o das vari�veis
    float A = 500000, B = 700000;

    //Ano atual
    int i = 2015;

    //Calcula em que ano a popula��o do pa�s A ser� maior que a do pa�s B
    while(A <= B){
        A = A*1.03;
        B = B*1.02;
        i++;
    }

    //Sa�da de dados (ano que acontecer�)
    cout << i << endl;


return 0;
}
