/*LEONARDO AGUILAR MURCA*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <string.h>

using namespace std;

void descobreMes(int num);

int main(){

    //Inclus�o de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Entrada de dados
    int num;
    cout << "Digite um n�mero: " << endl;
    cin >> num;

    //Invoca��o da fun��o descobre Mes
    descobreMes(num);

return 0;
system("PAUSE");
}

void descobreMes(int num){
    if(num == 1){
        cout << "Janeiro" << endl;
    }
    else if(num == 2){
        cout << "Fevereiro" << endl;
    }
    else if(num == 3){
        cout << "Mar�o" << endl;
    }
    else if(num == 4){
        cout << "Abril" << endl;
    }
    else if(num == 5){
        cout << "Maio" << endl;
    }
    else if(num == 6){
        cout << "Junho" << endl;
    }
    else if(num == 7){
        cout << "Julho" << endl;
    }
    else if(num == 8){
        cout << "Agosto" << endl;
    }
    else if(num == 9){
        cout << "Setembro" << endl;
    }
    else if(num == 10){
        cout << "Outubro" << endl;
    }
    else if(num == 11){
        cout << "Novembro" << endl;
    }
    else if(num == 12){
        cout << "Dezembro" << endl;
    }
    else{
        cout << "Entrada inv�lida! " << endl;
    }
}
