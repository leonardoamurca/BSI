/*
Leonardo Aguilar
Inverte um vetor
Entrada: Elementos de um vetor
Saída: Vetor Invertido
*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>

using namespace std;

//Variável Global
const int TAM = 10;

int main(){

    //Inclusão de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declaração de variáveis
    int vetorOriginal[TAM], vetorInvertido[TAM];

    //Entrada de dados
    for(int i = 0; i < TAM; i++){
        cout << "Digite o " << i+1 << "º termo do seu vetor: " << endl;
        cin >> vetorOriginal[i];
    }

    //Imprime vetor original
    cout << "Vetor original = [ ";
     for(int i = 0; i < TAM; i++){
        cout << vetorOriginal[i] << " ";
     }
     cout << "]"<<endl;;


    //Inverte o vetor
    for(int i = 0, j = TAM - 1; i < TAM; i++, j--){
        vetorInvertido[j] = vetorOriginal[i];
    }

    //Imprime vetor invertido
    cout << "Vetor Invertido = [ ";
    for(int i = 0; i < TAM; i++){
        cout << vetorInvertido[i] << " ";
    }
    cout << "]" << endl;


return 0;
system("PAUSE");
}
