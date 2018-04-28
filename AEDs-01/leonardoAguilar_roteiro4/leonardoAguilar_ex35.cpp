/*
Leonardo Aguilar
Calcula os 5 primeiros números perfeitos
Entrada: Não possui entradas
Saída: 5 primeiros números perfeitos
    1. 6
    2. 28
    3. 496
    4. 8128
    5. 33550336
*/

#include <iostream>
#include <math.h>
#include <locale.h>

using namespace std;


int main(){
    //Inclusão de caracteres especiais
    setlocale(LC_ALL, "Portuguese");
    //Declaração das variáveis
    long x, divisor, i, pft;

    for (x = 1, pft = 1;  pft <= 4;  x++){
            for (i = 1, divisor = 0; i <= x; i++){
                if (x%i == 0){
                    divisor += i;
                }
            }

        if (divisor == 2 * x){
            cout << " Número perfeito =  " << x << endl;
            pft++;
        }
    }
return 0;
}

// End main
