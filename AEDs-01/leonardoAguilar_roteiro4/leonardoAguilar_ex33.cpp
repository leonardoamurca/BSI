/*
Leonardo Aguilar
Despeza fixa = R$200,00.
Ingresso à R$5,00, vende-se 120 ingressos.
Dado os dados acima, esse algoritmo calcula o valor dos lucros esperados em função do valor dos ingressos, o maior lucro e seu respectivo valor
de ingresso e quantidade vendida.
Entrada: Não possui entrada!
Saída: Lucro, valor do ingresso, quantidade vendida, maior lucro com seu valor de ingresso e quantidade vendida
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
    float pIng = 5, iVendido = 120, lucro = 0, lMaior = -1000000, iMaior, qtMaior;

	//Entrada de dados pelo usuário
    while(pIng >= 1){
        //Calcula o lucro em função do preço de cada ingresso
        lucro = pIng*iVendido - 200;
        //Saída de dados
        cout << "Ingresso à R$" << pIng <<"(Quantidade vendida = " << iVendido << "), lucro = R$" << lucro << endl;
        //Atualiza e armazena o maior lucro com seu respectivo preço de ingresso e quantidade vendida
        if(lucro > lMaior){
            lMaior = lucro;
            iMaior = pIng;
            qtMaior = iVendido;
        }
        iVendido += 26;
        pIng -= 0.5;
    }
    //Saída de dados
    cout << "Maior lucro = R$" << lMaior << " (ingresso à R$" << iMaior <<  "/Quantidade vendida =" << qtMaior << ")" << endl;

return 0;
}
