/*
Leonardo Aguilar
Verifica se um CPF digitado pelo usuário é válido ou não
Entrada: CPF
Saída: CPF completo e Válido ou Inválido
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
    long long cpf;
    int dig1, dig2, dig3, dig4, dig5, dig6, dig7, dig8, dig9, dig10, dig11;
    int v1, v2;

	//Entrada de dados pelo usuário
    cout << "Digite seu CPF (Apenas números): " << endl;
    cin >> cpf;

    //Atribui cada dígito do CPF a uma variável
    dig1 = cpf%10;
    dig2 = ( (cpf%100) - dig1 ) / 10;
    dig3 =  ( (cpf%1000) - (dig2*10) - dig1 ) / 100;
    dig4 = ( (cpf%10000) - (dig3*100) - (dig2*10) - dig1 ) / 1000;
    dig5 = ( ( (cpf%100000) - (dig4*1000) - (dig3*100) - (dig2*10) - dig1 ) / 10000);
    dig6 = ( ( (cpf%1000000) - (dig5*10000) - (dig4*1000) - (dig3*100) - (dig2*10) - dig1 ) /100000);
    dig7 = ( ( (cpf%10000000) - (dig6*100000) - (dig5*10000) - (dig4*1000) - (dig3*100) - (dig2*10) - dig1 ) /1000000);
    dig8 = ( ( (cpf%100000000) - (dig7*1000000) - (dig6*100000) - (dig5*10000) - (dig4*1000) - (dig3*100) - (dig2*10) - dig1 ) /10000000);
    dig9 = ( (  (cpf%1000000000) - (dig8*10000000) - (dig7*1000000) - (dig6*100000) - (dig5*10000) - (dig4*1000) - (dig3*100) - (dig2*10) - dig1 ) / 100000000);
    dig10 = ( ( (cpf%10000000000) - (dig9*100000000) - (dig8*10000000) - (dig7*1000000) - (dig6*100000) - (dig5*10000) - (dig4*1000) - (dig3*100) - (dig2*10) - dig1 ) / 1000000000);
    dig11 = ( ( (cpf%100000000000) - (dig10*1000000000) - (dig9*100000000) - (dig8*10000000) - (dig7*1000000) - (dig6*100000) - (dig5*10000) - (dig4*1000) - (dig3*100) - (dig2*10) - dig1) / 10000000000 );

    //Cálculo do 1º dígito
    v1 = ( (dig11*10) + (dig10* 9) + (dig9* 8) + (dig8* 7) + (dig7* 6) + (dig6* 5)
    + (dig5* 4) + (dig4* 3) + (dig3* 2) ) % 11;

    if(v1 < 2){
        v1 = 0;
    }
    else{
        v1 = 11 - v1;
    }

    //Cálculo do 2º dígito
    v2 = ( (dig11*11) + (dig10* 10) + (dig9* 9) + (dig8* 8) + (dig7* 7) + (dig6* 6)
    + (dig5* 5) + (dig4* 4) + (dig3* 3) + (v1*2) ) % 11;

    if(v2 < 2){
        v2 = 0;
    }
    else{
        v2 = 11 - v2;
    }

    //Saída de dados (CPF COMPLETO)
    cout << "CPF = " << dig11 << dig10 << dig9 << "." << dig8 << dig7 << dig6 << "." << dig5 << dig4 <<
    dig3 << "-" << dig2 << dig1 << endl;

    //Verifica se o CPF digitado é válido ou não
    if(v1 == dig2 and v2 == dig1){
        cout << "CPF VÁLIDO!" << endl;
    }
    else {
        cout << "CPF INVáLIDO!" << endl;
    }

return 0;
system("PAUSE");
}
