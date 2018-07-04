/*LEONARDO AGUILAR MURCA*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <string.h>

using namespace std;

void descobrePascoa(int Ano);

int main(){

    //Inclusão de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //Entrada de dados
    int Ano;
    cout << "Digite um ano: " << endl;
    cin >> Ano;
    //Invocação da função
    descobrePascoa(Ano);

return 0;
system("PAUSE");
}

void descobrePascoa(int Ano){
    int A, B, C, D, E, F, G, H, I, K, L, M, MES, Dia;
    A = Ano%19;
    B = Ano/100;
    C = Ano%100;
    D = B/4;
    E = B%4;
    F = (B+8)/25;
    G = (B-F+1)/3;
    H = (19*A+B-D-G+15)%30;
    I = C/4;
    K = C%4;
    L = (32+2*E+2*I-H-K)%7;
    M = (A+11*H+22*L)/451;
    MES = (H+L-7*M+114)/31;
    Dia = ((H+L-7*M+114)%31)+1;
    if(MES == 3){
        cout << "Ano: " << Ano << endl;
        cout << "Mês: Março" << endl;
        cout << "Dia: " << Dia << endl;
    }
    else if(MES == 4){
        cout << "Ano: " << Ano << endl;
        cout << "Mês: Abril" << endl;
        cout << "Dia: " << Dia << endl;
    }

}

