/*
Leonardo Aguilar
Imprime caracteres da tabela ASCII de 32 � 255
Sa�da: media
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
    int num = 0, spar = 0, simpar = 0, impar = 0, par = 0, pmedia = 0, imedia = 0, imaior = -100000, imenor = 100000, pmaior = -100000, pmenor = 100000;
    while(num >= 0){
        cout << "Digite um valor:" << endl;
        cin >> num;
        if(num%2 == 0){
            spar += num;
            par++;
            if (num > pmaior){
                pmaior = num;
            }
            if (num < pmenor){
                pmenor = num;
            }
        }
        else{
            simpar += num;
            impar++;
            if (num > imaior){
                imaior = num;
            }
            if (num < imenor and num > 0){
                imenor = num;

            }

        }
    }
    pmedia = spar/par;
    imedia = impar/impar;

    cout << "Media �mpares = " << imedia << endl;
    cout << "MAIOR �mpar = " << imaior << endl;
    cout << "MENOR �mpar = " << imenor << endl;
    cout << "====================" << endl;
    cout << "Media pares = " << pmedia << endl;
    cout << "MAIOR par = " << pmaior << endl;
    cout << "MENOR par = " << pmenor << endl;
return 0;
system("PAUSE");
}
