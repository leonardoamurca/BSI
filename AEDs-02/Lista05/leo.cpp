//Leonardo Aguilar Murca
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <string.h>

using namespace std;

//Declara a struct Pessoa
struct Pessoa {
    int codigo;
    float base_calculo;
    string nome;
};

//Declaracao das funcoes
void lerArquivo(char * nomeArq);
void alocarVetor(int n);
Pessoa novaPessoa(char dados[]);
void inserirPessoaVetor(Pessoa p, int indice);
void imprimeVetor();
void gravarArquivo();

Pessoa *pessoas;
int qtd;

//FUNCAO MAIN
int main(){
    lerArquivo("Pessoas.txt");
    imprimeVetor();
    gravarArquivo();
    return 0;
}

void lerArquivo(char *nomeArq){
    const int Max=30;
    char line[Max];
    ifstream fin(nomeArq);
    fin.getline(line, Max);
    qtd = atoi(line);
    alocarVetor(qtd);
    int i = 0;

    while(!fin.eof()){
        fin.getline(line, Max);
        Pessoa p = novaPessoa(line);
        inserirPessoaVetor(p, i);
        i++;
    }
}

void alocarVetor(int n){
    pessoas = new Pessoa[n];
}

Pessoa novaPessoa(char dados[]){
    Pessoa p;
    char* chars_array = strtok(dados, ",");
    p.codigo = atoi(chars_array);

    chars_array = strtok(NULL, ",");
    p.base_calculo = atof(chars_array);

    chars_array = strtok(NULL, ",");
    string str(chars_array);
    p.nome = str;
    return p;
}

void inserirPessoaVetor(Pessoa p, int  indice){
    pessoas[indice] = p;
}

void imprimeVetor(){
    for(int i=0; i<qtd;i++){
        cout << pessoas[i].codigo <<"\t " << pessoas[i].base_calculo << "\t" << pessoas[i].nome << endl;
    }
}

void gravarArquivo(){
    ofstream fout;
    fout.open("Salarios.txt");
    for(int i=0;i<qtd;i++){
        fout << "Codigo: " << pessoas[i].codigo << ", " <<
        "Nome: " << pessoas[i].nome << ", " <<
        "Salario: " << (954*pessoas[i].base_calculo) << endl;
    }
}
