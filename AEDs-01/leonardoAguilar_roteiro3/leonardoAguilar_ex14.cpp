/*
Leonardo Aguilar
Calcula a tensão S de uma barra cilíndrica
Entrada: Q(carga) e D(diâmetro)
Saída: Tensão S
 */

#include <iostream>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
#include <windows.h>

#define pi 3.1415

using namespace std;

int main(){
	//Inclusão de caracteres especiais
	setlocale(LC_ALL, "Portuguese");

	//Declaração das variáveis
	float S = 0, Q, D;

	//Entrada de dados pelo usuário
    cout << "Digite o valor da carga Q (em coulombs): " << endl;
    cin >> Q;

    cout << "Digite o valor do diâmetro D (em metros): " << endl;
    cin >> D;

    //Condições de existência
    if(D > 100){
        S = ( ( 4 * Q ) * 2 ) / ( pi * pow( D , 2 ) );
        cout << "Tensão S = " << S << " V" << endl;
    }
    else if(D < 50){
        S = ( (4 * Q ) * 6 ) / ( pi * pow( D , 2));
        cout << "Tensão S = " << S << " V" << endl;
    }
    else {
        S = ( (4 * Q ) * 4 ) / ( pi * pow( D , 2));
        cout << "Tensão S = " << S << " V" << endl;
    }
return 0;
system("PAUSE");
}
