/*LEONARDO AGUILAR MURCA*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <string.h>

using namespace std;

void imprimeCabecalho(string nome);

int main(){

    //Inclusão de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Entrada de dados
    string nome;
    getline(cin, nome);

    //INVOCAÇAO DO MAL
    imprimeCabecalho(nome);

return 0;
system("PAUSE");
}

void imprimeCabecalho(string nome){
    cout << "============================================" << endl;
    cout << "IFMG – Instituto Federal de Minas Gerais" << endl;
    cout << "Campus Sabará" << endl;
    cout << "Disciplina de Laboratório de Programação I" << endl;
    cout << "Nome: " << nome << endl;
}

