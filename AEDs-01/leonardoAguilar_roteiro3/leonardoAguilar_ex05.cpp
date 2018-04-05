/*
Leonardo Aguilar
Recebe o custo de fábrica de um carro e mostra o custo ao consumidor
considerando os impostos e a porcentagem do distribuidor.
Entrada: Custo de fábrica.
Saída: Custo ao consumidor.

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
	float custoFab = 0, custoCons = 0;

	//Entrada de dados pelo usuário
    cout << "Digite o custo de fábrica do carro (em R$): " << endl;
    cin >> custoFab;

    //Condições de valores a se pagar
    if(custoFab <= 28000) {
        custoCons = custoFab*1.05;
        cout << "O custo do carro ao consumidor será: R$" << custoCons << endl;
    }
    else if(custoFab > 28000.01 and custoFab < 45000) {
        custoCons = custoFab*1.25;
        cout << "O custo do carro ao consumidor será: R$" << custoCons << endl;
    }
    else {
        custoCons = custoFab*1.35;
        cout << "O custo do carro ao consumidor será: R$" << custoCons << endl;
    }

return 0;
system("PAUSE");
}
