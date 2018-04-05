/*
Leonardo Aguilar
Calcula o reajuste salarial do funcion�rio de uma empresa
dada certas condições e o salário.
Entrada: Salário
Saída: Salário Reajustado

 */

#include <iostream>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
#include <windows.h>

using namespace std;

int main(){
	//Inclusão de caracteres especiais
	setlocale(LC_ALL, "Portuguese");

	//Declaração das variáveis
	float sal = 0, salFinal = 0;

	//Entrada de dados pelo usu�rio
    cout << "Digite o salário do funcion�rio (em R$): " << endl;
    cin >> sal;

    //Condições dos reajustes
    if (sal < 700){
        salFinal = sal*1.3;
        cout << "O salário reajustado será igual a R$" << salFinal << endl;
    }
    else {
        salFinal = sal*1.1;
        cout << "O salário reajustado será igual a R$" << salFinal << endl;
    }

return 0;
system("PAUSE");
}
