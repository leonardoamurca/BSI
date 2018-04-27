/*
Leonardo Aguilar
Calcula o quociente e o resto da divis�o de A por B utilizando apenas soma e subtra��o.
Entrada: A e B
Sa�da: Quociente e Resto

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
	int dividendo, divisor,quociente, resto, i = 0;

    //Entrada de dados
	cout << "Digite 2 n�meros inteiros e positivos: " << endl;
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



