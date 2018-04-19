/*
Leonardo Aguilar
Imprime a série de Fibonacci dado o limite
Entrada: Limite
Saída: Série de Fibanacci
*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <iomanip>



using namespace std;

int main(){
    //Inclusão dos caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declaração das variáveis
    int n, ant = 1, atu = 1, prox = 0;

    //Entrada de dados
    cout << "Digite o limite: " << endl;
    cin >> n;
    cout << endl;

    //Sequencia de Fibonacci
    cout << 1 << endl;
    cout << 1 << endl;
    for(int i = 0; i < n; i++){
        prox = atu + ant;
        ant = atu;
        atu = prox;
        cout << prox << endl;
       }


return 0;
system("PAUSE");
}
