/*
Leonardo Aguilar
Calcula o seno de um ângulo x digitado pelo usuário (em graus) utilizando os 15 primeiros
termos da seguinte série: Sen(X) = x - (x^3)/3! + (x^5)/5! - (x^7)/7! + (x^9)/9! - ...
Entrada: Ângulo(em graus)
Saída: Seno do ângulo

 */

#include <iostream>
#include <locale.h>
#include <math.h>
#include <stdlib.h>]

#define pi 3.14159

using namespace std;

int main(){
	//Inclusão de caracteres especiais
	setlocale(LC_ALL, "Portuguese");

	//Declaração das variáveis
	float x, radX, fat = 1, senX = 0;
    int i = 0, j = 1;

	//Entrada de dados pelo usuário
    cout << "Digite o valor do angulo: " << endl;
    cin >> x;

    //Converte o ângulo digitado para Radianos
    radX = (pi*x)/180;

    //Calcula o seno do ângulo
    do{
        //Calcula o fatorial do termo no denominador
        for(int m = j; m > 0; m--){
            fat *=m;
        }
        //Alterna entre somar e subtrair entre os 15 primeiros termos da série
        if(i%2 != 0){
            senX = senX - pow(radX, j)/fat;
        }
        else{
            senX = senX + pow(radX, j)/fat;
        }
        i++;
        j+=2;
        fat = 1;
    }while(i < 15 and j < 30);

    //Saída de dados
    cout << "Sen(" << x << "º) = " << senX << endl;
return 0;
}
