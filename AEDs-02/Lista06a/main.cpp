//Leonardo Aguilar Mur�a
#include <iostream>
#include <string.h>
#include "lista.cpp"
#include <cstdio>

using namespace std;

int main(){
    //Inicializa a lista
    Lista funcio;
    funcio.inicializar();

    //Insercoes
    Funcionario *f = new Funcionario();

//=================INSERINDO 4 FUNCIONARIOS=================
    cout << "====== INSERINDO 4 FUNCIONARIOS ======" << endl;
    for(int i = 0; i < 4; i++){
        f = new Funcionario();
        //Inseririndo ao inicio
        if(i < 2){
            if(i==0){cout << "------AO INICIO------" << endl;}

            cout << "->Funcionario " << i+1 << endl;;

            cout << "Matricula:";
            cin >> f->matricula;


            cout << "Nome:";
            fflush(stdin);
            getline(cin, f->nome);

            cout << "Salario:";
            cin >> f->salario;
            funcio.inserirAoInicio(f);
        }
        //Inserir no final
        else{
            if(i == 2){cout << "\n------AO FINAL------" << endl;}

            cout << "->Funcionario " << i+1 << endl;;

            cout << "Matricula:";
            cin >> f->matricula;


            cout << "Nome:";
            fflush(stdin);
            getline(cin, f->nome);

            cout << "Salario:";
            cin >> f->salario;
            funcio.inserirAoFinal(f);
        }
    }
//=========================================================
    funcio.imprimir();

//=================PESQUISANDO FUNCIONARIO=================
int fPesquisa;
cout << "Digite a matricula do funcionario a ser pesquisado:";
cin >> fPesquisa;
cout << "\n====== NOME DO FUNCIONARIO PESQUISADO ======" << endl;
cout << funcio.pesquisar(fPesquisa)->nome << endl;
//=========================================================

//=================REMOVENDO FUNCIONARIOS===================
funcio.removerFinal();
funcio.removerInicio();
funcio.imprimir();

    return 0;
}
