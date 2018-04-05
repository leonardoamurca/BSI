/*
Leonardo Aguilar
Calcula o n�mero de diagonais de um pol�gono convexo regular.
Entrada: N�mero de lados do pol�gono
Sa�da: N�mero de diagonais
*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    //Inclus�o de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declara��o das vari�veis
    int nLados;
    float ndiagonais;

    //Entrada de dados pelo usu�rio
    cout << "Digite o n�mero de lados do pol�gono: " << endl;
    cin >> nLados;

    //Condi��o de exist�ncia de um pol�gono
    if(nLados < 3){
        cout << "N�o existe pol�gono com menos de 3 lados !\nDigite novamente o n�mero de lados: " << endl;
        cin >> nLados;

        //C�lculo do n�mero de diagonais
        ndiagonais = nLados * (nLados - 3) / 2;

       //Sa�da de dados (N�mero de diagonais)
        cout << "Um pol�gono convexo regular de " << nLados << " possui: " << ndiagonais << " diagonais" << endl;
    }
    else {
        //C�lculo do n�mero de diagonais
        ndiagonais = nLados * (nLados - 3) / 2;

        //Sa�da de dados (N�mero de diagonais)
        cout << "Um pol�gono convexo regular de " << nLados << " lados possui: " << ndiagonais << " diagonais" << endl;
    }


    return 0;
}
