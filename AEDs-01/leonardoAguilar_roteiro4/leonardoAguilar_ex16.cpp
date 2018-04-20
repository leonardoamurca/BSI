/*
Leonardo Aguilar
Calcula média aritmética enquanto o usuário não digitar -1
Entrada: n
Saída: media
*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>

using namespace std;

int main(){
    //Inclusão dos caracteres especiais
    setlocale(LC_ALL,"Portuguese");

    //Declaração das variáveis
    int n, i= 0;
    float soma = 0, media = 0;

    while(n != -1){
        cout << "Digite um número: " << endl;
        cin >> n;
        soma = soma + n;
        i++;
    }
    media = soma/i;
    cout << "Media = " << media << endl;

return 0;
system("PAUSE");
}
