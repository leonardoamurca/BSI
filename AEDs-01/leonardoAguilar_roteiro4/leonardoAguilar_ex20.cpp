/*
Leonardo Aguilar
Descobre se um n�mero digitado pelo usu�rio � pal�ndromo ou n�o
Entrada: Um n�mero
Sa�da: Pal�ndromo! N�o � pal�ndromo
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
    long long aux, num, inv = 0;

    //Entrada de dados
    cout << "Digite um n�mero: " << endl;
    cin >> num;
    //Vari�vel auxiliar recebe o valor de num para ser realizado a invers�o de num
    aux = num;

    //Inverte "aux" e atribui � vari�vel "inv"
    while (aux != 0) {
        inv = inv * 10 + aux % 10;
        aux = aux/ 10;
    }

    //Compara se inv (num inverso) � igual ao num (n�mero digitado pelo usu�rio)
    if (inv == num){
        cout<<"� pal�ndromo!"<<endl;
    }else{
        cout<<"N�o � pal�ndromo!"<<endl;
    }

return 0;
system("PAUSE");
}
