/*
Leonardo Aguilar
Situações de compra de um determinado tipo de produto
Entrada: Código e quantidade comprada de um produto
Saída: CPF completo
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
   int codProd, qntComp;
   float  precTotal = 0,valDesc = 0, precDesc = 0;

	//Entrada do código do produto
    cout << "Digite o código do produto: " << endl;
    cin >> codProd;
    
    // Verifica se o código do produto é válido
    if(codProd < 1 or codProd > 40){
        cout << "Produto Inexistente!" << endl;
    }

    else {
        //Entrada da quantidade comprada de um tipo de produto
        cout << "Digite a quantidade comprada do mesmo: " << endl;
        cin >> qntComp;
    
        //Condições de classificação do valor unitário de um produto e seu preço por quantidade comprada
        if(codProd >= 1 and codProd <= 10){
            cout << "Valor Unitário: R$10,00 " << endl;
            precTotal = qntComp*10;
            cout << "Preço total da nota: R$ " << precTotal << endl;
        }
        else if(codProd >= 11 and codProd <= 20){
            cout << "Valor Unitário: R$20,00 " << endl;
            precTotal = qntComp*20;
            cout << "Preço total da nota: R$ " << precTotal << endl;
        }
        else if(codProd >= 21 and codProd <= 31){
            cout << "Valor Unitário: R$30,00 " << endl;
            precTotal = qntComp*30;
            cout << "Preço total da nota: R$ " << precTotal << endl;
        }
        else if(codProd >= 31 and codProd <= 40){
            cout << "Valor Unitário: R$40,00 " << endl;
            precTotal = qntComp*40;
            cout << "Preço total da nota: R$ " << precTotal << endl;
        }
        //Condições para desconto
        if (precTotal <= 250){
                valDesc = precTotal*0.05;
                precDesc = precTotal*0.95;
                cout << "Valor do desconto: R$ " << valDesc << endl;
                cout << "Preço final com desconto: R$ " << precDesc << endl;
            }
        else if (precTotal > 250 and precTotal < 500){
                valDesc = precTotal*0.10;
                precDesc = precTotal*0.90;
                cout << "Valor do desconto: R$ " << valDesc << endl;
                cout << "Preço final com desconto: R$ " << precDesc << endl;
        }
        else{
                valDesc = precTotal*0.15;
                precDesc = precTotal*0.85;
                cout << "Valor do desconto: R$ " << valDesc << endl;
                cout << "Preço final com desconto: R$ " << precDesc << endl;
        }
    }
return 0;
system("PAUSE");
}
