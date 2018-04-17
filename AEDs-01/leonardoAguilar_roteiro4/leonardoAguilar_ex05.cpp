/*
Leonardo Aguilar
Imprime a maior e a menor nota e qual aluno tirou
tais notas. Calcula a soma e média de todas as 10 notas.
Entrada: Nota e nome de 10 alunos
Saída: Soma, média, maior nota, menor nota, aluno maior nota, aluno menor nota
*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main(){
    //Inclusão dos caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declaração das variáveis
    double soma = 0, media = 0, nota[10], maior = -100000000, menor = 10000000;
    string nome[3], nMaior, nMenor, nomeMaior[3], nomeMenor[3], nMajor[0], nMinor[0];
    int cont1 = 0, cont2 = 0;

    for(int i = 0; i < 3; i++){
        cout << "Digite a nota e o nome do aluno " << i << ", respectivamente:" << endl;
        cin >> nota[i];
         fflush(stdin);
        getline(cin, nome[i]);


        if(nota[i] > maior){
            cont1 = 0;
            maior = nota[i];
            //nMaior = nome[i];
            nMajor[cont1] = nome[i];
            if(nota[i] == maior){
                cont1++;
            }
        }

        if(nota[i] < menor){
            cont2 = 0;
            menor = nota[i];
            //nMenor = nome[i];
            nMinor[cont2] = nome[i];
        }
        soma = soma + nota[i];
    }
    media = soma/3;
    cout << "Maior nota: " << maior << endl;
    //cout <<"Nome do aluno (maior):" << nMaior << endl;

    cout << "Menor nota: " << menor << endl;
    //cout <<"Nome do aluno (menor):" << nMenor << endl;

    cout << "Soma = " << soma << endl;
    cout << "Média = " << media << endl;

    cout <<"Nome do aluno (maior):" << endl;
    for(int i = 0; i < 3; i++){
        cout << nMajor[i] << endl;
    }
    cout <<"Nome do aluno (menor):" << endl;
    for(int j = 0; j < 3; j++){
        cout << nMinor[j] << endl;
    }

return 0;
system("PAUSE");
}
