/*
Leonardo Aguilar
Sabendo que por normas, o desvio padr�o do conte�do das latas em um processo de produ��o � de +/- 5 ml,
esse algoritmo calcula o desvio padr�o do conte�do de 20 latas de uma f�brica e imprime se
o processo precisa ser revisado ou n�o.
Entrada: Quantidade de ml de 20 latas
Sa�da: Desvio padr�o, m�dia do conte�do das latas e se deve ser revisao ou n�o
*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <string.h>

using namespace std;

const int TAM = 20;

int main(){

    //Inclus�o de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declara��o das vari�veis
    float s = 0, x[TAM], soma = 0, media = 0;

    //Entrada de dados e c�lculo da m�dia de ml das latas
    for(int i = 0; i < TAM; i++){
        cout << "Digite a quantidade de ml da lata " << i+1 <<": " <<endl;
        cin >> x[i];
        soma += x[i];
        media = soma/TAM;
    }

    //Calcula o desvio padr�o
    for(int i = 0; i < TAM; i++){
        s  += pow(x[i] - media, 2)/(TAM);
    }

    //Sa�da de dados
    cout << "Desvio padr�o = " << sqrt(s) << endl;
    cout << "M�dia = " << media << endl;

    //Sa�da de dados condicionada pelo desvio padr�o
    if((int)sqrt(s) < 5 or (int)sqrt(s) > 5){
        cout << "O processo deve ser revisado!" << endl;
    }
    else{
        cout << "O processo n�o precisa ser revisado!" << endl;
    }
return 0;
system("PAUSE");
}
