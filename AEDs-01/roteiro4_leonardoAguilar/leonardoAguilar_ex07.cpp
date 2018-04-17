/*
Leonardo Aguilar
Análise de dados baseados em parâmetros de trânsito de 5 cidades
diferentes.
Entrada: Nome, número de veículos e número de acidentes de trânsito
de 5 cidades diferentes.
Saída:
    a - Maior e menor índice de acidentes e o nome da cidade
    b - Razão entre qntd de acidentes e numero de veiculos
    c - A média de veículos nas 5 cidades
    d -
*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <string.h>
#include <stdio.h>

using namespace std;

int main(){
    //Inclusão dos caracteres especiais
    setlocale(LC_ALL,"Portuguese");

    //Declaração das variáveis
    string cid, acidMaior, acidMenor;
    int veic = 0, mediaVeic = 0, somaVeic = 0, somaAcid = 0, mediaAcid, nCid = 0;
    float acid = 0, maior = -100000, menor = 1000000;

    //Entrada de dados
    for(int i = 0; i < 5; i++){
        cout << "Digite o nome da cidade " << i + 1 << ":" << endl;
        fflush(stdin);
        getline(cin, cid);

        cout << "Digite o número de veículos da cidade " << i + 1 << ":" << endl;
        cin >> veic;

        cout << "Digite o número de acidentes da cidade " << i + 1 << ":" << endl;
        cin >> acid;

        if( (acid/veic) > maior ){
            maior = (acid/veic);
            acidMaior = cid;
        }
        if((acid/veic) < menor ){
            menor = (acid/veic);
            acidMenor = cid;
        }
        somaVeic = somaVeic + veic;

        if(veic < 200){
            somaAcid = somaAcid + veic;
            nCid++;
        }
    }
    mediaVeic = somaVeic/5;
    mediaAcid = somaAcid/nCid;


    //Saída de dados (Maior e menor índice de acidentes)
    cout << "Maior índice de acidentes: " << acidMaior << endl;
    cout << "Índice de acidentes: " << maior*100 <<"%" << endl;

    cout << "Menor índice de acidentes: " << acidMenor << endl;
    cout << "Índice de acidentes: " << menor*100 <<"%" << endl;

    //Média de veículos nas 5 cidades
    cout << "Média de veículos: " << mediaVeic << endl;

    //Média de acidentes acidentes das cidades com menos de 200 veículos
    cout << "Média de acidentes das cidades com menos de 200 veículos: " << mediaAcid << endl;



return 0;
system("PAUSE");
}
