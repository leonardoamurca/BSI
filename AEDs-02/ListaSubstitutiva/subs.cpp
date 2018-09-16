#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <string.h>

using namespace std;

//Vari�veis globais
int *codigo;
float *base_calculo;
string *nome;
int qtd;
int i = 0;

//Declara��o das fun��es e procedimentos
void lerArquivo(char * nomeArq);
void alocarVetor(int n);
void novaPessoa(char dados[]);
void gravarArquivo();
void imprimeVetor();


//FUN��O MAIN
int main(){
    lerArquivo("Pessoas.txt");
    imprimeVetor();
    gravarArquivo();
    return 0;
}

void lerArquivo(char *nomeArq){
    const int Max=30;
    char linha[Max];
    ifstream fin(nomeArq);
    fin.getline(linha, Max);
    qtd = atoi(linha);
    alocarVetor(qtd);

    while(!fin.eof()){
        fin.getline(linha, Max);
        novaPessoa(linha);
        //inserirPessoaVetor(p, i);
        i++;
    }
}

void alocarVetor(int n){
    codigo = new int[n];
    base_calculo = new float[n];
    nome = new string[n];
}

void novaPessoa(char dados[]){
    char* chars_array = strtok(dados, ",");
    codigo[i] = atoi(chars_array);

    chars_array = strtok(NULL, ",");
    base_calculo[i] = atof(chars_array);

    chars_array = strtok(NULL, ",");
    string str(chars_array);
    nome[i] = str;
}

void imprimeVetor(){
    for(int i=0; i<qtd;i++){
        cout << codigo[i] <<"\t " << base_calculo[i] << "\t" << nome[i] << endl;
    }
}

void gravarArquivo(){
    ofstream fout;
    fout.open("Salarios.txt");
    for(int i=0;i<qtd;i++){
        fout << "Codigo: " << codigo[i] << ", " <<
        "Nome: " << nome[i] << ", " <<
        "Salario: " << (954*base_calculo[i]) << endl;
    }
}
