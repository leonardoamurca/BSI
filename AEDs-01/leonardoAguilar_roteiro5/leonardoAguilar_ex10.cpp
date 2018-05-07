/*
Leonardo Aguilar
Preenche um vetor A de 10 posi��es e calcula S!
S = (a[0] - a[9]) � + (a[1] - a[8])� + (a[2] - a[7])� + (a[3] - a[6])� + (a[4] - a[5])�
Entrada: Vetor A
Sa�da: A, S
*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <string.h>

using namespace std;

const int TAM = 10;

int main(){

    //Inclus�o de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declara��o das vari�veis
    float a[TAM], S = 0;

    //Preenche o vetor A
    for(int i = 0; i < TAM; i++){
        a[i] = rand()%20;
        //cin >> a[i];
    }

    //Realiza o somat�rio de S
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
