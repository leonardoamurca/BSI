/*
Leonardo Aguilar
Calcula o número de diagonais de um polígono convexo regular.
Entrada: Número de lados do polígono
Saída: Número de diagonais
*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    //Inclusão de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declaração das variáveis
    int nLados;
    float ndiagonais;

    //Entrada de dados pelo usuário
    cout << "Digite o número de lados do polígono: " << endl;
    cin >> nLados;

    //Condição de existência de um polígono
    if(nLados < 3){
        cout << "Não existe polígono com menos de 3 lados !\nDigite novamente o número de lados: " << endl;
        cin >> nLados;

        //Cálculo do número de diagonais
        ndiagonais = nLados * (nLados - 3) / 2;

       //Saída de dados (Número de diagonais)
        cout << "Um polígono convexo regular de " << nLados << " possui: " << ndiagonais << " diagonais" << endl;
    }
    else {
        //Cálculo do número de diagonais
        ndiagonais = nLados * (nLados - 3) / 2;

        //Saída de dados (Número de diagonais)
        cout << "Um polígono convexo regular de " << nLados << " lados possui: " << ndiagonais << " diagonais" << endl;
    }


    return 0;
}
