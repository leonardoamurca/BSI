/*
Leonardo Aguilar
Imprime a s�rie de Ricci
Entrada: 2 primeiros d�gitos,
Sa�da: S�rie de Fibanacci
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
    //Inclus�o dos caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declara��o das vari�veis
    int n, ant, atu, prox = 0;

    //Entrada de dados
    cout << "Digite o limite: " << endl;
    cin >> n;
    cout << "Digite os 2 primeiros d�gitos: " << endl;
    cin >> ant >> atu;

    //Sequ�ncia de Ricci
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
