/*
Leonardo Aguilar
Imprime a tabuada dos n�meros de 1 � N, onde N � fornecido pelo usu�rio.
Entrada: N
Sa�da: Tabuada dos n�meros de 1 � N.

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
	int n;

	//Entrada de dados pelo usu�rio
    cout << "Digite o limite: " << endl;
    cin >> n;

    //Impress�o da tabuada e sa�da de dados
    for(int j = 1; j <= n; j++){
        cout << "Tabuada do " << j << endl;
        for(int i = 1; i <=9; i++){
            cout << j << " x " << i << " = " << j*i << endl;

        }
        cout << endl;
    }

return 0;
}
