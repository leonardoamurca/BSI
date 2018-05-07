/*
Leonardo Aguilar
Imprime os n primeiros números da série de Fibonacci
Entrada: n
Saída: Série de Fibonacci
*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>

using namespace std;

//Variável Global

int main(){

    //Inclusão de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declaração de variável
    int n;

    //Entrada de dados
    cout << "Digite o limite de elementos da série de Fibonacci: " << endl;
    cin >> n;

    //Declaração de variáveis
    int fib[n];

    //Zera todo o vetor
    for(int i = 1; i < n; i++){
        fib[i] = 0;
    }

    //Seta os 2 primeiros termos da série
    fib[0] = 1;
    fib[1] = 1;

    //Calcula os termos
    for(int i = 1; i < n; i++){
        fib[i+1] = fib[i] + fib[i-1] ;
    }

    //Imprime a série
    cout << "Fibonacci = [ ";
    for(int i = 0; i < n; i++){
        cout << fib[i] << " ";
    }
    cout << "]";


return 0;
system("PAUSE");
}
