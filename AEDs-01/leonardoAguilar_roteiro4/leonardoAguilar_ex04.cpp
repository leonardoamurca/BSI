/*
Leonardo Aguilar
Soma os quadrados de dez n�meros digitados pelo usu�rio
Entrada: Dez n�meros
Sa�da: Soma total dos quadrados de cada n�mero
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
    int soma = 0, num;


    for(int i = 0; i < 10; i++){
        //Entrada de dados
        cout << "Digite o "<< i + 1 <<"�" << " n�mero: " << endl;
        cin >> num;
        //C�lculo do somat�rio
        soma = soma + pow(num, 2);
    }

    //Sa�da de dados
    cout << "Soma = " << soma << endl;

return 0;
system("PAUSE");
}
