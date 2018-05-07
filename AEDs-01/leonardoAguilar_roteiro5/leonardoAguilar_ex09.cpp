/*
Leonardo Aguilar
Dado um conjunto de 50 fichas de alunos, cada uma contendo altura e sexo do aluno, esse
algoritmo calcula:
    - A maior, menor e a m�dias das alturas da turma;
    - As mulheres com altura acima da m�dia da altura dos homens;
    - Os homens com altura abaixo da m�dia da altura das mulheres;
    - As pessoas com altura abaixo da m�dia da turma.
Entrada: Altura e sexo de 50 alunos
Sa�da:
    - A maior, menor e a m�dias das alturas da turma;
    - As mulheres com altura acima da m�dia da altura dos homens;
    - Os homens com altura abaixo da m�dia da altura das mulheres;
    - As pessoas com altura abaixo da m�dia da turma.
*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <string.h>

using namespace std;

//Vari�vel global
const int TAM = 50;

int main(){

    //Inclus�o de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declara��o das vari�veis
    float h[TAM], sexo[TAM], soma = 0, media = 0, maior = -100000, menor = 100000, hh = 0, hm = 0;
    float somahh = 0, mediahh = 0, somahm = 0, mediahm = 0;

    //Entrada de dados
    for(int i = 0; i < TAM; i++){
        cout << "Aluno " << i+1 << ":" << endl;
        cout << "Digite a altura: " << endl;
        cin >> h[i];
        cout << "Digite o sexo (1 - Masculino, 2 - Feminino): " << endl;
        cin >> sexo[i];

        //Valida��o da entrada do sexo
        while(sexo[i] != 1 and sexo[i] != 2){
            cout << "Sexo inv�lido! Digite novamente: " << endl;
            cin >> sexo[i];
        }

        //Soma de todas as alturas
        soma += h[i];

        //Defina qual o(a) maior e menor aluno(a)
        if(h[i] > maior){
            maior = h[i];
        }
        if(h[i] < menor){
            menor = h[i];
        }

        //Soma das alturas de todos os alunos homens
        if(sexo[i] == 1){
            somahh += h[i];
            hh++;
        }

        if(sexo[i] == 2){
            somahm += h[i];
            hm++;
        }


    }
    //Calcula a altura m�dia de todos os alunos
    media = soma/TAM;
    //Calcula a altura m�dia dos alunos homens
    mediahh = somahh/hh;
    //Calcula a altura m�dia das alunas mulheres
    mediahm = somahm/hm;

     //Imprime o maior e menor aluno e a altura m�dia de todos os alunos
    cout << "Aluno com maior altura = " << maior << "m " << endl;
    cout << "Aluno com menor altura = " << menor << "m " << endl;
    cout << "Altura m�dia de todos os alunos = " << media << "m " << endl;

    //Imprime as mulheres com a altura acima da m�dia da altura dos homens
    cout << "A(s) aluna(s): ";
    for(int i = 0; i < TAM; i++ ){
        if(sexo[i] == 2 and h[i] > mediahh){
            cout << i+1 << ", ";
        }
        else{
            cout << "nenhuma " << endl;
        }
    }
    cout << "possui(em) altura acima da m�dia da altura dos homens." << endl;

    //Imprime os homens com a altura abaixo da m�dia da altura das mulheres
    cout << "O(s) aluno(s): ";
    for(int i = 0; i < TAM; i++ ){
        if(sexo[i] == 1 and h[i] < mediahm){
            cout << i+1 << ", ";
        }
        else{
            cout << "nenhum" << endl;
        }
    }
    cout << "possui(em) altura abaixo da m�dia da altura das mulheres." << endl;

     //Imprime os alunos com altura abaixo da m�dia de altura da turma
    cout << "Os alunos : ";
    for(int i = 0; i < TAM; i++ ){
        if(h[i] < media){
            cout << i+1 << ", ";
        }
        else{
            cout << "nenhum " << endl;
        }
    }
    cout << "possui(em) altura abaixo da m�dia da turma." << endl;

return 0;
system("PAUSE");
}
