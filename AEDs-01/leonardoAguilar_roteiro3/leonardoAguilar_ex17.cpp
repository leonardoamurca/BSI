/*
Leonardo Aguilar
Verificar se um número inteiro de 3 dígitos é palíndromo ou não
Entrada: Número inteiro de 3 dígitos
Saída: é palíndromo, não é palíndromo

 */

#include <iostream>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

using namespace std;

int main(){
	//Inclusão de caracteres especiais
	setlocale(LC_ALL, "Portuguese");

	//Declaração das variáveis
	int num, un, dez, cen;

	//Entrada de dados pelo usuário
    cout << "Digite um número de 3 dígitos: " << endl;
    cin >> num;

    un = num%10;
    dez = ( (num%100) - un )/ 10;
    cen = ( (num%1000) - (dez*10) - un ) / 100;

    if( (cen+dez) == (un+dez)) {
        cout << "É palíndromo! " << endl;
    }
    else {
        cout << "Não é palíndromo! " << endl;
    }

return 0;
system("PAUSE");
}


/* VERSÃO ALTERNATIVA

int main(){

    //Inclusão dos caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declaração das variáveis
    string n, ni;

    //Entrada de dados pelo usuário
    cout << "Digite um número de 3 dígitos: " << endl;
    cin >> n;

    //Inversão da string
    ni = string(n.rbegin(), n.rend());

    if(n == ni){
        cout << "É palíndromo! " << endl;
    }
    else{
        cout << "Não é palíndromo! " << endl;
    }

return 0;
system("PAUSE");
}

*/
