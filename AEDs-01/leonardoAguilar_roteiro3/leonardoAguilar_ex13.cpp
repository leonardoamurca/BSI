/*
Leonardo Aguilar
Calcular o IMC!!
Entrada: Peso, altura
Saída: IMC
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
    float peso, altura, imc;

	//Entrada de dados pelo usuário
    cout << "Digite seu peso (em Kg): " << endl;
    cin >> peso;

    cout << "Digite sua altura (em metros): " << endl;
    cin >> altura;

    //Cálculo do IMC
    imc = peso/(pow(altura, 2));

    //Classificação do IMC
    if(imc < 18.5){
        cout << "Abaixo do peso!" << endl;
    }
    else if(imc >= 18.5 and imc < 25){
        cout << "Peso normal!" << endl;
    }
    else if(imc >= 25 and imc < 30){
        cout << "Acima do peso!" << endl;
    }
    else{
        cout << "OBESO! Faça um Regime!!" << endl;
    }

return 0;
system("PAUSE");
}
