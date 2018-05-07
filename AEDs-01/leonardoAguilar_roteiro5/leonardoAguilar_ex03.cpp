/*
Leonardo Aguilar
Imprime os n primeiros n�meros da s�rie de Fibonacci
Entrada: n
Sa�da: S�rie de Fibonacci
*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>

using namespace std;

//Vari�vel Global

int main(){

    //Inclus�o de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declara��o de vari�vel
    int n;

    //Entrada de dados
    cout << "Digite o limite de elementos da s�rie de Fibonacci: " << endl;
    cin >> n;

    //Declara��o de vari�veis
    int fib[n];

    //Zera todo o vetor
    for(int i = 1; i < n; i++){
        fib[i] = 0;
    }

    //Seta os 2 primeiros termos da s�rie
    fib[0] = 1;
    fib[1] = 1;

    //Calcula os termos
    for(int i = 1; i < n; i++){
        fib[i+1] = fib[i] + fib[i-1] ;
    }

    //Imprime a s�rie
    cout << "Fibonacci = [ ";
    for(int i = 0; i < n; i++){
        cout << fib[i] << " ";
    }
    cout << "]";


return 0;
system("PAUSE");
}
