/*
Leonardo Aguilar
Calcula e imprime o valor de PI utilizado os 51 primeiros termos seguinte s�rie:
S = 1 - 1/3� + 1/5� - 1/7� + 1/9� ..., sendo PI = raiz c�bica de S*32
Entrada: N�o possui entrada
Sa�da: Valor de PI

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
	float soma = 0, div = 0, pi = 0;

    //C�lculo dos 51 primeiros termos da s�rie
    for(float j = 1, i = 1; i <= 51; j++, i = i+2){
        if((int)j%2 == 0){
            soma = soma - (1/pow(i, 3));
        }
        else{
            soma = soma + (1/pow(i, 3));
        }
    }
    //C�lculo de PI
    pi = cbrt(soma*32);
    //Sa�da de dados
    cout << "Valor de pi = " << pi << endl;
return 0;
}
