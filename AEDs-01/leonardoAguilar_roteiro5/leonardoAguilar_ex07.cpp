/*
Leonardo Aguilar
Calcula a frequência relativa e absoluta de 80 notas (de 0 à 10)
Entrada: 80 notas
Saída: Frequência absoluta e relativa das notas
*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <string.h>

using namespace std;

const int TAM = 80;

int main(){

    //Inclusão de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declaração das variáveis
    int nota[TAM];

    float contador[11], total = 0;

    for(int i = 0; i < 11; i++){
        contador[i] = 0;
    }


    for(int i = 0; i < TAM; i++){
//        cout << "Digite a nota " << i+1 << ":" << endl;
//        cin >> nota[i];
        nota[i] = rand()%11;
        while(nota[i] < 0 or nota[i] > 10){
            cout << "Nota inválida! Digite novamente a nota " << i+1 << ":" << endl;
            cin >> nota[i];
        }
        contador[nota[i]] += 1;
    }

     cout << "Frequencia absoluta e relativa da nota:" << endl;
     for(int j = 0; j < 11; j++){
       cout << j << " = " << contador[j] << "(" << (contador[j]/TAM)*100 << "%)" << endl;
     }

return 0;
system("PAUSE");
}
