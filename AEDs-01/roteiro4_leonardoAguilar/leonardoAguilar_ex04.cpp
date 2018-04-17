/*
Leonardo Aguilar
Soma os quadrados de dez números
Entrada: Dez números
Saída: Soma dos quadrados de cada número
*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>

using namespace std;

int main(){
    //Inclusão de caracteres especiais
    setlocale(LC_ALL,"Portuguese");

    //Declaração das variáveis
    int soma = 0, num[10];


    for(int i = 0; i < 10; i++){
        //Entrada de dados
        cout << "Digite o "<< i <<"º" << "número: " << endl;
        cin >> num[i];
        //Cálculo do somatório
        soma = soma + pow(num[i], 2);
    }

    //Saída de dados
    cout << "Soma = " << soma << endl;

return 0;
system("PAUSE");
}
