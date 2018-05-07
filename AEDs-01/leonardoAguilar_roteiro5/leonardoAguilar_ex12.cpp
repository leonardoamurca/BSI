/*
Leonardo Aguilar

Entrada:
Sa�da:
*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <string.h>

using namespace std;



int main(){

    //Inclus�o de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declara��o das vari�veis
    int nA, nB;

    cout << "Digite o n�mero de elementos do conjunto A: " << endl;
    cin >> nA;

    int a[nA];

    for(int i = 0; i < nA; i++){
        cout << "Digite o " << i+1 << "� elemento de A: " << endl;
        cin >> a[i];
    }
    cout << "=================================================" << endl;

    cout << "Digite o n�mero de elementos do conjunto B: " << endl;
    cin >> nB;

    int b[nB];

    for(int i = 0; i < nB; i++){
        cout << "Digite o " << i+1 << "� elemento de B: " << endl;
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
