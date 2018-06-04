/*
Leonardo Aguilar
Identificar se uma montanha de sequecia N tem 1 ou mais picos!

Entrada: A primeira linha da entrada contém um inteiro N,
representando o tamanho da sequência. A segunda linha contém N
inteiros Ai, 1 <=1 i <= N, representando a sequência de alturas
da montanha.

Saída: Seu programa deve imprimir uma linha contendo o caractere
“S” se há mais de um pico, ou o caractere “N” se há apenas um pico.
*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <string.h>

using namespace std;

//Variável Global
const int TAM = 10;

int main(){

    //Inclusão de caracteres especiais
    setlocale(LC_ALL, "Portuguese");
    //Declaração das variáveis e entrada de dados
    int N, cont = 0;
    cin >> N;
    int A[N];
    for(int i = 1; i <= N; i++){
        cin >> A[i];
    }

    //Indentifica o número de picos
    for(int i = 2; i <= (N-1); i++){
        if(A[i] > A[i-1] and A[i] > A[i+1]){
            cont++;
        }
    }

    //Saída de dados
    if(cont > 1){
        cout << "S" << endl;
    }
    if(cont == 1){
        cout << "N" << endl;
    }
return 0;
system("PAUSE");
}
