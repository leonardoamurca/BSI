
/*
Leonardo Aguilar
Implementar uma função que retorne dia e mês que cai o feriado
da páscoa.
Entrada: Ano
Saída: Dia e Mês
*/

#include <iostream>
#include <windows.h>
#include <locale.h>
#include <math.h>

using namespace std;

void sfSanta(int ano){
    int A, B, C, D, E, F, G, H, I, K, L, M, mes, dia;
    A = ano % 19;
    B = ano / 100;
    C = ano % 100;
    D = B / 4;
    E = B % 4;
    F = (B + 8) / 25;
    G = (B - F + 1) / 3;
    H = (19 * A + B - D - G + 15) % 30;
    I = C / 4;
    K = C % 4;
    L = (32 + 2 * E + 2 * I - H - K) % 7;
    M = (A + 11 * H + 22 * L) / 451;
    mes = (H + L - 7 * M + 114) / 31;
    dia = (( (H + L - 7 * M + 114) % 31) + 1) - 2;
    
    cout << "Sexta-feira santa: " << abs(dia) << "/" << mes << "/" << ano << endl;

}

void tfCarnaval(int ano){
    int A, B, C, D, E, F, G, H, I, K, L, M, mes, dia;
    A = ano % 19;
    B = ano / 100;
    C = ano % 100;
    D = B / 4;
    E = B % 4;
    F = (B + 8) / 25;
    G = (B - F + 1) / 3;
    H = (19 * A + B - D - G + 15) % 30;
    I = C / 4;
    K = C % 4;
    L = (32 + 2 * E + 2 * I - H - K) % 7;
    M = (A + 11 * H + 22 * L) / 451;
    mes = ((H + L - 7 * M + 114) / 31) - 1;
    dia = (( (H + L - 7 * M + 114) % 31) + 1) - 7;
    
    cout << "Terça-feira de carnaval: " << abs(dia) << "/" << mes << "/" << ano << endl;
}

void cChristi(int ano){
    int A, B, C, D, E, F, G, H, I, K, L, M, mes, dia;
    A = ano % 19;
    B = ano / 100;
    C = ano % 100;
    D = B / 4;
    E = B % 4;
    F = (B + 8) / 25;
    G = (B - F + 1) / 3;
    H = (19 * A + B - D - G + 15) % 30;
    I = C / 4;
    K = C % 4;
    L = (32 + 2 * E + 2 * I - H - K) % 7;
    M = (A + 11 * H + 22 * L) / 451;
    mes = ((H + L - 7 * M + 114) / 31) + 2;
    dia = (( (H + L - 7 * M + 114) % 31) + 1) + 1;
    
    cout << "Corpus Christi: " << abs(dia) << "/" << mes << "/" << ano << endl;
}



int main(){
    int ano;
    cout << "Digite o ano: " << endl;
    cin >> ano;
    sfSanta(ano);
    tfCarnaval(ano);
    cChristi(ano);
    
    return 0;
    system("PAUSE");
}



