/*
Leonardo Aguilar
Calcula o quociente e o resto da divisão de A por B utilizando apenas soma e subtração.
Entrada: A e B
Saída: Quociente e Resto

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
	int dividendo, divisor,quociente, resto, i = 0;

    //Entrada de dados
	cout << "Digite 2 números inteiros e positivos: " << endl;
	cin >> dividendo >> divisor;


    while(quociente >= 0 and quociente >= divisor){
        quociente = dividendo - divisor;
        dividendo = quociente;
        i++;
    }

    if(quociente == 0){
        resto = quociente;
    }
    else if(quociente < 0){
        resto = -quociente;
    }
    else{
        resto = dividendo;
    }
    cout << "Resto = " << resto << endl;
    cout << "Quociente = " << i << endl;

return 0;
}



