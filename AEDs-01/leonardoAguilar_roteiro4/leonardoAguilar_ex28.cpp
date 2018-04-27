/*
Leonardo Aguilar
Dado um número M digitado pelo usuário:
    - Se M for PAR verifica quantos divisores possui e escreve esta informação.
    - Se M for ímpar e M < 10 calcula e escreve o fatorial de M.
    - Se M for ímpar e maior ou igual a 10 calcula e escreve a soma dos inteiros de 1 até M.
O algoritmo deve finalizar quando for digitado o valor zero para M.
Entrada: M
Saída: - Número de divisores (caso M PAR)
       - Fatorial de M (Caso M ÍMPAR e M < 10)
       - Soma dos inteiros de 1 à M (Caso M ÍMPAR e M >= 10)

 */

#include <iostream>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main(){
	//Inclusão de caracteres especiais
	setlocale(LC_ALL, "Portuguese");

	//Declaração das variáveis
    int m, div = 0, fat = 1, soma = 0;

    do{
        //Entrada de dados pelo usuário
        cout << "Digite um valor para M: " << endl;
        cin >> m;

        //Valida a entrada de M (Positivo e inteiro)
        if(m < 0){
            cout << "Número inválido! Digite apenas números POSITIVOS! " << endl;
        }
        else{
            //Verifica se M é PAR ou ÍMPAR
            if(m%2 == 0){
                div = 0;
                for(int i = 1; i <= m; i++){
                    if(m%i == 0){
                       div++;
                    }
                    else{
                        div = div + 0;
                    }
                }
            //Saída de dados
            cout << "Número de divisores de M = " << div << endl;
            }
            else{
                //Verifica se M < 10
                if(m < 10){
                    fat = 1;
                    //Calcula o fatorial de M
                    for(int j = m; j > 0; j--){
                        fat *=j;
                    }
                //Saída de dados
                cout << m <<"! = " << fat << endl;
                }
                else if(m >= 10){
                    soma = 0;
                    //Calcula a soma de 1 à M
                    for(int i = 1; i <= m; i++){
                        soma += i;
                    }
                //Saída de dados
                cout << "Soma dos inteiros de 1 à " << m << " = " << soma << endl;
                }

            }
        }
    }while(m != 0);


return 0;
}
