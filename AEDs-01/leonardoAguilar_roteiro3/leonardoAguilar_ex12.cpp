/*
Leonardo Aguilar
Categorizar um nadador dado sua idade
Entrada: Idade
Saída: Categoria
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
    int idade;

	//Entrada de dados pelo usuário
    cout << "Digite a idade do nadador: " << endl;
    cin >> idade;

    //Condições das categorias
    if(idade < 5){
        cout << "Não existe categoria para essa faixa etária! " << endl;
    }
    else if(idade >= 5 and idade <= 7){
        cout << "Categoria INFANTIL! " << endl;
    }
    else if(idade >= 8 and idade <= 10){
        cout << "Categoria JUVENIL! " << endl;
    }
    else if(idade >= 11 and idade <= 15){
        cout << "Categoria ADOLESCENTE! " << endl;
    }
    else if(idade >= 16 and idade <= 40){
        cout << "Categoria ADULTO! " << endl;
    }
    else {
        cout << "Categoria SÊNIOR! " << endl;
    }

return 0;
system("PAUSE");
}
