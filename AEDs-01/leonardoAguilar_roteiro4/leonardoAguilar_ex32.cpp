/*
Leonardo Aguilar
Calcula a soma dos pesos das mulheres com mais de 30 anos e a altura
do homem mais alto.
Entrada: Sexo, peso, altura, idade, numero de pessoas
Saída: Soma dos pesos das mulheres com mais de 30 anos e a altura do homem
mais alto

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
	int n, i = 0, idade;
	char sexo;
	float h, peso, soma = 0, maior = -100000;

    //Entrada de dados pelo usuário
	cout << "Digite o número de pessoas: " << endl;
	cin >> n;

    //Looping para o numeros N de pessoas
	while(i < n){
        //Entrada de dados
        cout << "Digite o sexo (M - Masculino/ F - Feminino): " << endl;
        cin >> sexo;
        sexo = toupper(sexo);

        cout << "Digite o peso: " << endl;
        cin >> peso;

        cout << "Digite a altura: " << endl;
        cin >> h;

        cout << "Digite a idade: " << endl;
        cin >> idade;

        //Soma dos pesos das mulheres com mais de 30 anos
        if(sexo == 'F' and idade > 30){
            soma += peso;
        }

        //Altura do homem mais alto
        if(sexo == 'M' and h > maior){
            maior = h;
        }
        i++;
	}
	//Saída de dados
	cout << "Soma dos pesos das mulheres com mais de 30 anos: " << soma << "Kg" << endl;
	cout << "A altura do homem mais alto é: "<< maior << "m" << endl;
return 0;
}
