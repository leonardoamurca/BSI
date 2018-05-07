/*
Leonardo Aguilar

Entrada:
Saída:
*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <string.h>

using namespace std;



int main(){

    //Inclusão de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declaração das variáveis
    int nA, nB;

    cout << "Digite o número de elementos do conjunto A: " << endl;
    cin >> nA;

    int a[nA];

    for(int i = 0; i < nA; i++){
        cout << "Digite o " << i+1 << "º elemento de A: " << endl;
        cin >> a[i];
    }
    cout << "=================================================" << endl;

    cout << "Digite o número de elementos do conjunto B: " << endl;
    cin >> nB;

    int b[nB];

    for(int i = 0; i < nB; i++){
        cout << "Digite o " << i+1 << "º elemento de B: " << endl;
        cin >> b[i];
    }

    int c[nA+nB];

    for(int i = 0, j = 0, z = 0; i < (nA+nB); i++){
        if(i%2 == 0){
            c[i] = a[z];
            z++;
        }
        else {
            c[i] = b[j];
            j++;
        }
    }

    //Imprime o conjunto A
    cout << "a = [ ";
    for(int i = 0; i < nA; i++){
        cout << a[i] << " ";
    }
    cout << "]" << endl;

    //Imprime o conjunto B
    cout << "b = [ ";
    for(int i = 0; i < nB; i++){
        cout << b[i] << " ";
    }
    cout << "]" << endl;

    //Imprime o conjunto C
    cout << "c = [ ";
    for(int i = 0; i < (nA+nB); i++){
        cout << c[i] << " ";
    }
    cout << "]" << endl;



return 0;
system("PAUSE");
}
