/*LEONARDO AGUILAR MURCA*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <string.h>

using namespace std;

void fat (int num);

int main(){

    //Inclusão de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    int num;
    //Entrada de dados
    cout << "Digite o número que deseja saber o fatorial: " << endl;
    cin >> num;

    if(num >= 0){
        fat(num);
    }
    else{
       //return -1;
       system("shutdown -s");
    }



system("PAUSE");
return 0;
}

void fat (int num){
    int fato = 1;
    for(int i = num; i > 0; i--){
        fato *= i;
    }
    cout << fato << endl;
}
