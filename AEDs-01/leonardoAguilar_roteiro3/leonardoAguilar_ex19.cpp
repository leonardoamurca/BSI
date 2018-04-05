/*
Leonardo Aguilar
Definir se um ano digitado pelo usuário é bissexto ou não
Entrada: ano
Saída: é ano bissexto, não é ano bissexto
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
    int ano;

	//Entrada de dados pelo usuário
    cout << "Digite o ano: " << endl;
    cin >> ano;

    //Condição para ser ano bissexto ou não
    if(ano%4 == 0 and (ano%100 != 0 or ano%400 == 0)){
        cout << ano << " é ano bissexto!" << endl;
    }
    else{
        cout << ano << " não é ano bissexto!" << endl;
    }

return 0;
system("PAUSE");
}
