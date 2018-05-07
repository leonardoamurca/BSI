/*
Leonardo Aguilar
Intercala 2 vetores de 10 posições em um terceiro vetor
Entrada: v1, v2
Saída: v3
*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <string.h>

using namespace std;

const int TAM = 10;

int main(){

    //Inclusão de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declaração das variáveis
    int v1[TAM], v2[TAM], v3[20];

    //Preenche v1 e v2
    for(int i = 0; i < TAM; i++){
        v1[i] = rand()%30;
        v2[i] = rand()%30;
    }

    //Intercala v1 e v2
    for(int i = 0, j = 0, z = 0; i < 20; i++){
        if(i%2 == 0){
            v3[i] = v1[z];
            z++;
        }
        else {
            v3[i] = v2[j];
            j++;
        }
    }

    //Imprime vetor 1
    cout << "v1 = [";
    for(int i = 0; i < TAM; i++){
        cout << v1[i] << " ";
    }
    cout << "]" << endl;

    //Imprime vetor 1
    cout << "v2 = [";
    for(int i = 0; i < TAM; i++){
        cout << v2[i] << " ";
    }
    cout << "]" << endl;

    //Imprime vetor 1
    cout << "v3 = [";
    for(int i = 0; i < 20; i++){
        cout << v3[i] << " ";
    }
    cout << "]" << endl;
return 0;
system("PAUSE");
}
