/*
Leonardo Aguilar
Tipo (c�digo) do consumidor:
    1 - residencial, pre�o em R$ por kWh = 0,3;
    2 - comercial, pre�o em R$ por kWh = 0,5;
    3 - industrial, pre�o em R$ por kWh = 0,7;

Dado os dados acima, esse algoritmo calcula:
    - O custo total para cada consumidor;
    - O total de consumo para os 3 tipos de consumidor;
    - A m�dia de consumo dos tipos 1 e 2.
Entrada: N�mero do consumidor, quantidade de Kwh consumidos durante o m�s
Sa�da:  - O custo total para cada consumidor;
        - O total de consumo para os 3 tipos de consumidor;
        - A m�dia de consumo dos tipos 1 e 2.

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
	int nConsumidor, qntKwh = 0, totalConsumo = 0, custo1 = 0, custo2 = 0, custo3 = 0, c1 = 0, c2 = 0, c3 = 0, i = 0;

	//Entrada de dados pelo usu�rio
    while(nConsumidor != 0){
        cout << "Digite o n�mero do consumidor: " << endl;
        cin >> nConsumidor;

            cout << "Digite a quantidade de Kwh consumidos: " << endl;
            cin >> qntKwh;

            if(nConsumidor != 0){
                //Compara qual tipo de consumidor foi digitado pelo usu�rio
                switch (nConsumidor){
                    case 1:
                        custo1 = qntKwh*0.3;
                        c1++;
                        //Sa�da de dados
                        cout << "Custo total para o consumidor " << i+1 << ": R$" << custo1 << endl;
                        break;
                    case 2:
                        custo2 = qntKwh*0.5;
                        c2++;
                        //Sa�da de dados
                        cout << "Custo total para o consumidor " << i+1 << ": R$" << custo2 << endl;
                        break;

                    case 3:
                        custo3 = qntKwh*0.7;
                        c3++;
                        //Sa�da de dados
                        cout << "Custo total para o consumidor " << i+1 << ": R$" << custo3 << endl;
                        break;

                    default:
                        cout << "Op��o inv�lida! " << endl;
                        break;
                }
            }
        i++;
    }
       //Verifica caso o consumo de nenhum consumidor for verificado ou todos possu�rem consumo ZERO
       if(totalConsumo == 0 and custo1 == 0 and custo2 == 0 and custo3 == 0){
            //Sa�da de dados
            cout << "O total de consumo e o custo de cada consumidor (se foi verificado algum) � igual � ZERO! " << endl;
       }
       else{
            //Sa�da de dados
            totalConsumo = custo1 + custo2 + custo3;
            cout << "Total consumido pelos 3 tipos =  " << "R$ " << totalConsumo << endl;
            cout << "M�dia de consumo dos tipos 1 e 2 = " << "R$ " << (custo1 + custo2)/(c1+c2) << endl;
       }

return 0;
system("PAUSE");
}
