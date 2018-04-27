/*
Leonardo Aguilar
Imprime o n�mero de caracteres que t�m ENTRE 2 letras do alfabeto!
Entrada: Duas letras
Sa�da: N�mero de caracteres entre

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
	int l1 = 0, l2, i = 0, aux;
	char letra1, letra2;

	//Entrada de dados pelo usu�rio
    cout << "Digite duas letras: " << endl;
    cin >> letra1 >> letra2;

    //Converte as letras para inteiros (Convers�o padr�o)
    l1 = letra1;
    l2 = letra2;

    //Coloca as letras em ordem para a compara��o
    if(l1>l2){
        aux = l1;
        l1 = l2;
        l2 = aux;
    }

    while(l1 < l2){
        l1++;
        i++;
    }

    //Sa�da de dados
    cout << i - 1 << endl;

return 0;
}



