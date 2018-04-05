/*
Leonardo Aguilar
Analisa se o cidadão pode votar ou não dado seu ano de nascimento
Entrada: Ano de nascimento
Saída: Não vota, facultativo ou obrigatório
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
	int ano;

	//Entrada de dados pelo usuário
    cout << "Digite o ano de nascimento: " << endl;
    cin >> ano;

    //Condição para votar
    if(ano > 2002){
        cout << "Não vota! " << endl;
    }
    else if( (ano >= 2000 and ano <= 2002) or ano <= 1948){
        cout << "Voto facultativo! " << endl;
    }
    else {
        cout << "Voto obrigatório! " << endl;
    }

return 0;
system("PAUSE");
}
