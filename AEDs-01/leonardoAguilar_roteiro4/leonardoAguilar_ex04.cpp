/*
Leonardo Aguilar
Soma os quadrados de dez n�meros
Entrada: Dez n�meros
Sa�da: Soma dos quadrados de cada n�mero
*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>

using namespace std;

int main(){
    //Inclus�o de caracteres especiais
    setlocale(LC_ALL,"Portuguese");

    //Declara��o das vari�veis
    int soma = 0, num[10];


    for(int i = 0; i < 10; i++){
        //Entrada de dados
        cout << "Digite o "<< i <<"�" << "n�mero: " << endl;
        cin >> num[i];
        //C�lculo do somat�rio
        soma = soma + pow(num[i], 2);
    }

    //Sa�da de dados
    cout << "Soma = " << soma << endl;

return 0;
system("PAUSE");
}
