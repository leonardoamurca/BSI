/*
Leonardo Aguilar
Dado o intervalo de 0 � 100, forme um conjunto universo com n elementos e divide
esse universo em 2 conjuntos:
    - C1 = N�meros positivos e pares,
    - C2 = N�meros �mpares e/ou negativos
Entrada: Quantidade de elementos do conjunto universo e elementos do mesmo
Sa�da: UNIVERSO, C1 e C2
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
    int n;

    cout << "Digite o n�mero de elementos do conjunto principal (n <= 100): " << endl;
    cin >> n;

     //Declara��o de vari�vel
    int vet[n], vetC1[n], vetC2[n];

    //Preenche os vetores
    for(int i = 0; i < n; i++){
        //Gera n�meros aleat�rio entre -30 e 100
        vet[i] = rand () % 100 - 30;
        if(vet[i] > 0 and vet[i]%2 == 0){
            vetC1[i] = vet[i];
        }
        else{
            vetC2[i] = vet[i];
        }
    }

//Conjunto Universo
cout << "Universo = { ";
for(int i = 0; i < n; i++){
    cout << vet[i] << " ";
}
cout << "}" << endl;

//Conjunto C1
cout << "C1 = { ";
for(int i = 0; i < n; i++){
    if(vet[i] == vetC1[i]){
        cout << vetC1[i] << " ";
    }
}
cout << "}" << endl;

//Conjunto C2
cout << "C2 = { ";
for(int i = 0; i < n; i++){
    if(vet[i] == vetC2[i]){
        cout << vetC2[i] << " ";
    }
}
cout << "}" << endl;

return 0;
system("PAUSE");
}
