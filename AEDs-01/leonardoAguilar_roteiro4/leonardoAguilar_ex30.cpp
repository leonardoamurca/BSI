/*
Leonardo Aguilar
Calcula o n�mero de combina��es e arranjos de n objetos diferentes, onde p
objetos s�o escolhidos de cada vez.
Entrada: N e P
Sa�da: N�mero de combina��es e arranjos

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
	float Cn_p = 0, An_p = 0, fatn = 1, fatp = 1, fatnmp = 1, n, p,nmp;

	//Entrada de dados pelo usu�rio
    cout << "Digite o n�mero de objetos diferentes: " << endl;
    cin >> n;

    cout << "Digite o n�mero de objetos escolhidos: " << endl;
    cin >> p;

    nmp = n - p;
    //Calcula o fatorial de n
    for(int i = n; i > 0; i--){
        fatn *= i;
    }
    //Calcula o fatorial de p
    for(int j = p; j > 0; j--){
        fatp *= j;
    }
    //Calcula o fatorial de n - p
    for(int k = nmp; k > 0; k--){
        fatnmp *= k;
    }
    //Calcula combina��es e arranjos
    Cn_p = fatn/ (fatp*fatnmp);
    An_p = fatn/fatnmp;

    //Sa�da de dados
    cout << Cn_p << endl;
    cout << An_p << endl;


return 0;
}



