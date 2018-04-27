/*
Leonardo Aguilar
Imprime a tabuada dos números de 1 à N, onde N é fornecido pelo usuário.
Entrada: N
Saída: Tabuada dos números de 1 à N.

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
	int n;

	//Entrada de dados pelo usuário
    cout << "Digite o limite: " << endl;
    cin >> n;

    //Impressão da tabuada e saída de dados
    for(int j = 1; j <= n; j++){
        cout << "Tabuada do " << j << endl;
        for(int i = 1; i <=9; i++){
            cout << j << " x " << i << " = " << j*i << endl;

        }
        cout << endl;
    }

return 0;
}
