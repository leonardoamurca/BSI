/*
Leonardo Aguilar

Entrada:
Sa�da:

 */

#include <iostream>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main(){
	//Inclus�o de caracteres especiais
	setlocale(LC_ALL, "Portuguese");

	//Declara��o das vari�veis
	int c1 = 0, c2 = 0, c3 = 0, c4 = 0, nulo = 0, branco = 0, voto = 0;


    do{
        //Entrada de dados pelo usu�rio
        cout << "Digite seu voto: " << endl;
        cin >> voto;
        //Contabiliza o voto para cada candidato, al�m dos votos em branco e nulos
        if(voto != 0){
            switch(voto){
                case 1:
                    c1++;
                    break;
                case 2:
                    c2++;
                    break;
                case 3:
                    c3++;
                    break;
                case 4:
                    c4++;
                    break;
                case 5:
                    branco++;
                    break;
                default:
                    nulo++;
                    break;
            }
        }
    }while(voto != 0);

    //Sa�da de dados
    cout << "Quantidade de votos candidato 1: " << c1 << endl;
    cout << "Quantidade de votos candidato 2: " << c2 << endl;
    cout << "Quantidade de votos candidato 3: " << c3 << endl;
    cout << "Quantidade de votos candidato 4: " << c4 << endl;
    cout << "Quantidade de votos em branco: " << branco << endl;
    cout << "Quantidade de votos nulos: " << nulo << endl;

return 0;
}
