/*
Leonardo Aguilar
Calcula e imprime o valor de PI utilizado os 51 primeiros termos seguinte série:
S = 1 - 1/3³ + 1/5³ - 1/7³ + 1/9³ ..., sendo PI = raiz cúbica de S*32
Entrada: Não possui entrada
Saída: Valor de PI

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
	float soma = 0, div = 0, pi = 0;

    //Cálculo dos 51 primeiros termos da série
    for(float j = 1, i = 1; i <= 51; j++, i = i+2){
        if((int)j%2 == 0){
            soma = soma - (1/pow(i, 3));
        }
        else{
            soma = soma + (1/pow(i, 3));
        }
    }
    //Cálculo de PI
    pi = cbrt(soma*32);
    //Saída de dados
    cout << "Valor de pi = " << pi << endl;
return 0;
}
