/*
Leonardo Aguilar
Compara duas datas digitadas pelo usuário
Entrada: Duas datas
Saída: Data 1 > Data 2, Data 1 < Data2, Datas iguais!
*/


#include <iostream>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
#include <windows.h>


using namespace std;

int main(){


	//Inclusão de caracteres especiais
	setlocale(LC_ALL, "Portuguese");

	//Declaração das variáveis
    int dia, mes, ano, dia2, mes2, ano2;

	//Entrada de dados pelo usuário
    cout << "(1º data) Digite o dia, mês e ano, respectivamente: " << endl;
    cin >> dia >> mes >> ano;

    cout << "(2º data) Digite o dia, mês e ano, respectivamente: " << endl;
    cin >> dia2 >> mes2 >> ano2;

    //Comparações das datas
    if(ano > ano2){
        cout << "Maior data: " << dia << "/" << mes << "/" << ano << endl;
        cout << "Menor data: " << dia2 << "/" << mes2 << "/" << ano2 << endl;
    }
    else if(ano < ano2){
        cout << "Maior data: " << dia2 << "/" << mes2 << "/" << ano2 << endl;
        cout << "Menor data: " << dia << "/" << mes << "/" << ano << endl;
    }
    else {
        if(mes > mes2){
            cout << "Maior data: " << dia << "/" << mes << "/" << ano << endl;
            cout << "Menor data: " << dia2 << "/" << mes2 << "/" << ano2 << endl;
        }
        else if(mes < mes2){
            cout << "Maior data: " << dia2 << "/" << mes2 << "/" << ano2 << endl;
            cout << "Menor data: " << dia << "/" << mes << "/" << ano << endl;
        }
        else {
            if(dia > dia2){
                cout << "Maior data: " << dia << "/" << mes << "/" << ano << endl;
                cout << "Menor data: " << dia2 << "/" << mes2 << "/" << ano2 << endl;
            }
            else if(dia < dia2){
                cout << "Maior data: " << dia2 << "/" << mes2 << "/" << ano2 << endl;
                cout << "Menor data: " << dia << "/" << mes << "/" << ano << endl;
            }
            else {
                cout << "Datas iguais!" << endl;
            }
        }
    }

return 0;
system("PAUSE");
}
