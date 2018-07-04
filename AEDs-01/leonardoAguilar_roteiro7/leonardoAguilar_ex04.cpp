/*LEONARDO AGUILAR MURCA*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <string.h>

using namespace std;

int pot(int A, int B);

int main(){

    //Inclusão de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Entrada de dados
    int A = 1, B;
    cout << "Digite a base e o expoente, respectivamente " << endl;
    cin >> A >> B;

    cout << "Resultado = " << pot(A, B) << endl;;

system("PAUSE");
return 0;
}

int pot(int A, int B){
    int resultado = 1;
    for(int i = 0; i < B; i++){
        resultado *= A;
    }
    return resultado;
}


