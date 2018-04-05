/*
Leonardo Aguilar
Calcula os impostos, gratificações e o salário líquido de um funcionário.
Entrada: Salário Base e Tempo de serviço.
Saída: Impostos, Gratificação, Salário Líquido e Classificação.
*/

#include <iostream>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
#include <windows.h>

using namespace std;

int main(){


	//Inclusão de caracteres especiais
	setlocale(LC_ALL, "Portuguese");

	//Declaração das variáveis
    float salBase = 0, tServ, imp, salLiq = 0;

    //Entrada de dados pelo usuário
    cout << "Digite o salário base do funcionário (em R$): " << endl;
    cin >> salBase;

    cout << "Digite o tempo de serviço do funcionário (em anos): " << endl;
    cin >> tServ;

    //Calcula o imposto
    if(salBase < 200){
        cout << "Isento de impostos! " << endl;
    }
    else if(salBase >= 200 and salBase <= 450){
        imp = salBase*0.03;
        cout << "Impostos: R$" << imp << endl;
    }
    else if(salBase > 450 and salBase <  700){
        imp = salBase*0.08;
        cout << "Impostos: R$" << imp << endl;
    }
    else {
        imp = salBase*0.12;
        cout << "Impostos: R$" << imp << endl;
    }

    //Calcula a gratificação
    if(salBase > 500) {
        if(tServ <= 3){
            cout << "Gratificação: R$20,00" << endl;
            salLiq = salBase - imp + 20;
        }
        else{
            cout << "Gratificação: R$30,00" << endl;
            salLiq = salBase - imp + 30;
        }
    }

    else{
        if(tServ <= 3){
            cout << "Gratificação: R$23,00" << endl;
            salLiq = salBase - imp + 23;
        }
        else if(tServ > 3 and tServ < 6){
            cout << "Gratificação: R$35,00" << endl;
            salLiq = salBase - imp + 35;
        }
        else{
            cout << "Gratificação: R$33,00" << endl;
            salLiq = salBase - imp + 33;
        }
    }

    //Imprime o salário líquido
    cout <<"Salário líquido: R$"<< salLiq << endl;;

    //Define a classificação do salário do pessoa
    if(salLiq <= 350){
        cout << "Classificação: A" << endl;
    }
    else if(salLiq > 350 and salLiq < 600){
        cout << "Classificação: B" << endl;
    }    
    else{
        cout << "Classificação: C" << endl;
    }
return 0;
system("PAUSE");
}
