/*
Leonardo Aguilar
Resolve uma equa��o de 2� grau
Entrada: a, b e c
Sa�da: delta, x', x'' ou delta e x
*/

#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;

int main()
{
    //Inclus�o de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declara��o das vari�veis
    float a, b, c, delta, x, x1, x2;

    //Entrada de dados pelo usu�rio
    cout << "Digite o valor do coeficiente a: " << endl;
    cin >> a;

    cout << "Digite o valor do coeficiente b: " << endl;
    cin >> b;

    cout << "Digite o valor do coeficiente c: " << endl;
    cin >> c;

    //Condi��o de ser equa��o de 1� grau ou 2� grau
    if(a == 0) {
        cout << "Equa��o de 1� grau!" << endl;
        x = -c/b;
        cout << b << "x" << "+" << c << " = " << "0" << endl;
        cout << "x = " << x << endl;
    }
    else{
        delta = pow(b,2) - 4 * a * c;

        //Condi��o de exist�ncia de raiz real de 2� grau
        if(delta  < 0){
            cout << "N�o existe ra�z real! " << endl;
        }

        else if (delta == 0) {
            x1 = ( -b + sqrt(delta) )/2*a;
            cout << "Equa��o: " << endl;
            cout << a << "x�" << "+" << b << "x" << "+" << c << endl;
            cout << "delta = " << delta << endl;
            cout << "Ra�zes iguais! " << endl;
            cout << "x' = " << x1 << endl;
        }

        else {

        x1 = ( -b + sqrt(delta) )/2*a;
        x2 = ( -b - sqrt(delta) )/2*a;

        cout << "Equa��o: " << endl;
        cout << a << "x�" << "+" << b << "x" << "+" << c << endl;
        cout << "delta = " << delta << endl;
        cout << "x' = " << x1 << endl;
        cout << "x'' = " << x2 << endl;
        }

    }


    return 0;
}
