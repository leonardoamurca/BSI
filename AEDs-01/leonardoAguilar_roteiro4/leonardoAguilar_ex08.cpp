/*
Leonardo Aguilar
Identificar se um n�mero fornecido pelo usu�rio � primo ou n�o
Entrada: N�mero qualquer
Sa�da: � primo, n�o � primo

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
	int num, div = 0;

	//Entrada de dados pelo usu�rio
    cout << "Digite seu n�mero: " << endl;
    cin >> num;

    //Contar o n�mero de divisores do n�mero digitado pelu usu�rio
    for (int i = 1; i <= num; i++){
        if(num%i == 0){
            div++;
        }
    }
    //Todo n�mero primo possui 2 divisores
   if(div == 2){
        cout << "� primo!" << endl;
   }
   else{
    cout << "N�o � primo!" << endl;
   }
return 0;
}
