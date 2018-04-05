/*
Leonardo Aguilar
Define se um caractere digitado pelo usuário à vogal ou não
Entrada: Caractere.
Saída: Vogal ou Não vogal

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

	//Declarção das variáveis
	char letra;

	//Entrada de dados pelo usuário
	cout << "Digite uma letra: " << endl;
	cin >> letra;

    //Transforma qualquer letra digitada para minúscula
	letra = tolower(letra);

	//Condição para ser vogal ou não
    if(letra == 'a' or letra == 'e' or letra == 'i' or letra == 'o' or letra == 'u'){
        cout << letra << " é uma VOGAL!" << endl;
    }
    else{
        cout << letra << " não é uma vogal!" << endl;
    }

return 0;
system("PAUSE");
}
