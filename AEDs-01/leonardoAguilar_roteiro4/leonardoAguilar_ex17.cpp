/*
Leonardo Aguilar
Calcula o fatorial de N n�meros
Entrada: n�mero de repeti��es e n�mero que deseja saber o fatorial
Sa�da: Fatorial dos n�meros digitados
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
    float fat = 1, num, n = 0;

    cout << "Digite o n�mero de repeti��es: " << endl;
    cin >> n;

    for(int i = 0; i < n; i++){
        cout << "Digite um n�mero: " << endl;
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
