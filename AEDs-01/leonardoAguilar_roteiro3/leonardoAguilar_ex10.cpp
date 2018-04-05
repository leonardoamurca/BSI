/*
Leonardo Aguilar
Calcula a quantidade necessárias de um medicamento e imprime a quantidade de gotas
que o paciente deve tomar por dose.
1 ml = 20 gotas
1 ml = 500mg
500mg/ml
Entrada: Idade e peso
Saída: Qnt. Gotas
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
    int qntGotas, idade;
    float peso;

	//Entrada de dados pelo usuário
    cout << "Digite a idade do paciente: " << endl;
    cin >> idade;

    cout << "Digite o peso do paciente (em Kg): " << endl;
    cin >> peso;

    //Quantidade da dose dado a idade
    if (idade >= 12){
        if(peso >= 60){
            qntGotas = (1000.0/500)*20;
            cout << "Quantidade de gotas a serem tomadas = " << qntGotas << " gotas" << endl;
        }
        else{
            qntGotas = (875.0/500)*20;
            cout << "Quantidade de gotas a serem tomadas = " << qntGotas << " gotas" << endl;
        }
    }
    else {
        if(peso >= 5 and peso <= 9){
            qntGotas = (125.0/500)*20;
            cout << "Quantidade de gotas a serem tomadas = " << qntGotas << " gotas" << endl;
        }
        else if(peso >= 9.1 and peso <= 16){
            qntGotas = (250.0/500)*20;
            cout << "Quantidade de gotas a serem tomadas = " << qntGotas << " gotas" << endl;
        }
        else if(peso >= 16.1 and peso <=24){
            qntGotas = (375.0/500)*20;
            cout << "Quantidade de gotas a serem tomadas = " << qntGotas << " gotas" << endl;
        }
        else if(peso >= 24.1 and peso <=30){
            qntGotas = (500.0/500)*20;
            cout << "Quantidade de gotas a serem tomadas = " << qntGotas << " gotas" << endl;
        }
        else if (peso > 30) {
            qntGotas = (750.0/500)*20;
            cout << "Quantidade de gotas a serem tomadas = " << qntGotas << " gotas" << endl;
        }
    }

return 0;
system("PAUSE");
}
