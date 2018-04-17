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
    d - A média de acidentes de trânsito nas cidades com menos de 200 veículos
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
    setlocale(LC_ALL,"Portuguese");fflush(stdin);

    //Declaração das variáveis
    string cid, acidMaior, acidMenor;
    int veic = 0, mediaVeic = 0, somaVeic = 0, somaAcid = 0, mediaAcid, nCid = 0;
    float acid = 0, maior = -1000000, menor = 1000000;


    for(int i = 0; i < 5; i++){
        //Entrada de dados
        cout << "CIDADE 0" << i + 1 << endl;
        cout << "Digite o NOME da cidade "<< endl;
        fflush(stdin);
        getline(cin, cid);


        cout << "Digite o NÚMERO DE VEÍCULOS da cidade: " << endl;
        cin >> veic;

        cout << "Digite o NÚMERO DE ACIDENTES da cidade: " << endl;
        cin >> acid;



        //Verifica qual cidade possui maior e menor índices de acidentes
        if( (acid/veic) > maior ){
            maior = (acid/veic);
            acidMaior = cid;
        }
        if((acid/veic) < menor ){
            menor = (acid/veic);
            acidMenor = cid;
        }

        //Soma total dos veículos de todas as cidades
        somaVeic = somaVeic + veic;

        if(veic < 200){
            somaAcid = somaAcid + veic;
            nCid++;
        }
    }
    //Calcula a média total de veículos das 5 cidades e a média de acidentes das cidades com menos de 200 veículos
    mediaVeic = somaVeic/5;
    mediaAcid = somaAcid/nCid;


    //Saída de dados (Maior e menor índice de acidentes)
    cout << "Maior índice de acidentes: " << acidMaior << endl;
    cout << "índice de acidentes: " << maior*100 <<"%" << endl;

    cout << "Menor índice de acidentes: " << acidMenor << endl;
    cout << "índice de acidentes: " << menor*100 <<"%" << endl;

    //Média de veículos nas 5 cidades
    cout << "Média de veículos: " << mediaVeic << endl;

    //Média de acidentes acidentes das cidades com menos de 200 veículos
    cout << "Média de acidentes das cidades com menos de 200 veículos: " << mediaAcid << endl;

return 0;
system("PAUSE");
}
