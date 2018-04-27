/*
Leonardo Aguilar
Imprime a série de Ricci
Entrada: 2 primeiros dígitos,
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
    int n, ant, atu, prox = 0;

    //Entrada de dados
    cout << "Digite o limite: " << endl;
    cin >> n;
    cout << "Digite os 2 primeiros dígitos: " << endl;
    cin >> ant >> atu;

    //Sequência de Ricci
    cout << ant << " " << atu << " ";
    for(int i = 0; i < n; i++){
        prox = atu + ant;
        ant = atu;
        atu = prox;
        cout << prox <<" ";
       }


return 0;
system("PAUSE");
}
