/*
Leonardo Aguilar
Imprime a maior e a menor nota e quais aluno tirou tais notas
tais notas. Calcula a soma e a m�dia de todas as 10 notas.
Entrada: Nota e nome de 10 alunos
Sa�da: Soma, m�dia, maior nota, menor nota, aluno maior nota, aluno menor nota
*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>



using namespace std;

int main(){
    //Inclus�o dos caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declara��o das vari�veis
    double soma = 0, media = 0, nota, maior = -100000, menor = 100000;
    string nome, nMaior, nMenor;

    for(int i = 0; i < 10; i++){

        //Entrada de dados
        cout << "ALUNO " << i + 1 << endl;
        cout << "Digite nota e nome, respectivamente: " << endl;
        cin >> nota;
        fflush(stdin);
        getline(cin, nome);

        //Compara��o da maior e menor nota
        if(nota > maior){
            maior = nota;
            nMaior = nome;
        }
        if(nota < menor){
            menor = nota;
            nMenor = nome;
        }

        //Somat�rio das notas
        soma = soma + nota;
    }

    //M�dia aritm�tica das 10 notas
    media = soma/10;

    //Sa�da de dados
    cout << "-->Maior nota: " << maior << endl;
    cout << "Nome do aluno (maior): " << nMaior << endl;

    cout << "-->Menor nota: " << menor << endl;
    cout <<"Nome do aluno (menor): " << nMenor << endl;

    cout << "Soma = " << soma << endl;
    cout << "M�dia = " << media << endl;

return 0;
system("PAUSE");
}
