/*
Leonardo Aguilar
Imprime o tri�ngulo abaixo, em que a altura do tri�ngulo � fornecido
pelo usu�rio.

#
# #
# # #
# # # #
# # # # #
# # # # # #
# # # # # # #

Entrada: Altura do tri�ngulo(n�mero de linhas)
Sa�da: Tri�ngulo

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
    int altura;

	//Entrada de dados pelo usu�rio
    cout << "Digite o n�mero de linhas do tri�ngulo: " << endl;
    cin >> altura;

    //Impress�o do tri�ngulo
   for (int i = 1; i <= altura; i++) {
       for (int j = 1; j <= i; j++) {
         cout << "# ";
    }
    cout << "\n";
}

return 0;
}
