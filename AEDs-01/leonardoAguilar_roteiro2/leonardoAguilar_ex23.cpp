/*
Leonardo Aguilar
Resolve uma equação de 2º grau
Entrada: a, b e c
Saída: delta, x', x'' ou delta e x
*/

#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;

int main()
{
    //Inclusão de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Declaração das variáveis
    float a, b, c, delta, x, x1, x2;

    //Entrada de dados pelo usuário
    cout << "Digite o valor do coeficiente a: " << endl;
    cin >> a;

    cout << "Digite o valor do coeficiente b: " << endl;
    cin >> b;

    cout << "Digite o valor do coeficiente c: " << endl;
    cin >> c;

    //Condição de ser equação de 1º grau ou 2º grau
    if(a == 0) {
        cout << "Equação de 1º grau!" << endl;
        x = -c/b;
        cout << b << "x" << "+" << c << " = " << "0" << endl;
        cout << "x = " << x << endl;
    }
    else{
        delta = pow(b,2) - 4 * a * c;

        //Condição de existência de raiz real de 2º grau
        if(delta  < 0){
            cout << "Não existe raíz real! " << endl;
        }

        else if (delta == 0) {
            x1 = ( -b + sqrt(delta) )/2*a;
            cout << "Equação: " << endl;
            cout << a << "x²" << "+" << b << "x" << "+" << c << endl;
            cout << "delta = " << delta << endl;
            cout << "Raízes iguais! " << endl;
            cout << "x' = " << x1 << endl;
        }

        else {

        x1 = ( -b + sqrt(delta) )/2*a;
        x2 = ( -b - sqrt(delta) )/2*a;

        cout << "Equação: " << endl;
        cout << a << "x²" << "+" << b << "x" << "+" << c << endl;
        cout << "delta = " << delta << endl;
        cout << "x' = " << x1 << endl;
        cout << "x'' = " << x2 << endl;
        }

    }


    return 0;
}
