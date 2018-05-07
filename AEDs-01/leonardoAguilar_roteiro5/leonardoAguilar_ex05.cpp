/*
Leonardo Aguilar
Identifica quais atletas poderão participar da competição dado determinadas condições
Entrada: Altura do atleta
Saída: Poderá participar, não poderá participar
*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <string.h>

using namespace std;

//Variável Global
const int TAM = 10;
int main(){

    //Inclusão de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declaração de variável
    float soma = 0, media = 0, alt[TAM];

    //Entrada de dados
    for(int i = 0; i < TAM; i++){
        cout << "Digite a altura do atleta " << i+1 << ":" << endl;
        cin >> alt[i];
        soma += alt[i];
    }
    //Calcula a média das alturas
    media = soma/TAM;

     //Saída de dados
    cout << "Média geral das altura = " << media << "m" << endl;
    cout << "Os atletas ";
    for(int i = 0; i < TAM; i++){
        if(alt[i] >= media){
            cout << i+1 << ", ";
        }
    }
    cout << " poderão participar!" << endl;

return 0;
system("PAUSE");
}
