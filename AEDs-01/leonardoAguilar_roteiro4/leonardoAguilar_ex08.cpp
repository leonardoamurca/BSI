/*
Leonardo Aguilar
Identificar se um número fornecido pelo usuário é primo ou não
Entrada: Número qualquer
Saída: É primo, não é primo

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
	int num, div = 0;

	//Entrada de dados pelo usuário
    cout << "Digite seu número: " << endl;
    cin >> num;

    //Contar o número de divisores do número digitado pelu usuário
    for (int i = 1; i <= num; i++){
        if(num%i == 0){
            div++;
        }
    }
    //Todo número primo possui 2 divisores
   if(div == 2){
        cout << "É primo!" << endl;
   }
   else{
    cout << "Não é primo!" << endl;
   }
return 0;
}
