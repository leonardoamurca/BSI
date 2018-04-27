/*
Leonardo Aguilar
Imprime o triângulo abaixo, em que a altura do triângulo é fornecido
pelo usuário.

#
# #
# # #
# # # #
# # # # #
# # # # # #
# # # # # # #

Entrada: Altura do triângulo(número de linhas)
Saída: Triângulo

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
    int altura;

	//Entrada de dados pelo usuário
    cout << "Digite o número de linhas do triângulo: " << endl;
    cin >> altura;

    //Impressão do triângulo
   for (int i = 1; i <= altura; i++) {
       for (int j = 1; j <= i; j++) {
         cout << "# ";
    }
    cout << "\n";
}

return 0;
}
