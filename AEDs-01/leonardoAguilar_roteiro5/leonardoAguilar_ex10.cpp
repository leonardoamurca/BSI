/*
Leonardo Aguilar
Preenche um vetor A de 10 posições e calcula S!
S = (a[0] - a[9]) ² + (a[1] - a[8])² + (a[2] - a[7])² + (a[3] - a[6])² + (a[4] - a[5])²
Entrada: Vetor A
Saída: A, S
*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <string.h>

using namespace std;

const int TAM = 10;

int main(){

    //Inclusão de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declaração das variáveis
    float a[TAM], S = 0;

    //Preenche o vetor A
    for(int i = 0; i < TAM; i++){
        a[i] = rand()%20;
        //cin >> a[i];
    }

    //Realiza o somatório de S
    for(int i = 0, j = 9; i < 5, j > 4; i++, j--){
        S +=  pow((a[i] - a[j]), 2);
    }

    //Imprime o vetor A
    cout << "A = [ ";
    for(int i = 0; i < TAM; i++){
        cout << a[i] << " ";
    }
    cout << "]" << endl;

    //Imprime S
    cout << "S = " << S << endl;

return 0;
system("PAUSE");
}
