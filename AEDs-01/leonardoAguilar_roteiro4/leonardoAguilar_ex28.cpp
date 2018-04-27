/*
Leonardo Aguilar
Dado um n�mero M digitado pelo usu�rio:
    - Se M for PAR verifica quantos divisores possui e escreve esta informa��o.
    - Se M for �mpar e M < 10 calcula e escreve o fatorial de M.
    - Se M for �mpar e maior ou igual a 10 calcula e escreve a soma dos inteiros de 1 at� M.
O algoritmo deve finalizar quando for digitado o valor zero para M.
Entrada: M
Sa�da: - N�mero de divisores (caso M PAR)
       - Fatorial de M (Caso M �MPAR e M < 10)
       - Soma dos inteiros de 1 � M (Caso M �MPAR e M >= 10)

 */

#include <iostream>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main(){
	//Inclus�o de caracteres especiais
	setlocale(LC_ALL, "Portuguese");

	//Declara��o das vari�veis
    int m, div = 0, fat = 1, soma = 0;

    do{
        //Entrada de dados pelo usu�rio
        cout << "Digite um valor para M: " << endl;
        cin >> m;

        //Valida a entrada de M (Positivo e inteiro)
        if(m < 0){
            cout << "N�mero inv�lido! Digite apenas n�meros POSITIVOS! " << endl;
        }
        else{
            //Verifica se M � PAR ou �MPAR
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
            //Sa�da de dados
            cout << "N�mero de divisores de M = " << div << endl;
            }
            else{
                //Verifica se M < 10
                if(m < 10){
                    fat = 1;
                    //Calcula o fatorial de M
                    for(int j = m; j > 0; j--){
                        fat *=j;
                    }
                //Sa�da de dados
                cout << m <<"! = " << fat << endl;
                }
                else if(m >= 10){
                    soma = 0;
                    //Calcula a soma de 1 � M
                    for(int i = 1; i <= m; i++){
                        soma += i;
                    }
                //Sa�da de dados
                cout << "Soma dos inteiros de 1 � " << m << " = " << soma << endl;
                }

            }
        }
    }while(m != 0);


return 0;
}
