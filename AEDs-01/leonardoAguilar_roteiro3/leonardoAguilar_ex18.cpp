/*
Leonardo Aguilar
Implementar um fluxograma
Entrada: n1, n2
Saída: n1 é múltiplo de n2, n1 não é múltiplo de n2

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
	int n1, n2;

	//Entrada de dados pelo usuário
	cout << "Digite o 1º número: " << endl;
	cin >> n1;

	cout << "Digite o 2º número: " << endl;
	cin >> n2;

	//Condição para o teste ser realizado
	if(n2 == 0){
		cout << "Não existe divisão por ZERO!" << endl;
	}
	else {
		//Condição do teste em si
		if(n1%n2 == 0){
			cout << n1 << " é múltiplo de " << n2 << endl;
		}
		else {
			cout << n1 << " não é múltiplo de " << n2 << endl;
		}
	}
return 0;
system("PAUSE");
}
