/*
Leonardo Aguilar
Descobre se um número digitado pelo usuário é palíndromo ou não
Entrada: Um número
Saída: Palíndromo! Não é palíndromo
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
    long long aux, num, inv = 0;

    //Entrada de dados
    cout << "Digite um número: " << endl;
    cin >> num;
    //Variável auxiliar recebe o valor de num para ser realizado a inversão de num
    aux = num;

    //Inverte "aux" e atribui à variável "inv"
    while (aux != 0) {
        inv = inv * 10 + aux % 10;
        aux = aux/ 10;
    }

    //Compara se inv (num inverso) é igual ao num (número digitado pelo usuário)
    if (inv == num){
        cout<<"É palíndromo!"<<endl;
    }else{
        cout<<"Não é palíndromo!"<<endl;
    }

return 0;
system("PAUSE");
}
