/*
Leonardo Aguilar
Calcula o seno de um �ngulo x digitado pelo usu�rio (em graus) utilizando os 15 primeiros
termos da seguinte s�rie: Sen(X) = x - (x^3)/3! + (x^5)/5! - (x^7)/7! + (x^9)/9! - ...
Entrada: �ngulo(em graus)
Sa�da: Seno do �ngulo

 */

#include <iostream>
#include <locale.h>
#include <math.h>
#include <stdlib.h>]

#define pi 3.14159

using namespace std;

int main(){
	//Inclus�o de caracteres especiais
	setlocale(LC_ALL, "Portuguese");

	//Declara��o das vari�veis
	float x, radX, fat = 1, senX = 0;
    int i = 0, j = 1;

	//Entrada de dados pelo usu�rio
    cout << "Digite o valor do angulo: " << endl;
    cin >> x;

    //Converte o �ngulo digitado para Radianos
    radX = (pi*x)/180;

    //Calcula o seno do �ngulo
    do{
        //Calcula o fatorial do termo no denominador
        for(int m = j; m > 0; m--){
            fat *=m;
        }
        //Alterna entre somar e subtrair entre os 15 primeiros termos da s�rie
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

    //Sa�da de dados
    cout << "Sen(" << x << "�) = " << senX << endl;
return 0;
}
