/*
Leonardo Aguilar
An�lise de dados baseados em par�metros de tr�nsito de 5 cidades
diferentes.
Entrada: Nome, n�mero de ve�culos e n�mero de acidentes de tr�nsito
de 5 cidades diferentes.
Sa�da:
    a - Maior e menor �ndice de acidentes e o nome da cidade
    b - Raz�o entre qntd de acidentes e numero de veiculos
    c - A m�dia de ve�culos nas 5 cidades
    d - A m�dia de acidentes de tr�nsito nas cidades com menos de 200 ve�culos
*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <string.h>
#include <stdio.h>

using namespace std;

int main(){
    //Inclus�o dos caracteres especiais
    setlocale(LC_ALL,"Portuguese");fflush(stdin);

    //Declara��o das vari�veis
    string cid, acidMaior, acidMenor;
    int veic = 0, mediaVeic = 0, somaVeic = 0, somaAcid = 0, mediaAcid, nCid = 0;
    float acid = 0, maior = -1000000, menor = 1000000;


    for(int i = 0; i < 5; i++){
        //Entrada de dados
        cout << "CIDADE 0" << i + 1 << endl;
        cout << "Digite o NOME da cidade "<< endl;
        fflush(stdin);
        getline(cin, cid);


        cout << "Digite o N�MERO DE VE�CULOS da cidade: " << endl;
        cin >> veic;

        cout << "Digite o N�MERO DE ACIDENTES da cidade: " << endl;
        cin >> acid;



        //Verifica qual cidade possui maior e menor �ndices de acidentes
        if( (acid/veic) > maior ){
            maior = (acid/veic);
            acidMaior = cid;
        }
        if((acid/veic) < menor ){
            menor = (acid/veic);
            acidMenor = cid;
        }

        //Soma total dos ve�culos de todas as cidades
        somaVeic = somaVeic + veic;

        if(veic < 200){
            somaAcid = somaAcid + veic;
            nCid++;
        }
    }
    //Calcula a m�dia total de ve�culos das 5 cidades e a m�dia de acidentes das cidades com menos de 200 ve�culos
    mediaVeic = somaVeic/5;
    mediaAcid = somaAcid/nCid;


    //Sa�da de dados (Maior e menor �ndice de acidentes)
    cout << "Maior �ndice de acidentes: " << acidMaior << endl;
    cout << "�ndice de acidentes: " << maior*100 <<"%" << endl;

    cout << "Menor �ndice de acidentes: " << acidMenor << endl;
    cout << "�ndice de acidentes: " << menor*100 <<"%" << endl;

    //M�dia de ve�culos nas 5 cidades
    cout << "M�dia de ve�culos: " << mediaVeic << endl;

    //M�dia de acidentes acidentes das cidades com menos de 200 ve�culos
    cout << "M�dia de acidentes das cidades com menos de 200 ve�culos: " << mediaAcid << endl;

return 0;
system("PAUSE");
}
