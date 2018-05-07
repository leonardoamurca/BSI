/*
Leonardo Aguilar
Identifica quais atletas poder�o participar da competi��o dado determinadas condi��es
Entrada: Altura do atleta
Sa�da: Poder� participar, n�o poder� participar
*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <string.h>

using namespace std;

//Vari�vel Global
const int TAM = 10;
int main(){

    //Inclus�o de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declara��o de vari�vel
    float soma = 0, media = 0, alt[TAM];

    //Entrada de dados
    for(int i = 0; i < TAM; i++){
        cout << "Digite a altura do atleta " << i+1 << ":" << endl;
        cin >> alt[i];
        soma += alt[i];
    }
    //Calcula a m�dia das alturas
    media = soma/TAM;

     //Sa�da de dados
    cout << "M�dia geral das altura = " << media << "m" << endl;
    cout << "Os atletas ";
    for(int i = 0; i < TAM; i++){
        if(alt[i] >= media){
            cout << i+1 << ", ";
        }
    }
    cout << " poder�o participar!" << endl;

return 0;
system("PAUSE");
}
