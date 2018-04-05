/*
Leonardo Aguilar
Analisa a condição de existência de um triângulo
Entrada: 3 valores
Saída: Não é triângulo, Triâgulo Equilátero, Triâgulo Isósceles, Triâgulo Escaleno

 */

#include <iostream>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
#include <windows.h>

using namespace std;

int main(){
	//Inclusão de caracteres especiais
	setlocale(LC_ALL, "Portuguese");

	//Declaração das variáveis
	int a, b, c;

	//Entrada de dados pelo usuário
    cout << "Digite os 3 valores: " << endl;
    cin >> a >> b >> c;

    //Condição de existência do triângulo
    if( ( a > abs(b - c) and a < (b + c) )  or ( b > abs(a - c) and b < (a + c) ) or (c > abs(b - a) and c < (b + a) ) ){
        if(a == b and b == c){
            cout << "Triângulo Equilátero! " << endl;
        }
        else if( ( (a == b) and (a != c) ) or ((a == c) and (a != b) ) or ( (b == c) and (b != a) ) ) ) {
            cout << "Triângulo Isósceles! " << endl;
        }
        else {
            cout << "Triângulo Escaleno! " << endl;
        }
    }

    else {
        cout << "Impossível formar um triângulo! " << endl;
    }

return 0;
system("PAUSE");
}
