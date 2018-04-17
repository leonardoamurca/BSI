/*
Leonardo Aguilar
Calcula a quantidade de números pares dentre os 10 digitados pelo usuário e
calcula o somatório dos números ímpares.
Entrada: 10 números
Saída: Quantidade de numeros pares, soma dos números ímpares
*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>

using namespace std;

int main(){
    //Inclusão dos caracteres especiais
    setlocale(LC_ALL,"Portuguese");

    //Declaração das variáveis
    int num, qPar = 0, sImp = 0;

    //Entrada de dados
    for(int i = 0; i < 10; i++){
        cout << "Digite a " << i + 1 <<"ª " << "nota" << endl;
        cin >> num;
        //Contador e somatório se num for par ou ímpar, respectivamente
        if(num%2 == 0){
            qPar++;
        }
        else{
            sImp = sImp + num;
        }
    }
    //Saída de dados
    cout << "Quantidade de números pares = " << qPar << endl;
    cout << "Somatório dos números ímpares = " << sImp << endl;
return 0;
system("PAUSE");
}
