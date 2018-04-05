/*
Leonardo Aguilar
Calcula o peso ideal de uma pessoa dados certas condições
Entrada: Altura e Sexo ('M' ou 'F')
Saída: Peso ideal
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
    float altura, peso = 0;
    char sexo;

    //Entrada de dados pelo usuário
    cout << "Digite sua altura (em metros): " << endl;
    cin >> altura;
    
    cout << "\t      MENU" << endl;
    cout << "\t Maculino --> M" << endl;
    cout << "\t Feminino --> F" << endl;
    cout << "Digite seu sexo" << endl;
    cin >> sexo;
    sexo = toupper(sexo);
    
    //Condições para um peso ideal
    switch (sexo){
        case 'M':
            peso = (72.2*altura) - 58;
            cout << "Peso ideal = " << peso << " Kg" << endl;
            break;
        case 'F':
            peso = (62.1*altura) - 44.7;
            cout << "Peso ideal = " << peso << " Kg" << endl;
            break;

    default: cout << "Opção inválida!" << endl;
    break;
    }
   
return 0;
system("PAUSE");
}
