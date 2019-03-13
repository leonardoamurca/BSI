#ifndef TESTE_MESA_HPP_INCLUDED
#define TESTE_MESA_HPP_INCLUDED

#include <iostream>
#include <iomanip>

#include <fstream>

using namespace std;

/*

código que executa o algoritmo bubble sort
e gera uma tabela de teste de mesa.

ele tbm é capaz de gerar um CSV com a tabela.
Estude o código.

*/


void ordenarTesteDeMesa(float vetor[MAX])//, bool gerar_arquivo = false)
{
    bool gerar_arquivo = false;
    int passos = 0;
    //bool trocou = true;
    bool troca = true;

    ofstream arquivo;

    if (gerar_arquivo)
    {
        arquivo.open("teste_de_mesa.csv", ios::out | ios::trunc);

        for (int i = 0; i < MAX; i++) arquivo << "v[" << i << "];";
        arquivo << "i;j" << endl;
        for (int i = 0; i < MAX; i++) arquivo << vetor[i] << ";";
        arquivo << ";" << endl;
    }

    cout << endl << "TESTE DE MESA" << endl;
    cout << setw(MAX*2+MAX+1) << left << "|vetor" << "| i | j " << endl;
    cout << "+";
    for (int i = 0; i < MAX*2+MAX; i++) cout << "-";
    cout << "+---+---" << endl;
    cout << "|" << right;
    for (int i = 0; i < MAX; i++)
    {
        cout << setw(2) << vetor[i] << " ";
    }
    cout << "| 0 |" << endl;

    for (int i = 0; i < MAX && troca; i++)
    {
        passos++;

        if (gerar_arquivo)
        {
            for (int k = 0; k < MAX; k++) arquivo << ";";
            arquivo << i << ";" << endl;
        }

        cout << "|" << setw(MAX*2+MAX+1) << "|" << setw(2) << i << " |" << endl;

        //trocou = false;
        for (int j = 1; j < MAX-i; j++)
        {
            passos++;
            troca = false;
            if (gerar_arquivo)
            {
                for (int k = 0; k <= MAX; k++) arquivo << ";";
                arquivo << j << endl;
            }

            cout << "|" << setw(MAX*2+MAX+1) << "|" << "   |" << setw(2) << j << endl;

            if (vetor[j-1] > vetor[j])
            {
                //trocou=true;
                float aux = vetor[j-1];
                vetor[j-1] = vetor[j];
                vetor[j] = aux;
                troca = true;
                passos++;

                if (gerar_arquivo)
                {
                    for (int k = 0; k < j-1; k++) arquivo << ";";
                    arquivo << vetor[j-1] << ";" << vetor[j];
                    for (int k = j; k < MAX+2; k++) arquivo << ";";
                    arquivo << endl;
                }

                cout << "|" << setw((j-1)*3+2) << vetor[j-1] << setw(3) << vetor[j] << setw((MAX-j)*3-1) << "|" << "   |" << endl;
            }
        }
    }

    if (gerar_arquivo)
        arquivo.close();

    cout << "+";
    for (int i = 0; i < MAX*2+MAX; i++) cout << "-";
    cout << "+---+---" << endl;

    cout << endl << "Quantidade de passos: " << passos << endl;

}



#endif // TESTE_MESA_HPP_INCLUDED
