/*
Leonardo Aguilar
Calcula m�dia aritm�tica enquanto o usu�rio n�o digitar -1
Entrada: n
Sa�da: media
*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>

using namespace std;

int main(){
    //Inclus�o dos caracteres especiais
    setlocale(LC_ALL,"Portuguese");

    //Declara��o das vari�veis
    int n, i= 0;
    float soma = 0, media = 0;

    while(n != -1){
        cout << "Digite um n�mero: " << endl;
        cin >> n;
        soma = soma + n;
        i++;
    }
    media = soma/i;
    cout << "Media = " << media << endl;

return 0;
system("PAUSE");
}
