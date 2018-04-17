/*
Leonardo Aguilar
Calcula a quantidade de n�meros pares dentre os 10 digitados pelo usu�rio e
calcula o somat�rio dos n�meros �mpares.
Entrada: 10 n�meros
Sa�da: Quantidade de numeros pares, soma dos n�meros �mpares
*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>

using namespace std;

int main(){
    //Inclus�o dos caracteres especiais
    setlocale(LC_ALL,"Portuguese");

    //Declara��o das vari�veis
    int num, qPar = 0, sImp = 0;


    for(int i = 0; i < 10; i++){

        //Entrada de dados
        cout << "Digite o " << i + 1 <<"� " << " n�mero:" << endl;
        cin >> num;

        //Contador ou somat�rio se n�mero for par ou �mpar, respectivamente
        if(num%2 == 0){
            qPar++;
        }
        else{
            sImp = sImp + num;
        }
    }

    //Sa�da de dados
    cout << "Quantidade de n�meros pares = " << qPar << endl;
    cout << "Somat�rio dos n�meros �mpares = " << sImp << endl;

return 0;
system("PAUSE");
}
