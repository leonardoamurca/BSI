/*
Leonardo Aguilar
Calcula a média dos números pares e dos números ímpares digitados pelo usuário,
identifica qual o maior e menor número par e o maior e menor número ímpar e o
usuário só para de entrar o dados quando é digitado -1.
Entrada: Números
Saída: Média dos impares, média dos pares, maior par, maior ímpar, menor par, menor ímpar
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
    int num = 0, spar = 0, simpar = 0, impar = 0, par = 0, pmedia = 0, imedia = 0, imaior = -100000, imenor = 100000, pmaior = -100000, pmenor = 100000;
    while(num >= 0){
        //Entrada de dados
        cout << "Digite um valor(Digite -1 para sair):" << endl;
        cin >> num;
        //Idenficação se o número digitado é par, ímpar ou igual a -1
        if(num%2 == 0){
            //Calcula a soma dos números pares e a quantidade de números pares digitados
            spar += num;
            par++;
            //Identifica qual o maior e o menor número par
            if (num > pmaior){
                pmaior = num;
            }
            if (num < pmenor){
                pmenor = num;
            }
        }
        else if(num%2 != 0 and num > 0){
            //Calcula a soma dos números ímpares e a quantidade de números ímpares digitados
            simpar += num;
            impar++;
            //Identifica qual o maior e o menor número ímpar
            if (num > imaior){
                imaior = num;
            }
            if (num < imenor and num > 0){
                imenor = num;

            }
        }
    }
    //Calcula a média dos números pares e ímpares
    pmedia = spar/par;
    imedia = simpar/impar;

    //Saída de dados
    cout << "Media ímpares = " << imedia << endl;
    cout << "MAIOR ímpar = " << imaior << endl;
    cout << "MENOR ímpar = " << imenor << endl;
    cout << "====================" << endl;
    cout << "Media pares = " << pmedia << endl;
    cout << "MAIOR par = " << pmaior << endl;
    cout << "MENOR par = " << pmenor << endl;
return 0;
system("PAUSE");
}
