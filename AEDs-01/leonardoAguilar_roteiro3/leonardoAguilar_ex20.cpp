/*
Leonardo Aguilar
Colocar 3 números em ordem crescente
Entrada: 3 números
Saída: Números em ordem crescente
*/


#include <iostream>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
#include <windows.h>


using namespace std;


//MODO ZEZINHO ON!!

int main(){


	//Inclusão de caracteres especiais
	setlocale(LC_ALL, "Portuguese");

	//Declaração das variáveis
   int n1, n2, n3;

	//Entrada de dados pelo usuário
    cout << "Digite 3 números: " << endl;
    cin >> n1 >> n2 >> n3;

    //Comparações
    if( (n1 >= n2) and (n1 >= n3) ){
        if(n2 >= n3){
            cout << "Ordem Decrescente: " << n1 << "," << n2 << "," << n3 << endl;
            cout << "Ordem Crescente: " << n3 << "," << n2 << "," << n1 << endl;
        }
        else{
            cout << "Ordem Decrescente: " << n1 << "," << n3 << "," << n2 << endl;
            cout << "Ordem Crescente: " << n2 << "," << n3 << "," << n1 << endl;
        }
    }

    else if( (n2 >= n1) and (n2 >= n3) ){
        if(n1 >= n3){
            cout << "Ordem Decrescente: " << n2 << "," << n1 << "," << n3 << endl;
            cout << "Ordem Crescente: " << n3 << "," << n1 << "," << n2 << endl;
        }
        else{
            cout << "Ordem Decrescente: " << n2 << "," << n3 << "," << n1 << endl;
            cout << "Ordem Crescente: " << n1 << "," << n3 << "," << n2 << endl;
        }
    }

    else if( (n3 >= n1) and (n3 >= n2) ){
        if(n1 >= n2){
            cout << "Ordem Decrescente: " << n3 << "," << n1 << "," << n2 << endl;
            cout << "Ordem Crescente: " << n2 << "," << n1 << "," << n3 << endl;
        }
        else{
            cout << "Ordem Decrescente: " << n3 << "," << n2 << "," << n1 << endl;
            cout << "Ordem Crescente: " << n1 << "," << n2 << "," << n3 << endl;
        }
    }
return 0;
system("PAUSE");
}
