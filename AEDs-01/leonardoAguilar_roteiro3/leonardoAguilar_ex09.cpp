/*
Leonardo Aguilar
Calcula o imposto a ser pago pela transferência de veículos em Sabará
Entrada: Ano de fabricação do veículo e preço do carro
Saída: Valor do imposto
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
    float preco, imposto;
    int ano;

	//Entrada de dados pelo usuário
    cout << "Digite o ano de fabricação do veículo: " << endl;
    cin >> ano;

    cout << "Digite o preço de tabela do veículo: " << endl;
    cin >> preco;

    //Condição para o valor da taxa
    if(ano < 1990){
        imposto = preco*0.01;
        cout << "Valor do imposto a ser pago: R$ " << imposto << endl;
    }
    else {
        imposto = preco*0.015;
        cout << "Valor do imposto a ser pago: R$ " << imposto << endl;
    }
 return 0;
 system("PAUSE");
}
