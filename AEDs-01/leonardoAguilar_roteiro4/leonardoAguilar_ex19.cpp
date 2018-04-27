/*
Leonardo Aguilar
Calcula a m�dia dos n�meros pares e dos n�meros �mpares digitados pelo usu�rio,
identifica qual o maior e menor n�mero par e o maior e menor n�mero �mpar e o
usu�rio s� para de entrar o dados quando � digitado -1.
Entrada: N�meros
Sa�da: M�dia dos impares, m�dia dos pares, maior par, maior �mpar, menor par, menor �mpar
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
        //Entrada de dados
        cout << "Digite um valor(Digite -1 para sair):" << endl;
        cin >> num;
        //Idenfica��o se o n�mero digitado � par, �mpar ou igual a -1
        if(num%2 == 0){
            //Calcula a soma dos n�meros pares e a quantidade de n�meros pares digitados
            spar += num;
            par++;
            //Identifica qual o maior e o menor n�mero par
            if (num > pmaior){
                pmaior = num;
            }
            if (num < pmenor){
                pmenor = num;
            }
        }
        else if(num%2 != 0 and num > 0){
            //Calcula a soma dos n�meros �mpares e a quantidade de n�meros �mpares digitados
            simpar += num;
            impar++;
            //Identifica qual o maior e o menor n�mero �mpar
            if (num > imaior){
                imaior = num;
            }
            if (num < imenor and num > 0){
                imenor = num;

            }
        }
    }
    //Calcula a m�dia dos n�meros pares e �mpares
    pmedia = spar/par;
    imedia = simpar/impar;

    //Sa�da de dados
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
