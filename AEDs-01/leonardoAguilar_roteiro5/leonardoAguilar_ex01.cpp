/*
Leonardo Aguilar
Calcula:
    - Total de alunos com idade menor ou igual a 16 anos
    - Total de alunos com idade maior que 16 anos
    - Média das idades
    - Idade do aluno mais novo
    - Idade do aluno mais velho
Entrada: Idade de 40 alunos
Saída:
    - Total de alunos com idade menor ou igual a 16 anos
    - Total de alunos com idade maior que 16 anos
    - Média das idades
    - Idade do aluno mais novo
    - Idade do aluno mais velho
*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>

using namespace std;

//Variável Global
const int TAM = 40;

int main(){

    //Inclusão de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declaração de variáveis
    int idade[TAM], me16 = 0, ma16 = 0, maior = -100000, menor = 100000;
    float soma = 0;

    for(int i = 0; i < TAM; i++){
        cout << "Digite a idade do aluno " << i + 1 << ": " << endl;
        //idade[i] = rand()%100;
        cin >> idade[i];
        soma += idade[i];
        if(idade[i] <= 16){
            me16++;
        }
        else if(idade[i] >= 16){
            ma16++;
        }
        if(idade[i] < menor){
            menor = idade[i];
        }
        if(idade[i] > maior){
            maior = idade[i];
        }
    }

    //Saída de dados
    cout << "Total de alunos MENOR ou IGUAL a 16 anos: " << me16 << " alunos" << endl;
    cout << "Total de alunos MAIOR a 16 anos: " << ma16 << " alunos" << endl;
    cout << "Média das idades = " << soma/TAM << endl;
    cout << "Idade do aluno mais novo = " << menor << " anos" << endl;
    cout << "Idade do aluno mais velho = " << maior << " anos" << endl;

return 0;
system("PAUSE");
}
