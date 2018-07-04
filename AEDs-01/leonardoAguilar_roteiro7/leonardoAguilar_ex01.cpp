/*LEONARDO AGUILAR MURCA*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <string.h>

using namespace std;

void descobreMes(int num);

int main(){

    //Inclusão de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Entrada de dados
    int num;
    cout << "Digite um número: " << endl;
    cin >> num;

    //Invocação da função descobre Mes
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
        cout << "Março" << endl;
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
        cout << "Entrada inválida! " << endl;
    }
}
