/*
Leonardo Aguilar
Imprime o número de caracteres que têm ENTRE 2 letras do alfabeto!
Entrada: Duas letras
Saída: Número de caracteres entre

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
	int l1 = 0, l2, i = 0, aux;
	char letra1, letra2;

	//Entrada de dados pelo usuário
    cout << "Digite duas letras: " << endl;
    cin >> letra1 >> letra2;

    //Converte as letras para inteiros (Conversão padrão)
    l1 = letra1;
    l2 = letra2;

    //Coloca as letras em ordem para a comparação
    if(l1>l2){
        aux = l1;
        l1 = l2;
        l2 = aux;
    }

    while(l1 < l2){
        l1++;
        i++;
    }

    //Saída de dados
    cout << i - 1 << endl;

return 0;
}



