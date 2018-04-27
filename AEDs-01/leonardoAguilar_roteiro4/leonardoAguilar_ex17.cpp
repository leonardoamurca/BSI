/*
Leonardo Aguilar
Calcula o fatorial de N números
Entrada: número de repetições e número que deseja saber o fatorial
Saída: Fatorial dos números digitados
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
    float fat = 1, num, n = 0;

    cout << "Digite o número de repetições: " << endl;
    cin >> n;

    for(int i = 0; i < n; i++){
        cout << "Digite um número: " << endl;
        cin >> num;
        fat = 1;
        for(int i = num; i > 0; i--){
            fat = fat*i;
        }
    cout << num << "! = " << fat << endl;
    }
return 0;
system("PAUSE");
}
