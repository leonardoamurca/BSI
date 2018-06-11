/*LEONARDO AGUILAR MURCA*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

const int LINHA = 5, COLUNA = 3;

int main(){

    //Inclusão de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    char nome[100], apelido[100];
    int qtdChar = 0, qtd = 0;

    cout << "Digite seu nome completo: " << endl;
    cin.getline(nome, 256);

    cout << "Digite seu apelido: " << endl;
    cin.getline(apelido, 256);

    qtdChar = strlen(nome);
    qtd = qtdChar;

    for(int i = 0; i < qtdChar; i++){
        if(nome[i] == ' '){
            qtd--;
        }
    }

    cout << "Seu nome possui " << qtd << " caracteres! " << endl;

    cout << strcat(nome, apelido) << endl;

    int compara;
    compara = strcmp(nome, apelido);

    if(compara == 1){
        cout << "Nome e apelido iguais! " << endl;
    }
    else{
        cout << "Nome e apelido diferentes! " << endl;
    }

return 0;
system("PAUSE");
}
