/*
Leonardo Aguilar
Identificar se uma montanha de sequecia N tem 1 ou mais picos!

Entrada: A primeira linha da entrada cont�m um inteiro N,
representando o tamanho da sequ�ncia. A segunda linha cont�m N
inteiros Ai, 1 <=1 i <= N, representando a sequ�ncia de alturas
da montanha.

Sa�da: Seu programa deve imprimir uma linha contendo o caractere
�S� se h� mais de um pico, ou o caractere �N� se h� apenas um pico.
*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <string.h>

using namespace std;

//Vari�vel Global
const int TAM = 10;

int main(){

    //Inclus�o de caracteres especiais
    setlocale(LC_ALL, "Portuguese");
    //Declara��o das vari�veis e entrada de dados
    int N, cont = 0;
    cin >> N;
    int A[N];
    for(int i = 1; i <= N; i++){
        cin >> A[i];
    }

    //Indentifica o n�mero de picos
    for(int i = 2; i <= (N-1); i++){
        if(A[i] > A[i-1] and A[i] > A[i+1]){
            cont++;
        }
    }

    //Sa�da de dados
    if(cont > 1){
        cout << "S" << endl;
    }
    if(cont == 1){
        cout << "N" << endl;
    }
return 0;
system("PAUSE");
}
