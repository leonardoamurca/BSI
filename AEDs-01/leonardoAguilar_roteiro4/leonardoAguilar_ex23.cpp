/*
Leonardo Aguilar
Tipo (código) do consumidor:
    1 - residencial, preço em R$ por kWh = 0,3;
    2 - comercial, preço em R$ por kWh = 0,5;
    3 - industrial, preço em R$ por kWh = 0,7;

Dado os dados acima, esse algoritmo calcula:
    - O custo total para cada consumidor;
    - O total de consumo para os 3 tipos de consumidor;
    - A média de consumo dos tipos 1 e 2.
Entrada: Número do consumidor, quantidade de Kwh consumidos durante o mês
Saída:  - O custo total para cada consumidor;
        - O total de consumo para os 3 tipos de consumidor;
        - A média de consumo dos tipos 1 e 2.

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
	int nConsumidor, qntKwh = 0, totalConsumo = 0, custo1 = 0, custo2 = 0, custo3 = 0, c1 = 0, c2 = 0, c3 = 0, i = 0;

	//Entrada de dados pelo usuário
    while(nConsumidor != 0){
        cout << "Digite o número do consumidor: " << endl;
        cin >> nConsumidor;

            cout << "Digite a quantidade de Kwh consumidos: " << endl;
            cin >> qntKwh;

            if(nConsumidor != 0){
                //Compara qual tipo de consumidor foi digitado pelo usuário
                switch (nConsumidor){
                    case 1:
                        custo1 = qntKwh*0.3;
                        c1++;
                        //Saída de dados
                        cout << "Custo total para o consumidor " << i+1 << ": R$" << custo1 << endl;
                        break;
                    case 2:
                        custo2 = qntKwh*0.5;
                        c2++;
                        //Saída de dados
                        cout << "Custo total para o consumidor " << i+1 << ": R$" << custo2 << endl;
                        break;

                    case 3:
                        custo3 = qntKwh*0.7;
                        c3++;
                        //Saída de dados
                        cout << "Custo total para o consumidor " << i+1 << ": R$" << custo3 << endl;
                        break;

                    default:
                        cout << "Opção inválida! " << endl;
                        break;
                }
            }
        i++;
    }
       //Verifica caso o consumo de nenhum consumidor for verificado ou todos possuírem consumo ZERO
       if(totalConsumo == 0 and custo1 == 0 and custo2 == 0 and custo3 == 0){
            //Saída de dados
            cout << "O total de consumo e o custo de cada consumidor (se foi verificado algum) é igual à ZERO! " << endl;
       }
       else{
            //Saída de dados
            totalConsumo = custo1 + custo2 + custo3;
            cout << "Total consumido pelos 3 tipos =  " << "R$ " << totalConsumo << endl;
            cout << "Média de consumo dos tipos 1 e 2 = " << "R$ " << (custo1 + custo2)/(c1+c2) << endl;
       }

return 0;
system("PAUSE");
}
