/*LEONARDO AGUILAR MURCA*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <string.h>

using namespace std;

void imprimeCabecalho(string nome);

int main(){

    //Inclus�o de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Entrada de dados
    string nome;
    getline(cin, nome);

    //INVOCA�AO DO MAL
    imprimeCabecalho(nome);

return 0;
system("PAUSE");
}

void imprimeCabecalho(string nome){
    cout << "============================================" << endl;
    cout << "IFMG � Instituto Federal de Minas Gerais" << endl;
    cout << "Campus Sabar�" << endl;
    cout << "Disciplina de Laborat�rio de Programa��o I" << endl;
    cout << "Nome: " << nome << endl;
}

