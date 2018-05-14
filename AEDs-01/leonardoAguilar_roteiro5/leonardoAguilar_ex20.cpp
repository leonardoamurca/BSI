/*
Leonardo Aguilar
Sabendo que por normas, o desvio padrão do conteúdo das latas em um processo de produção é de +/- 5 ml,
esse algoritmo calcula o desvio padrão do conteúdo de 20 latas de uma fábrica e imprime se
o processo precisa ser revisado ou não.
Entrada: Quantidade de ml de 20 latas
Saída: Desvio padrão, média do conteúdo das latas e se deve ser revisao ou não
*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <string.h>

using namespace std;

const int TAM = 20;

int main(){

    //Inclusão de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declaração das variáveis
    float s = 0, x[TAM], soma = 0, media = 0;

    //Entrada de dados e cálculo da média de ml das latas
    for(int i = 0; i < TAM; i++){
        cout << "Digite a quantidade de ml da lata " << i+1 <<": " <<endl;
        cin >> x[i];
        soma += x[i];
        media = soma/TAM;
    }

    //Calcula o desvio padrão
    for(int i = 0; i < TAM; i++){
        s  += pow(x[i] - media, 2)/(TAM);
    }

    //Saída de dados
    cout << "Desvio padrão = " << sqrt(s) << endl;
    cout << "Média = " << media << endl;

    //Saída de dados condicionada pelo desvio padrão
    if((int)sqrt(s) < 5 or (int)sqrt(s) > 5){
        cout << "O processo deve ser revisado!" << endl;
    }
    else{
        cout << "O processo não precisa ser revisado!" << endl;
    }
return 0;
system("PAUSE");
}
