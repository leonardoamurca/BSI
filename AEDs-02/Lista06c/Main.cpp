//Leonardo Aguilar Murca
#include <iostream>
#include <cstdio>
#include "lista.h"
#include "lista.cpp"
#include "aluno.h"



using namespace std;



Aluno* concatenar(Lista alu1, Lista alu2);


int main() {
    //Inicializa a lista de alunos 1
    Lista alu1;
    alu1.inicializar();

    //Inicializa a lista de alunos 2
    Lista alu2;
    alu2.inicializar();

    //Insercoes
    Aluno *a = new Aluno();

    //Aluno 01 (Lista 01)
    a = new Aluno();
    a->matricula = 1;
    a->nome = "Leonardo Aguilar";
    a->notas[0] = 2;
    a->notas[1] = 4;
    a->notas[2] = 6;
    a->notas[3] = 4;
    alu1.inserirAoInicio(a);

    //Aluno 02 (Lista 01)
    a = new Aluno();
    a->matricula = 2;
    a->nome = "Mateus Filipe";
    a->notas[0] = 1;
    a->notas[1] = 3;
    a->notas[2] = 2;
    a->notas[3] = 2;
    alu1.inserirAoFinal(a);

    cout << "\n========== LISTA DE ALUNOS 01 ==========" << endl;
    alu1.imprimir();

    //Aluno 01 (Lista 02)
    a = new Aluno();
    a->matricula = 3;
    a->nome = "Aldryn Vianna";
    a->notas[0] = 6;
    a->notas[1] = 6;
    a->notas[2] = 2;
    a->notas[3] = 2;
    alu2.inserirAoInicio(a);


     //Aluno 02 (Lista 02)
    a = new Aluno();
    a->matricula = 4;
    a->nome = "Pedro Gabriel";
    a->notas[0] = 2;
    a->notas[1] = 4;
    a->notas[2] = 2;
    a->notas[3] = 8;
    alu2.inserirAoFinal(a);

    //Aluno 03 (Lista 02)
    a = new Aluno();
    a->matricula = 5;
    a->nome = "Thiago Almeida";
    a->notas[0] = 7;
    a->notas[1] = 2;
    a->notas[2] = 3;
    a->notas[3] = 2;
    alu2.inserirAoFinal(a);

    cout << "\n========== LISTA DE ALUNOS 02 ==========" << endl;
    alu2.imprimir();
    cout << endl;

    concatenar(alu1, alu2);
    cout << "\n========== LISTA DE ALUNOS 01 + 02 ==========" << endl;
    alu1.imprimir();
    cout << endl;

    alu2.removerAluno(4);
    cout << "\n========== LISTA DE ALUNOS 02(Apos remocao de Pedro) ==========" << endl;
    alu2.imprimir();



return 0;
}

//Pesquisa aluno na lista
Aluno* concatenar(Lista alu1, Lista alu2)
{
    if(alu2.vazia()) { return NULL;}
    else
    {
        Aluno *a = new Aluno();
        Aluno* aux = alu2.primeiro;
        while(aux != NULL) {
            a = new Aluno();
            a->matricula = aux->matricula;
            a->nome = aux->nome;
            a->notas[0] = aux->notas[0];
            a->notas[1] = aux->notas[1];
            a->notas[2] = aux->notas[2];
            a->notas[3] = aux->notas[3];
            alu1.inserirAoFinal(a);
            aux = aux->prox;
        }
    }
}


